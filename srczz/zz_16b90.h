#ifdef ZZ_INCLUDE_CODE
ZZ_16B90:
	SP -= 24;
	T0 = 0x80060000;
	T0 = EMU_ReadU32(T0 + 14064); //+ 0x36F0
	T2 = EMU_ReadU8(SP + 40); //+ 0x28
	T3 = EMU_ReadU8(SP + 44); //+ 0x2C
	EMU_Write32(SP + 16,RA); //+ 0x10
	V1 = EMU_ReadU32(T0 + 8); //+ 0x8
	T1 = EMU_ReadU8(SP + 48); //+ 0x30
	V0 = V1 + 16;
	EMU_Write32(T0 + 8,V0); //+ 0x8
	V0 = 0x3;
	EMU_Write8(V1 + 3,V0); //+ 0x3
	V0 = 0x2;
	EMU_Write8(V1 + 7,V0); //+ 0x7
	EMU_Write16(V1 + 12,A2); //+ 0xC
	EMU_Write16(V1 + 14,A3); //+ 0xE
	EMU_Write8(V1 + 4,T2); //+ 0x4
	EMU_Write8(V1 + 5,T3); //+ 0x5
	EMU_Write8(V1 + 6,T1); //+ 0x6
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 14064); //+ 0x36F0
	V0 = EMU_ReadU16(V0 + 8236); //+ 0x202C
	V0 += A0;
	EMU_Write16(V1 + 8,V0); //+ 0x8
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 14064); //+ 0x36F0
	V0 = EMU_ReadU16(V0 + 8238); //+ 0x202E
	V0 += A1;
	EMU_Write16(V1 + 10,V0); //+ 0xA
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 14064); //+ 0x36F0
	A1 = V1;
	RA = 0x80016C28; //ZZ_16B90_98
	A0 += 24;
	ZZ_CLOCKCYCLES(38,0x8004B854);
	goto ZZ_4B854;
ZZ_16B90_98:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x800168C0,ZZ_1658C_334);
	ZZ_JUMPREGISTER(0x80016888,ZZ_1658C_2FC);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80016B90,0x80016C28,ZZ_16B90);
ZZ_MARK_TARGET(0x80016C28,0x80016C38,ZZ_16B90_98);
