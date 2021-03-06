#ifdef ZZ_INCLUDE_CODE
ZZ_52E18:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 3468); //+ 0xFFFFF274
	SP -= 24;
	if (V0)
	{
		EMU_Write32(SP + 16,RA); //+ 0x10
		ZZ_CLOCKCYCLES(5,0x80052ECC);
		goto ZZ_52E18_B4;
	}
	EMU_Write32(SP + 16,RA); //+ 0x10
	V1 = 0x80060000;
	V1 = EMU_ReadU8(V1 - 3454); //+ 0xFFFFF282
	V0 = 127;
	AT = 0x80060000;
	EMU_Write8(AT - 3455,R0); //+ 0xFFFFF281
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(12,0x80052ECC);
		goto ZZ_52E18_B4;
	}
	RA = 0x80052E50; //ZZ_52E18_38
	ZZ_CLOCKCYCLES(14,0x80049FB4);
	goto ZZ_49FB4;
ZZ_52E18_38:
	V0 = 0x80060000;
	V0 = EMU_ReadU8(V0 - 3456); //+ 0xFFFFF280
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x80052E7C);
		goto ZZ_52E18_64;
	}
	RA = 0x80052E6C; //ZZ_52E18_54
	A0 = R0;
	ZZ_CLOCKCYCLES(7,0x8004A9A0);
	goto ZZ_4A9A0;
ZZ_52E18_54:
	AT = 0x80060000;
	EMU_Write8(AT - 3456,R0); //+ 0xFFFFF280
	ZZ_CLOCKCYCLES(4,0x80052EB8);
	goto ZZ_52E18_A0;
ZZ_52E18_64:
	V0 = 0x80060000;
	V0 = EMU_ReadU8(V0 - 3454); //+ 0xFFFFF282
	if (V0)
	{
		A0 = 6;
		ZZ_CLOCKCYCLES(5,0x80052EB0);
		goto ZZ_52E18_98;
	}
	A0 = 6;
	A1 = 0x80060000;
	A1 = EMU_ReadU32(A1 - 3460); //+ 0xFFFFF27C
	RA = 0x80052EA0; //ZZ_52E18_88
	A0 = R0;
	ZZ_CLOCKCYCLES(9,0x8004A940);
	goto ZZ_4A940;
ZZ_52E18_88:
	AT = 0x80060000;
	EMU_Write32(AT - 3460,R0); //+ 0xFFFFF27C
	ZZ_CLOCKCYCLES(4,0x80052EB8);
	goto ZZ_52E18_A0;
ZZ_52E18_98:
	RA = 0x80052EB8; //ZZ_52E18_A0
	A1 = R0;
	ZZ_CLOCKCYCLES(2,0x8004A940);
	goto ZZ_4A940;
ZZ_52E18_A0:
	RA = 0x80052EC0; //ZZ_52E18_A8
	ZZ_CLOCKCYCLES(2,0x80049FC4);
	goto ZZ_49FC4;
ZZ_52E18_A8:
	V0 = 127;
	AT = 0x80060000;
	EMU_Write8(AT - 3454,V0); //+ 0xFFFFF282
	ZZ_CLOCKCYCLES(3,0x80052ECC);
ZZ_52E18_B4:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x800346DC,ZZ_346B8_24);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80052E18,0x80052E50,ZZ_52E18);
ZZ_MARK_TARGET(0x80052E50,0x80052E6C,ZZ_52E18_38);
ZZ_MARK_TARGET(0x80052E6C,0x80052E7C,ZZ_52E18_54);
ZZ_MARK_TARGET(0x80052E7C,0x80052EA0,ZZ_52E18_64);
ZZ_MARK_TARGET(0x80052EA0,0x80052EB0,ZZ_52E18_88);
ZZ_MARK_TARGET(0x80052EB0,0x80052EB8,ZZ_52E18_98);
ZZ_MARK_TARGET(0x80052EB8,0x80052EC0,ZZ_52E18_A0);
ZZ_MARK_TARGET(0x80052EC0,0x80052ECC,ZZ_52E18_A8);
ZZ_MARK_TARGET(0x80052ECC,0x80052EDC,ZZ_52E18_B4);
