#ifdef ZZ_INCLUDE_CODE
ZZ_2456C:
	V0 = 0x3;
	if (A0 == V0)
	{
		V0 = (int32_t)A0 < 4;
		ZZ_CLOCKCYCLES(3,0x800245A4);
		goto ZZ_2456C_38;
	}
	V0 = (int32_t)A0 < 4;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x80024590);
		goto ZZ_2456C_24;
	}
	if (!A0)
	{
		V0 = 0x4;
		ZZ_CLOCKCYCLES(7,0x800245A8);
		goto ZZ_2456C_3C;
	}
	V0 = 0x4;
	V0 = R0;
	ZZ_CLOCKCYCLES(9,0x800245A8);
	goto ZZ_2456C_3C;
ZZ_2456C_24:
	V0 = 0x8;
	if (A0 == V0)
	{
		V0 = 0x2;
		ZZ_CLOCKCYCLES(3,0x800245A8);
		goto ZZ_2456C_3C;
	}
	V0 = 0x2;
	V0 = R0;
	ZZ_CLOCKCYCLES(5,0x800245A8);
	goto ZZ_2456C_3C;
ZZ_2456C_38:
	V0 = 0x1;
	ZZ_CLOCKCYCLES(1,0x800245A8);
ZZ_2456C_3C:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x80024654,ZZ_245B0_A4);
	ZZ_JUMPREGISTER(0x80024950,ZZ_248CC_84);
	ZZ_JUMPREGISTER(0x80024B20,ZZ_248CC_254);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8002456C,0x80024590,ZZ_2456C);
ZZ_MARK_TARGET(0x80024590,0x800245A4,ZZ_2456C_24);
ZZ_MARK_TARGET(0x800245A4,0x800245A8,ZZ_2456C_38);
ZZ_MARK_TARGET(0x800245A8,0x800245B0,ZZ_2456C_3C);
