#ifdef ZZ_INCLUDE_CODE
ZZ_5B3B0:
	AT = 0x80060000;
	EMU_Write32(AT - 2564,RA); //+ 0xFFFFF5FC
	RA = 0x8005B3C0; //ZZ_5B3B0_10
	ZZ_CLOCKCYCLES(4,0x80049FB4);
	goto ZZ_49FB4;
ZZ_5B3B0_10:
	T2 = 176;
	ZZ_JUMPREGISTER_BEGIN(T2);
	RA = 0x8005B3CC; //ZZ_5B3B0_1C
	T1 = 86;
	ZZ_CLOCKCYCLES_JR(3);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (T2,8005B3C4)
	ZZ_JUMPREGISTER_END();
ZZ_5B3B0_1C:
	T2 = 0x80060000;
	T1 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 24); //+ 0x18
	T2 -= 19432;
	T1 -= 19420;
	ZZ_CLOCKCYCLES(5,0x8005B3E0);
ZZ_5B3B0_30:
	V1 = EMU_ReadU32(T2);
	T2 += 4;
	V0 += 4;
	if (T2 != T1)
	{
		EMU_Write32(V0 + 108,V1); //+ 0x6C
		ZZ_CLOCKCYCLES(5,0x8005B3E0);
		goto ZZ_5B3B0_30;
	}
	EMU_Write32(V0 + 108,V1); //+ 0x6C
	RA = 0x8005B3FC; //ZZ_5B3B0_4C
	ZZ_CLOCKCYCLES(7,0x8004A5EC);
	goto ZZ_4A5EC;
ZZ_5B3B0_4C:
	RA = 0x8005B404; //ZZ_5B3B0_54
	ZZ_CLOCKCYCLES(2,0x80049FC4);
	goto ZZ_49FC4;
ZZ_5B3B0_54:
	RA = 0x80060000;
	RA = EMU_ReadU32(RA - 2564); //+ 0xFFFFF5FC
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x8005B370,ZZ_5B358_18);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8005B3B0,0x8005B3C0,ZZ_5B3B0);
ZZ_MARK_TARGET(0x8005B3C0,0x8005B3CC,ZZ_5B3B0_10);
ZZ_MARK_TARGET(0x8005B3CC,0x8005B3E0,ZZ_5B3B0_1C);
ZZ_MARK_TARGET(0x8005B3E0,0x8005B3FC,ZZ_5B3B0_30);
ZZ_MARK_TARGET(0x8005B3FC,0x8005B404,ZZ_5B3B0_4C);
ZZ_MARK_TARGET(0x8005B404,0x8005B418,ZZ_5B3B0_54);
