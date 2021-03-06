#ifdef ZZ_INCLUDE_CODE
ZZ_35DD8:
	V1 = EMU_ReadU32(GP + 232); //+ 0xE8
	V0 = EMU_ReadU32(V1 + 20); //+ 0x14
	A1 = EMU_ReadU32(V1 + 16); //+ 0x10
	A0 = V0 + 1;
	V0 = (int32_t)V0 < (int32_t)A1;
	V0 ^= 0x1;
	ZZ_JUMPREGISTER_BEGIN(RA);
	EMU_Write32(V1 + 20,A0); //+ 0x14
	ZZ_CLOCKCYCLES_JR(9);
	ZZ_JUMPREGISTER(0x80034B90,ZZ_34B44_4C);
	ZZ_JUMPREGISTER(0x80034D10,ZZ_34BCC_144);
	ZZ_JUMPREGISTER(0x80035D80,ZZ_35D34_4C);
	ZZ_JUMPREGISTER(0x80034CF8,ZZ_34BCC_12C);
	ZZ_JUMPREGISTER(0x80034D88,ZZ_34D74_14);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80035DD8,0x80035DFC,ZZ_35DD8);
