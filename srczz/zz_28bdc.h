#ifdef ZZ_INCLUDE_CODE
ZZ_28BDC:
	V0 = A0 - 48;
	V0 = V0 < 16;
	if (!V0)
	{
		V0 = (int32_t)A0 < 64;
		ZZ_CLOCKCYCLES(4,0x80028C2C);
		goto ZZ_28BDC_50;
	}
	V0 = (int32_t)A0 < 64;
	if (!V0)
	{
		EMU_Write32(A1,R0);
		ZZ_CLOCKCYCLES(6,0x80028C2C);
		goto ZZ_28BDC_50;
	}
	EMU_Write32(A1,R0);
	V0 = (int32_t)A0 < 48;
	if (V0)
	{
		ZZ_CLOCKCYCLES(9,0x80028C30);
		goto ZZ_28BDC_54;
	}
	AT = 0x80060000;
	AT += A0;
	V0 = EMU_ReadU8(AT - 16880); //+ 0xFFFFBE10
	V1 = V0 << 2;
	V1 += V0;
	V1 <<= 2;
	V0 = 0x1000;
	V0 = V0 - V1;
	EMU_Write32(A1,V0);
	ZZ_CLOCKCYCLES(20,0x80028C30);
	goto ZZ_28BDC_54;
ZZ_28BDC_50:
	EMU_Write32(A1,R0);
	ZZ_CLOCKCYCLES(1,0x80028C30);
ZZ_28BDC_54:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x80028C5C,ZZ_28C38_24);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80028BDC,0x80028C2C,ZZ_28BDC);
ZZ_MARK_TARGET(0x80028C2C,0x80028C30,ZZ_28BDC_50);
ZZ_MARK_TARGET(0x80028C30,0x80028C38,ZZ_28BDC_54);
