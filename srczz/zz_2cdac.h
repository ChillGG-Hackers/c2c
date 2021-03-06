#ifdef ZZ_INCLUDE_CODE
ZZ_2CDAC:
	V1 = 0x80070000;
	V1 -= 12800;
	V0 = V1 + 1044;
	EMU_Write32(V1,V0);
	AT = 0x80070000;
	EMU_Write32(AT - 12796,R0); //+ 0xFFFFCE04
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(8);
	ZZ_JUMPREGISTER(0x8001C410,ZZ_1C3D4_3C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8002CDAC,0x8002CDCC,ZZ_2CDAC);
