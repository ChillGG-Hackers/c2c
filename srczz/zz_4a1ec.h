#ifdef ZZ_INCLUDE_CODE
ZZ_4A1EC:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 12808); //+ 0xFFFFCDF8
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x8005B2F0,ZZ_5B2C8_28);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004A1EC,0x8004A1FC,ZZ_4A1EC);
