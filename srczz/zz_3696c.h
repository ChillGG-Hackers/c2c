#ifdef ZZ_INCLUDE_CODE
ZZ_3696C:
	SP -= 152;
	A0 = SP + 16;
	EMU_Write32(SP + 144,RA); //+ 0x90
	RA = 0x80036980; //ZZ_3696C_14
	A1 = 0x80;
	ZZ_CLOCKCYCLES(5,0x800494AC);
	goto ZZ_494AC;
ZZ_3696C_14:
	V0 = 0xFF;
	EMU_Write8(SP + 17,V0); //+ 0x11
	RA = 0x80036990; //ZZ_3696C_24
	EMU_Write8(SP + 16,V0); //+ 0x10
	ZZ_CLOCKCYCLES(4,0x80035FB8);
	goto ZZ_35FB8;
ZZ_3696C_24:
	RA = 0x80036998; //ZZ_3696C_2C
	ZZ_CLOCKCYCLES(2,0x8005B280);
	goto ZZ_5B280;
ZZ_3696C_2C:
	A0 = R0;
	A1 = R0;
	RA = 0x800369A8; //ZZ_3696C_3C
	A2 = SP + 16;
	ZZ_CLOCKCYCLES(4,0x8005B260);
	goto ZZ_5B260;
ZZ_3696C_3C:
	RA = 0x800369B0; //ZZ_3696C_44
	ZZ_CLOCKCYCLES(2,0x80035F84);
	goto ZZ_35F84;
ZZ_3696C_44:
	V0 = R0 < V0;
	RA = EMU_ReadU32(SP + 144); //+ 0x90
	V0 = -V0;
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 152;
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x80036A38,ZZ_369C4_74);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003696C,0x80036980,ZZ_3696C);
ZZ_MARK_TARGET(0x80036980,0x80036990,ZZ_3696C_14);
ZZ_MARK_TARGET(0x80036990,0x80036998,ZZ_3696C_24);
ZZ_MARK_TARGET(0x80036998,0x800369A8,ZZ_3696C_2C);
ZZ_MARK_TARGET(0x800369A8,0x800369B0,ZZ_3696C_3C);
ZZ_MARK_TARGET(0x800369B0,0x800369C4,ZZ_3696C_44);
