#ifdef ZZ_INCLUDE_CODE
ZZ_31974:
	V0 = A0 - A1;
	if ((int32_t)V0 >= 0)
	{
		ZZ_CLOCKCYCLES(3,0x80031984);
		goto ZZ_31974_10;
	}
	V0 = A1 - A0;
	ZZ_CLOCKCYCLES(4,0x80031984);
ZZ_31974_10:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x80019378,ZZ_191D4_1A4);
	ZZ_JUMPREGISTER(0x80019394,ZZ_191D4_1C0);
	ZZ_JUMPREGISTER(0x800193B0,ZZ_191D4_1DC);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80031974,0x80031984,ZZ_31974);
ZZ_MARK_TARGET(0x80031984,0x8003198C,ZZ_31974_10);
