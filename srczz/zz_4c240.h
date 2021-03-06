#ifdef ZZ_INCLUDE_CODE
ZZ_4C240:
	SP -= 32;
	EMU_Write32(SP + 20,S1); //+ 0x14
	S1 = 0x80060000;
	S1 -= 8266;
	EMU_Write32(SP + 24,RA); //+ 0x18
	EMU_Write32(SP + 16,S0); //+ 0x10
	V0 = EMU_ReadU8(S1);
	V0 = V0 < 2;
	if (V0)
	{
		S0 = A0;
		ZZ_CLOCKCYCLES(11,0x8004C288);
		goto ZZ_4C240_48;
	}
	S0 = A0;
	A0 = 0x80010000;
	A0 += 3892;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8272); //+ 0xFFFFDFB0
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x8004C288; //ZZ_4C240_48
	A1 = S0;
	ZZ_CLOCKCYCLES_JR(18);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V0,8004C280)
	ZZ_JUMPREGISTER_END();
ZZ_4C240_48:
	if (S0)
	{
		A0 = S1 + 106;
		ZZ_CLOCKCYCLES(2,0x8004C29C);
		goto ZZ_4C240_5C;
	}
	A0 = S1 + 106;
	A1 = -1;
	RA = 0x8004C29C; //ZZ_4C240_5C
	A2 = 20;
	ZZ_CLOCKCYCLES(5,0x8004EE84);
	goto ZZ_4EE84;
ZZ_4C240_5C:
	A0 = 0x3000000;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8276); //+ 0xFFFFDFAC
	if (!S0)
	{
		A0 |= 0x1;
		ZZ_CLOCKCYCLES(5,0x8004C2B4);
		goto ZZ_4C240_74;
	}
	A0 |= 0x1;
	A0 = 0x3000000;
	ZZ_CLOCKCYCLES(6,0x8004C2B4);
ZZ_4C240_74:
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x8004C2C4; //ZZ_4C240_84
	ZZ_CLOCKCYCLES_JR(4);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V0,8004C2BC)
	ZZ_JUMPREGISTER_END();
ZZ_4C240_84:
	RA = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 32;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(6);
	ZZ_JUMPREGISTER(0x80016300,ZZ_161D4_12C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004C240,0x8004C288,ZZ_4C240);
ZZ_MARK_TARGET(0x8004C288,0x8004C29C,ZZ_4C240_48);
ZZ_MARK_TARGET(0x8004C29C,0x8004C2B4,ZZ_4C240_5C);
ZZ_MARK_TARGET(0x8004C2B4,0x8004C2C4,ZZ_4C240_74);
ZZ_MARK_TARGET(0x8004C2C4,0x8004C2DC,ZZ_4C240_84);
