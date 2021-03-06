#ifdef ZZ_INCLUDE_CODE
ZZ_4E678:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8044); //+ 0xFFFFE094
	SP -= 24;
	EMU_Write32(SP + 20,RA); //+ 0x14
	EMU_Write32(SP + 16,S0); //+ 0x10
	V0 = EMU_ReadU32(V0);
	S0 = 0x1000000;
	V0 &= S0;
	if (V0)
	{
		V0 = 1;
		ZZ_CLOCKCYCLES(10,0x8004E950);
		goto ZZ_4E678_2D8;
	}
	V0 = 1;
	RA = 0x8004E6A8; //ZZ_4E678_30
	A0 = R0;
	ZZ_CLOCKCYCLES(12,0x8004AA8C);
	goto ZZ_4AA8C;
ZZ_4E678_30:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 8008); //+ 0xFFFFE0B8
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 8004); //+ 0xFFFFE0BC
	AT = 0x80060000;
	EMU_Write32(AT - 7996,V0); //+ 0xFFFFE0C4
	if (A0 == V1)
	{
		ZZ_CLOCKCYCLES(8,0x8004E8B0);
		goto ZZ_4E678_238;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8044); //+ 0xFFFFE094
	V0 = EMU_ReadU32(V0);
	V0 &= S0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(16,0x8004E8B0);
		goto ZZ_4E678_238;
	}
	S0 = 0x80060000;
	S0 -= 8024;
	ZZ_CLOCKCYCLES(18,0x8004E6F0);
ZZ_4E678_78:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8004); //+ 0xFFFFE0BC
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 8008); //+ 0xFFFFE0B8
	V0 += 1;
	V0 &= 0x3F;
	if (V0 != V1)
	{
		ZZ_CLOCKCYCLES(8,0x8004E72C);
		goto ZZ_4E678_B4;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8256); //+ 0xFFFFDFC0
	if (V0)
	{
		A0 = 2;
		ZZ_CLOCKCYCLES(13,0x8004E72C);
		goto ZZ_4E678_B4;
	}
	A0 = 2;
	RA = 0x8004E72C; //ZZ_4E678_B4
	A1 = R0;
	ZZ_CLOCKCYCLES(15,0x8004A970);
	goto ZZ_4A970;
ZZ_4E678_B4:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 8056); //+ 0xFFFFE088
	V0 = EMU_ReadU32(A0);
	V1 = 0x4000000;
	V0 &= V1;
	if (V0)
	{
		V1 = A0;
		ZZ_CLOCKCYCLES(8,0x8004E764);
		goto ZZ_4E678_EC;
	}
	V1 = A0;
	A0 = 0x4000000;
	ZZ_CLOCKCYCLES(9,0x8004E750);
ZZ_4E678_D8:
	V0 = EMU_ReadU32(V1);
	V0 &= A0;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x8004E750);
		goto ZZ_4E678_D8;
	}
	ZZ_CLOCKCYCLES(5,0x8004E764);
ZZ_4E678_EC:
	A1 = 0x80060000;
	A1 = EMU_ReadU32(A1 - 8004); //+ 0xFFFFE0BC
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 8004); //+ 0xFFFFE0BC
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 5;
	V1 = A1 << 1;
	V1 += A1;
	AT = 0x80070000;
	AT += V0;
	A0 = EMU_ReadU32(AT - 25512); //+ 0xFFFF9C58
	A1 = 0x80060000;
	A1 = EMU_ReadU32(A1 - 8004); //+ 0xFFFFE0BC
	V1 <<= 5;
	V0 = A1 << 1;
	V0 += A1;
	V0 <<= 5;
	AT = 0x80070000;
	AT += V0;
	A1 = EMU_ReadU32(AT - 25508); //+ 0xFFFF9C5C
	AT = 0x80070000;
	AT += V1;
	V0 = EMU_ReadU32(AT - 25516); //+ 0xFFFF9C54
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x8004E7D4; //ZZ_4E678_15C
	ZZ_CLOCKCYCLES_JR(28);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V0,8004E7CC)
	ZZ_JUMPREGISTER_END();
ZZ_4E678_15C:
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 8004); //+ 0xFFFFE0BC
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 5;
	AT = 0x80070000;
	AT += V0;
	V0 = EMU_ReadU32(AT - 25516); //+ 0xFFFF9C54
	EMU_Write32(S0,V0);
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 8004); //+ 0xFFFFE0BC
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 5;
	AT = 0x80070000;
	AT += V0;
	V0 = EMU_ReadU32(AT - 25512); //+ 0xFFFF9C58
	AT = 0x80060000;
	EMU_Write32(AT - 8020,V0); //+ 0xFFFFE0AC
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 8004); //+ 0xFFFFE0BC
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 5;
	AT = 0x80070000;
	AT += V0;
	V0 = EMU_ReadU32(AT - 25508); //+ 0xFFFF9C5C
	AT = 0x80060000;
	EMU_Write32(AT - 8016,V0); //+ 0xFFFFE0B0
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8004); //+ 0xFFFFE0BC
	V0 += 1;
	V0 &= 0x3F;
	AT = 0x80060000;
	EMU_Write32(AT - 8004,V0); //+ 0xFFFFE0BC
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 8008); //+ 0xFFFFE0B8
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8004); //+ 0xFFFFE0BC
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(47,0x8004E8B0);
		goto ZZ_4E678_238;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8044); //+ 0xFFFFE094
	V0 = EMU_ReadU32(V0);
	V1 = 0x1000000;
	V0 &= V1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(55,0x8004E6F0);
		goto ZZ_4E678_78;
	}
	ZZ_CLOCKCYCLES(55,0x8004E8B0);
ZZ_4E678_238:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 7996); //+ 0xFFFFE0C4
	RA = 0x8004E8C0; //ZZ_4E678_248
	ZZ_CLOCKCYCLES(4,0x8004AA8C);
	goto ZZ_4AA8C;
ZZ_4E678_248:
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 8008); //+ 0xFFFFE0B8
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8004); //+ 0xFFFFE0BC
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(7,0x8004E934);
		goto ZZ_4E678_2BC;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8044); //+ 0xFFFFE094
	V0 = EMU_ReadU32(V0);
	V1 = 0x1000000;
	V0 &= V1;
	if (V0)
	{
		ZZ_CLOCKCYCLES(15,0x8004E934);
		goto ZZ_4E678_2BC;
	}
	V1 = 0x80060000;
	V1 -= 8260;
	V0 = EMU_ReadU32(V1);
	if (!V0)
	{
		ZZ_CLOCKCYCLES(21,0x8004E934);
		goto ZZ_4E678_2BC;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8256); //+ 0xFFFFDFC0
	if (!V0)
	{
		ZZ_CLOCKCYCLES(26,0x8004E934);
		goto ZZ_4E678_2BC;
	}
	EMU_Write32(V1,R0);
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x8004E934; //ZZ_4E678_2BC
	ZZ_CLOCKCYCLES_JR(29);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V0,8004E92C)
	ZZ_JUMPREGISTER_END();
ZZ_4E678_2BC:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8008); //+ 0xFFFFE0B8
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 8004); //+ 0xFFFFE0BC
	V0 = V0 - V1;
	V0 &= 0x3F;
	ZZ_CLOCKCYCLES(7,0x8004E950);
ZZ_4E678_2D8:
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x8004EBA0,ZZ_4EAC0_E0);
	ZZ_JUMPREGISTER(0x8004EAE8,ZZ_4EAC0_28);
	ZZ_JUMPREGISTER(0x8004E3E4,ZZ_4E398_4C);
	ZZ_JUMPREGISTER(0x8004E63C,ZZ_4E398_2A4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004E678,0x8004E6A8,ZZ_4E678);
ZZ_MARK_TARGET(0x8004E6A8,0x8004E6F0,ZZ_4E678_30);
ZZ_MARK_TARGET(0x8004E6F0,0x8004E72C,ZZ_4E678_78);
ZZ_MARK_TARGET(0x8004E72C,0x8004E750,ZZ_4E678_B4);
ZZ_MARK_TARGET(0x8004E750,0x8004E764,ZZ_4E678_D8);
ZZ_MARK_TARGET(0x8004E764,0x8004E7D4,ZZ_4E678_EC);
ZZ_MARK_TARGET(0x8004E7D4,0x8004E8B0,ZZ_4E678_15C);
ZZ_MARK_TARGET(0x8004E8B0,0x8004E8C0,ZZ_4E678_238);
ZZ_MARK_TARGET(0x8004E8C0,0x8004E934,ZZ_4E678_248);
ZZ_MARK_TARGET(0x8004E934,0x8004E950,ZZ_4E678_2BC);
ZZ_MARK_TARGET(0x8004E950,0x8004E964,ZZ_4E678_2D8);
