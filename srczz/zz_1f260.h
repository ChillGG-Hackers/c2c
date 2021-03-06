#ifdef ZZ_INCLUDE_CODE
ZZ_1F260:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 30772); //+ 0x7834
	V1 = EMU_ReadU32(V0 + 8); //+ 0x8
	V1 <<= 8;
	AT = 0x80070000;
	EMU_Write32(AT - 12792,V1); //+ 0xFFFFCE08
	V1 = EMU_ReadU32(V0 + 4); //+ 0x4
	if (!V1)
	{
		V0 = -14;
		ZZ_CLOCKCYCLES(12,0x8001F294);
		goto ZZ_1F260_34;
	}
	V0 = -14;
	V0 = -255;
	ZZ_CLOCKCYCLES(13,0x8001F294);
ZZ_1F260_34:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x80015304,ZZ_14D6C_598);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001F260,0x8001F294,ZZ_1F260);
ZZ_MARK_TARGET(0x8001F294,0x8001F29C,ZZ_1F260_34);
