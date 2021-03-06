#ifdef ZZ_INCLUDE_CODE
ZZ_297AC:
	SP -= 80;
	A3 = A0;
	EMU_Write32(SP + 56,S2); //+ 0x38
	S2 = A2;
	V0 = 0x1;
	EMU_Write32(SP + 76,RA); //+ 0x4C
	EMU_Write32(SP + 72,S6); //+ 0x48
	EMU_Write32(SP + 68,S5); //+ 0x44
	EMU_Write32(SP + 64,S4); //+ 0x40
	EMU_Write32(SP + 60,S3); //+ 0x3C
	EMU_Write32(SP + 52,S1); //+ 0x34
	EMU_Write32(SP + 48,S0); //+ 0x30
	EMU_Write32(S2 + 4100,R0); //+ 0x1004
	EMU_Write32(S2 + 4096,V0); //+ 0x1000
	V0 = EMU_ReadU32(A3);
	V1 = 0xFFFE0000;
	V1 |= 0xD400;
	V0 += V1;
	EMU_Write32(S2 + 4104,V0); //+ 0x1008
	V0 = EMU_ReadU32(A1 + 256); //+ 0x100
	A2 = EMU_ReadU32(A3 + 4); //+ 0x4
	V1 = 0x40000000;
	V0 &= V1;
	if (V0)
	{
		A0 = 0xFFFD0000;
		ZZ_CLOCKCYCLES(25,0x80029838);
		goto ZZ_297AC_8C;
	}
	A0 = 0xFFFD0000;
	V0 = EMU_ReadU32(A1 + 8); //+ 0x8
	V0 = EMU_ReadU32(V0 + 64); //+ 0x40
	A0 |= 0xA800;
	V1 = V0 >> 31;
	V0 += V1;
	V0 = (int32_t)V0 >> 1;
	V0 += A2;
	V0 += A0;
	ZZ_CLOCKCYCLES(35,0x80029844);
	goto ZZ_297AC_98;
ZZ_297AC_8C:
	V0 = 0xFFFE0000;
	V0 |= 0xF480;
	V0 += A2;
	ZZ_CLOCKCYCLES(3,0x80029844);
ZZ_297AC_98:
	EMU_Write32(S2 + 4108,V0); //+ 0x100C
	V0 = EMU_ReadU32(A3 + 8); //+ 0x8
	V1 = 0xFFFE0000;
	V1 |= 0xD400;
	V0 += V1;
	EMU_Write32(S2 + 4112,V0); //+ 0x1010
	V0 = EMU_ReadU32(A3);
	V1 = 0x10000;
	V1 |= 0x2C00;
	V0 += V1;
	EMU_Write32(S2 + 4116,V0); //+ 0x1014
	V0 = EMU_ReadU32(A1 + 256); //+ 0x100
	A2 = EMU_ReadU32(A3 + 4); //+ 0x4
	V1 = 0x40000000;
	V0 &= V1;
	if (V0)
	{
		A0 = 0x20000;
		ZZ_CLOCKCYCLES(17,0x800298B0);
		goto ZZ_297AC_104;
	}
	A0 = 0x20000;
	V0 = EMU_ReadU32(A1 + 8); //+ 0x8
	V0 = EMU_ReadU32(V0 + 64); //+ 0x40
	A0 |= 0x5800;
	V1 = V0 >> 31;
	V0 += V1;
	V0 = (int32_t)V0 >> 1;
	V0 += A2;
	V0 += A0;
	ZZ_CLOCKCYCLES(27,0x800298BC);
	goto ZZ_297AC_110;
ZZ_297AC_104:
	V0 = 0x30000;
	V0 |= 0xA480;
	V0 += A2;
	ZZ_CLOCKCYCLES(3,0x800298BC);
ZZ_297AC_110:
	EMU_Write32(S2 + 4120,V0); //+ 0x1018
	V0 = EMU_ReadU32(A3 + 8); //+ 0x8
	V1 = 0x10000;
	V1 |= 0x2C00;
	V0 += V1;
	EMU_Write32(S2 + 4124,V0); //+ 0x101C
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 2916); //+ 0xB64
	S5 = EMU_ReadU32(V0 + 16); //+ 0x10
	V0 = EMU_ReadU32(S5 + 400); //+ 0x190
	if ((int32_t)V0 <= 0)
	{
		S1 = R0;
		ZZ_CLOCKCYCLES(15,0x8002996C);
		goto ZZ_297AC_1C0;
	}
	S1 = R0;
	S6 = S2 + 4104;
	S4 = 0x194;
	S3 = S5;
	ZZ_CLOCKCYCLES(18,0x80029904);
ZZ_297AC_158:
	V0 = EMU_ReadU32(S3 + 436); //+ 0x1B4
	V0 &= 0x4;
	if (!V0)
	{
		A0 = S5 + S4;
		ZZ_CLOCKCYCLES(5,0x80029954);
		goto ZZ_297AC_1A8;
	}
	A0 = S5 + S4;
	A1 = 0x1;
	RA = 0x80029924; //ZZ_297AC_178
	A2 = R0;
	ZZ_CLOCKCYCLES(8,0x80014364);
	goto ZZ_14364;
ZZ_297AC_178:
	S0 = EMU_ReadU32(V0 + 20); //+ 0x14
	A0 = S6;
	RA = 0x80029934; //ZZ_297AC_188
	A1 = S0;
	ZZ_CLOCKCYCLES(4,0x80031128);
	goto ZZ_31128;
ZZ_297AC_188:
	if (!V0)
	{
		A0 = S0;
		ZZ_CLOCKCYCLES(2,0x80029954);
		goto ZZ_297AC_1A8;
	}
	A0 = S0;
	A3 = EMU_ReadU32(S2 + 4100); //+ 0x1004
	A1 = S6;
	A2 = A3 << 3;
	RA = 0x80029950; //ZZ_297AC_1A4
	A2 += S2;
	ZZ_CLOCKCYCLES(7,0x8003C228);
	goto ZZ_3C228;
ZZ_297AC_1A4:
	EMU_Write32(S2 + 4100,V0); //+ 0x1004
	ZZ_CLOCKCYCLES(1,0x80029954);
ZZ_297AC_1A8:
	V0 = EMU_ReadU32(S5 + 400); //+ 0x190
	S4 += 4;
	S1 += 1;
	V0 = (int32_t)S1 < (int32_t)V0;
	if (V0)
	{
		S3 += 4;
		ZZ_CLOCKCYCLES(6,0x80029904);
		goto ZZ_297AC_158;
	}
	S3 += 4;
	ZZ_CLOCKCYCLES(6,0x8002996C);
ZZ_297AC_1C0:
	V0 = EMU_ReadU32(S2 + 4100); //+ 0x1004
	V1 = 0xFFFF;
	V0 <<= 3;
	V0 += S2;
	EMU_Write16(V0,V1);
	V0 = EMU_ReadU32(S2 + 4100); //+ 0x1004
	RA = EMU_ReadU32(SP + 76); //+ 0x4C
	S6 = EMU_ReadU32(SP + 72); //+ 0x48
	S5 = EMU_ReadU32(SP + 68); //+ 0x44
	S4 = EMU_ReadU32(SP + 64); //+ 0x40
	S3 = EMU_ReadU32(SP + 60); //+ 0x3C
	S2 = EMU_ReadU32(SP + 56); //+ 0x38
	S1 = EMU_ReadU32(SP + 52); //+ 0x34
	S0 = EMU_ReadU32(SP + 48); //+ 0x30
	SP += 80;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(17);
	ZZ_JUMPREGISTER(0x8002B578,ZZ_2B478_100);
	ZZ_JUMPREGISTER(0x8002B818,ZZ_2B478_3A0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800297AC,0x80029838,ZZ_297AC);
ZZ_MARK_TARGET(0x80029838,0x80029844,ZZ_297AC_8C);
ZZ_MARK_TARGET(0x80029844,0x800298B0,ZZ_297AC_98);
ZZ_MARK_TARGET(0x800298B0,0x800298BC,ZZ_297AC_104);
ZZ_MARK_TARGET(0x800298BC,0x80029904,ZZ_297AC_110);
ZZ_MARK_TARGET(0x80029904,0x80029924,ZZ_297AC_158);
ZZ_MARK_TARGET(0x80029924,0x80029934,ZZ_297AC_178);
ZZ_MARK_TARGET(0x80029934,0x80029950,ZZ_297AC_188);
ZZ_MARK_TARGET(0x80029950,0x80029954,ZZ_297AC_1A4);
ZZ_MARK_TARGET(0x80029954,0x8002996C,ZZ_297AC_1A8);
ZZ_MARK_TARGET(0x8002996C,0x800299B0,ZZ_297AC_1C0);
