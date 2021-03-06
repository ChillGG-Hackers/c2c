#ifdef ZZ_INCLUDE_CODE
ZZ_4B17C:
	SP -= 8;
	if (!A1)
	{
		V0 = A1 - 1;
		ZZ_CLOCKCYCLES(3,0x8004B19C);
		goto ZZ_4B17C_20;
	}
	V0 = A1 - 1;
	V1 = -1;
	ZZ_CLOCKCYCLES(4,0x8004B18C);
ZZ_4B17C_10:
	EMU_Write32(A0,R0);
	V0 -= 1;
	if (V0 != V1)
	{
		A0 += 4;
		ZZ_CLOCKCYCLES(4,0x8004B18C);
		goto ZZ_4B17C_10;
	}
	A0 += 4;
	ZZ_CLOCKCYCLES(4,0x8004B19C);
ZZ_4B17C_20:
	SP += 8;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(3);
	ZZ_JUMPREGISTER(0x8004B0B0,ZZ_4B080_30);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004B17C,0x8004B18C,ZZ_4B17C);
ZZ_MARK_TARGET(0x8004B18C,0x8004B19C,ZZ_4B17C_10);
ZZ_MARK_TARGET(0x8004B19C,0x8004B1A8,ZZ_4B17C_20);
