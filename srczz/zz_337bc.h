#ifdef ZZ_INCLUDE_CODE
ZZ_337BC:
	V1 = 0x80070000;
	V1 = EMU_ReadU32(V1 - 12656); //+ 0xFFFFCE90
	V0 = EMU_ReadU32(GP + 224); //+ 0xE0
	SP -= 272;
	EMU_Write32(SP + 264,FP); //+ 0x108
	FP = R0;
	EMU_Write32(SP + 268,RA); //+ 0x10C
	EMU_Write32(SP + 260,S7); //+ 0x104
	EMU_Write32(SP + 256,S6); //+ 0x100
	EMU_Write32(SP + 252,S5); //+ 0xFC
	EMU_Write32(SP + 248,S4); //+ 0xF8
	EMU_Write32(SP + 244,S3); //+ 0xF4
	EMU_Write32(SP + 240,S2); //+ 0xF0
	EMU_Write32(SP + 236,S1); //+ 0xEC
	if (V1 == V0)
	{
		EMU_Write32(SP + 232,S0); //+ 0xE8
		ZZ_CLOCKCYCLES(16,0x80033814);
		goto ZZ_337BC_58;
	}
	EMU_Write32(SP + 232,S0); //+ 0xE8
	EMU_Write32(GP + 224,V1); //+ 0xE0
	A0 = V1 << 14;
	A0 = A0 - V1;
	A0 <<= 8;
	RA = 0x80033814; //ZZ_337BC_58
	A0 = (int32_t)A0 >> 16;
	ZZ_CLOCKCYCLES(22,0x800328DC);
	goto ZZ_328DC;
ZZ_337BC_58:
	V1 = 0x80070000;
	V1 = EMU_ReadU32(V1 - 12652); //+ 0xFFFFCE94
	V0 = EMU_ReadU32(GP + 220); //+ 0xDC
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(6,0x80033844);
		goto ZZ_337BC_88;
	}
	EMU_Write32(GP + 220,V1); //+ 0xDC
	A0 = V1 << 14;
	A0 = A0 - V1;
	A0 <<= 8;
	RA = 0x80033844; //ZZ_337BC_88
	A0 = (int32_t)A0 >> 16;
	ZZ_CLOCKCYCLES(12,0x80033FA8);
	goto ZZ_33FA8;
ZZ_337BC_88:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 2916); //+ 0xB64
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x80033864);
		goto ZZ_337BC_A8;
	}
	A0 = EMU_ReadU32(V0 + 16); //+ 0x10
	RA = 0x80033864; //ZZ_337BC_A8
	A0 += 676;
	ZZ_CLOCKCYCLES(8,0x80034578);
	goto ZZ_34578;
ZZ_337BC_A8:
	V1 = EMU_ReadS16(GP + 388); //+ 0x184
	if (!V1)
	{
		ZZ_CLOCKCYCLES(4,0x800338EC);
		goto ZZ_337BC_130;
	}
	if ((int32_t)V1 >= 0)
	{
		V1 = -V1;
		ZZ_CLOCKCYCLES(6,0x80033898);
		goto ZZ_337BC_DC;
	}
	V1 = -V1;
	V0 = EMU_ReadS16(GP + 384); //+ 0x180
	V0 = (int32_t)V0 < (int32_t)V1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(11,0x80033898);
		goto ZZ_337BC_DC;
	}
	EMU_Write16(GP + 384,R0); //+ 0x180
	EMU_Write16(GP + 388,R0); //+ 0x184
	ZZ_CLOCKCYCLES(13,0x80033898);
ZZ_337BC_DC:
	A0 = EMU_ReadS16(GP + 388); //+ 0x184
	if ((int32_t)A0 <= 0)
	{
		V0 = 0x3FFF;
		ZZ_CLOCKCYCLES(4,0x800338C8);
		goto ZZ_337BC_10C;
	}
	V0 = 0x3FFF;
	V1 = EMU_ReadS16(GP + 384); //+ 0x180
	V0 = V0 - V1;
	V0 = (int32_t)V0 < (int32_t)A0;
	if (!V0)
	{
		V0 = 0x3FFF;
		ZZ_CLOCKCYCLES(10,0x800338C8);
		goto ZZ_337BC_10C;
	}
	V0 = 0x3FFF;
	EMU_Write16(GP + 384,V0); //+ 0x180
	EMU_Write16(GP + 388,R0); //+ 0x184
	ZZ_CLOCKCYCLES(12,0x800338C8);
ZZ_337BC_10C:
	V1 = EMU_ReadU16(GP + 384); //+ 0x180
	V0 = EMU_ReadU16(GP + 388); //+ 0x184
	V1 += V0;
	A0 = V1 << 16;
	A0 = (int32_t)A0 >> 23;
	EMU_Write16(GP + 384,V1); //+ 0x180
	RA = 0x800338EC; //ZZ_337BC_130
	A1 = A0;
	ZZ_CLOCKCYCLES(9,0x80054E14);
	goto ZZ_54E14;
ZZ_337BC_130:
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 3036); //+ 0xFFFFF424
	V0 = 0x1;
	if (V1 != V0)
	{
		V0 = -1;
		ZZ_CLOCKCYCLES(5,0x80033954);
		goto ZZ_337BC_198;
	}
	V0 = -1;
	V1 = EMU_ReadU32(GP + 396); //+ 0x18C
	V0 = -655;
	EMU_Write16(GP + 388,V0); //+ 0x184
	if (!V1)
	{
		ZZ_CLOCKCYCLES(10,0x80033948);
		goto ZZ_337BC_18C;
	}
	V0 = EMU_ReadS16(GP + 380); //+ 0x17C
	V0 = (int32_t)V0 < 2;
	if (V0)
	{
		V0 = 0x3;
		ZZ_CLOCKCYCLES(15,0x80033948);
		goto ZZ_337BC_18C;
	}
	V0 = 0x3;
	V1 = EMU_ReadU32(GP + 544); //+ 0x220
	if (V1 != V0)
	{
		A1 = 0x2;
		ZZ_CLOCKCYCLES(19,0x80033948);
		goto ZZ_337BC_18C;
	}
	A1 = 0x2;
	A0 = 0x80060000;
	A0 -= 132;
	RA = 0x80033948; //ZZ_337BC_18C
	A2 = R0;
	ZZ_CLOCKCYCLES(23,0x800347D4);
	goto ZZ_347D4;
ZZ_337BC_18C:
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 3036); //+ 0xFFFFF424
	V0 = -1;
	ZZ_CLOCKCYCLES(3,0x80033954);
ZZ_337BC_198:
	if (V1 != V0)
	{
		V0 = 0x7AF;
		ZZ_CLOCKCYCLES(2,0x800339A0);
		goto ZZ_337BC_1E4;
	}
	V0 = 0x7AF;
	V1 = EMU_ReadU32(GP + 396); //+ 0x18C
	EMU_Write16(GP + 388,V0); //+ 0x184
	if (!V1)
	{
		ZZ_CLOCKCYCLES(6,0x800339A0);
		goto ZZ_337BC_1E4;
	}
	V0 = EMU_ReadS16(GP + 380); //+ 0x17C
	V0 = (int32_t)V0 < 2;
	if (V0)
	{
		V0 = 0x3;
		ZZ_CLOCKCYCLES(11,0x800339A0);
		goto ZZ_337BC_1E4;
	}
	V0 = 0x3;
	V1 = EMU_ReadU32(GP + 544); //+ 0x220
	if (V1 != V0)
	{
		A1 = 0x3;
		ZZ_CLOCKCYCLES(15,0x800339A0);
		goto ZZ_337BC_1E4;
	}
	A1 = 0x3;
	A0 = 0x80060000;
	A0 -= 132;
	RA = 0x800339A0; //ZZ_337BC_1E4
	A2 = R0;
	ZZ_CLOCKCYCLES(19,0x800347D4);
	goto ZZ_347D4;
ZZ_337BC_1E4:
	S0 = 0x80060000;
	S0 -= 252;
	RA = 0x800339B0; //ZZ_337BC_1F4
	A0 = S0;
	ZZ_CLOCKCYCLES(4,0x80051AC4);
	goto ZZ_51AC4;
ZZ_337BC_1F4:
	S2 = EMU_ReadU32(GP + 392); //+ 0x188
	V1 = 0x80060000;
	V1 -= 2172;
	V0 = S2 << 2;
	V0 += S2;
	V0 <<= 4;
	S4 = V0 + V1;
	V0 = (int32_t)S2 < 24;
	if (!V0)
	{
		S3 = 0x1;
		ZZ_CLOCKCYCLES(10,0x80033F74);
		goto ZZ_337BC_7B8;
	}
	S3 = 0x1;
	A3 = 0x63960000;
	A3 |= 0x347F;
	EMU_Write32(SP + 216,A3); //+ 0xD8
	S1 = S4 + 4;
	S7 = S4 + 36;
	S6 = S4 + 16;
	S5 = S2 + S0;
	ZZ_CLOCKCYCLES(17,0x800339F4);
ZZ_337BC_238:
	V0 = EMU_ReadU32(S1);
	V0 &= 0x8;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x80033F54);
		goto ZZ_337BC_798;
	}
	ZZ_CLOCKCYCLES(5,0x80033A08);
ZZ_337BC_24C:
	V0 = EMU_ReadU32(S1);
	V0 >>= 12;
	V1 = V0 & 0x7;
	V0 = 0x2;
	if (V1 == V0)
	{
		V0 = (int32_t)V1 < 3;
		ZZ_CLOCKCYCLES(7,0x80033AB4);
		goto ZZ_337BC_2F8;
	}
	V0 = (int32_t)V1 < 3;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(9,0x80033A3C);
		goto ZZ_337BC_280;
	}
	if (V1 == S3)
	{
		A0 = S6;
		ZZ_CLOCKCYCLES(11,0x80033A5C);
		goto ZZ_337BC_2A0;
	}
	A0 = S6;
	ZZ_CLOCKCYCLES(13,0x80033BFC);
	goto ZZ_337BC_440;
ZZ_337BC_280:
	V0 = 0x3;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(3,0x80033BFC);
		goto ZZ_337BC_440;
	}
	V0 = EMU_ReadU32(S1 + 20); //+ 0x14
	V0 = EMU_ReadU32(V0 + 28); //+ 0x1C
	EMU_Write32(SP + 108,V0); //+ 0x6C
	ZZ_CLOCKCYCLES(8,0x80033BA4);
	goto ZZ_337BC_3E8;
ZZ_337BC_2A0:
	RA = 0x80033A64; //ZZ_337BC_2A8
	A1 = R0;
	ZZ_CLOCKCYCLES(2,0x800144C4);
	goto ZZ_144C4;
ZZ_337BC_2A8:
	if (!V0)
	{
		A0 = S6;
		ZZ_CLOCKCYCLES(2,0x80033BFC);
		goto ZZ_337BC_440;
	}
	A0 = S6;
	A1 = 0x1;
	RA = 0x80033A78; //ZZ_337BC_2BC
	A2 = R0;
	ZZ_CLOCKCYCLES(5,0x80014364);
	goto ZZ_14364;
ZZ_337BC_2BC:
	V1 = 0xC0000000;
	V1 |= 0x2;
	A0 = V0;
	V0 = A0 & V1;
	if (V0 != V1)
	{
		V1 = -28673;
		ZZ_CLOCKCYCLES(6,0x80033AA0);
		goto ZZ_337BC_2E4;
	}
	V1 = -28673;
	V0 = A0 << 2;
	V0 >>= 4;
	EMU_Write32(SP + 108,V0); //+ 0x6C
	ZZ_CLOCKCYCLES(10,0x80033BA4);
	goto ZZ_337BC_3E8;
ZZ_337BC_2E4:
	V0 = EMU_ReadU32(S1);
	V0 &= V1;
	V0 |= 0x2000;
	EMU_Write32(S1,V0);
	ZZ_CLOCKCYCLES(5,0x80033AB4);
ZZ_337BC_2F8:
	A0 = S6;
	A1 = 0x1;
	RA = 0x80033AC4; //ZZ_337BC_308
	A2 = R0;
	ZZ_CLOCKCYCLES(4,0x80014364);
	goto ZZ_14364;
ZZ_337BC_308:
	S0 = V0;
	A0 = EMU_ReadU32(S0 + 4); //+ 0x4
	RA = 0x80033AD4; //ZZ_337BC_318
	ZZ_CLOCKCYCLES(4,0x800156A0);
	goto ZZ_156A0;
ZZ_337BC_318:
	A1 = V0;
	if (!A1)
	{
		ZZ_CLOCKCYCLES(3,0x80033B44);
		goto ZZ_337BC_388;
	}
	V0 = EMU_ReadS16(A1 + 4); //+ 0x4
	if (V0 != S3)
	{
		V1 = V0;
		ZZ_CLOCKCYCLES(7,0x80033AFC);
		goto ZZ_337BC_340;
	}
	V1 = V0;
	V0 = 0x14;
	EMU_Write16(A1 + 4,V0); //+ 0x4
	ZZ_CLOCKCYCLES(10,0x80033B10);
	goto ZZ_337BC_354;
ZZ_337BC_340:
	V0 = V1 - 20;
	V0 &= 0xFFFF;
	V0 = V0 < 2;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x80033BFC);
		goto ZZ_337BC_440;
	}
	ZZ_CLOCKCYCLES(5,0x80033B10);
ZZ_337BC_354:
	V0 = EMU_ReadU32(A1 + 28); //+ 0x1C
	EMU_Write32(SP + 108,V0); //+ 0x6C
	V0 = EMU_ReadU8(A1 + 15); //+ 0xF
	A0 = S0;
	V0 += 1;
	EMU_Write8(A1 + 15,V0); //+ 0xF
	RA = 0x80033B34; //ZZ_337BC_378
	EMU_Write32(S1 + 20,A1); //+ 0x14
	ZZ_CLOCKCYCLES(9,0x8001424C);
	goto ZZ_1424C;
ZZ_337BC_378:
	RA = 0x80033B3C; //ZZ_337BC_380
	A0 = V0;
	ZZ_CLOCKCYCLES(2,0x80013F14);
	goto ZZ_13F14;
ZZ_337BC_380:
	A0 = SP + 80;
	ZZ_CLOCKCYCLES(2,0x80033BA8);
	goto ZZ_337BC_3EC;
ZZ_337BC_388:
	RA = 0x80033B4C; //ZZ_337BC_390
	A0 = S0;
	ZZ_CLOCKCYCLES(2,0x8001424C);
	goto ZZ_1424C;
ZZ_337BC_390:
	V1 = V0;
	V0 = EMU_ReadU16(V1 + 4); //+ 0x4
	V0 -= 20;
	V0 = V0 < 2;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(7,0x80033BFC);
		goto ZZ_337BC_440;
	}
	V0 = EMU_ReadS16(V1 + 6); //+ 0x6
	if (V0 != S3)
	{
		V0 = 0xA;
		ZZ_CLOCKCYCLES(11,0x80033BFC);
		goto ZZ_337BC_440;
	}
	V0 = 0xA;
	EMU_Write16(V1 + 4,V0); //+ 0x4
	V0 = EMU_ReadU32(S0 + 4); //+ 0x4
	EMU_Write32(V1 + 24,V0); //+ 0x18
	V1 = 0x80070000;
	V1 -= 32184;
	V0 = EMU_ReadU32(V1);
	V0 += 1;
	EMU_Write32(V1,V0);
	ZZ_CLOCKCYCLES(22,0x80033BFC);
	goto ZZ_337BC_440;
ZZ_337BC_3E8:
	A0 = SP + 80;
	ZZ_CLOCKCYCLES(1,0x80033BA8);
ZZ_337BC_3EC:
	V0 = 0x80;
	EMU_Write32(SP + 84,V0); //+ 0x54
	V0 = S3 << S2;
	RA = 0x80033BBC; //ZZ_337BC_400
	EMU_Write32(SP + 80,V0); //+ 0x50
	ZZ_CLOCKCYCLES(5,0x80051B50);
	goto ZZ_51B50;
ZZ_337BC_400:
	V1 = EMU_ReadU32(S1);
	A0 = 0xFFFF0000;
	A0 |= 0x7FFF;
	V0 = -28673;
	V1 &= V0;
	A0 &= V1;
	V1 &= 0x10;
	if (!V1)
	{
		EMU_Write32(S1,A0);
		ZZ_CLOCKCYCLES(9,0x80033BF0);
		goto ZZ_337BC_434;
	}
	EMU_Write32(S1,A0);
	V0 = EMU_ReadS16(S1 + 28); //+ 0x1C
	if (V0)
	{
		ZZ_CLOCKCYCLES(13,0x80033BFC);
		goto ZZ_337BC_440;
	}
	ZZ_CLOCKCYCLES(13,0x80033BF0);
ZZ_337BC_434:
	V0 = A0 | 0x10;
	EMU_Write32(S1,V0);
	EMU_Write16(S1 + 28,S3); //+ 0x1C
	ZZ_CLOCKCYCLES(3,0x80033BFC);
ZZ_337BC_440:
	V1 = EMU_ReadU32(S1);
	V0 = V1 & 0x8000;
	if (V0)
	{
		V0 = V1 & 0x10;
		ZZ_CLOCKCYCLES(5,0x80033F54);
		goto ZZ_337BC_798;
	}
	V0 = V1 & 0x10;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(7,0x80033C50);
		goto ZZ_337BC_494;
	}
	V0 = EMU_ReadU16(S1 + 28); //+ 0x1C
	V0 -= 1;
	EMU_Write16(S1 + 28,V0); //+ 0x1C
	V0 <<= 16;
	if (V0)
	{
		A1 = S3 << S2;
		ZZ_CLOCKCYCLES(14,0x80033F54);
		goto ZZ_337BC_798;
	}
	A1 = S3 << S2;
	V1 = EMU_ReadU32(S1);
	A0 = 0x1;
	V0 = -17;
	V1 &= V0;
	RA = 0x80033C4C; //ZZ_337BC_490
	EMU_Write32(S1,V1);
	ZZ_CLOCKCYCLES(20,0x80051310);
	goto ZZ_51310;
ZZ_337BC_490:
	EMU_Write8(S5,S3);
	ZZ_CLOCKCYCLES(1,0x80033C50);
ZZ_337BC_494:
	V1 = EMU_ReadU8(S5);
	V0 = 0x3;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(4,0x80033D14);
		goto ZZ_337BC_558;
	}
	V1 = EMU_ReadU8(S1 + 24); //+ 0x18
	V0 = V1 < 2;
	if (V0)
	{
		V0 = V1 - 1;
		ZZ_CLOCKCYCLES(9,0x80033C8C);
		goto ZZ_337BC_4D0;
	}
	V0 = V1 - 1;
	A0 = 0x1;
	A1 = S3 << S2;
	RA = 0x80033C84; //ZZ_337BC_4C8
	EMU_Write8(S1 + 24,V0); //+ 0x18
	ZZ_CLOCKCYCLES(13,0x80051310);
	goto ZZ_51310;
ZZ_337BC_4C8:
	EMU_Write8(S5,S3);
	ZZ_CLOCKCYCLES(2,0x80033D14);
	goto ZZ_337BC_558;
ZZ_337BC_4D0:
	V0 = EMU_ReadU32(S1 + 16); //+ 0x10
	A3 = EMU_ReadU32(SP + 216); //+ 0xD8
	if (V0 == A3)
	{
		ZZ_CLOCKCYCLES(5,0x80033D04);
		goto ZZ_337BC_548;
	}
	A0 = EMU_ReadU32(S1 + 20); //+ 0x14
	if (!A0)
	{
		ZZ_CLOCKCYCLES(9,0x80033CB8);
		goto ZZ_337BC_4FC;
	}
	RA = 0x80033CB8; //ZZ_337BC_4FC
	ZZ_CLOCKCYCLES(11,0x80013F14);
	goto ZZ_13F14;
ZZ_337BC_4FC:
	A2 = EMU_ReadU32(S1 + 8); //+ 0x8
	A0 = S1;
	RA = 0x80033CC8; //ZZ_337BC_50C
	A1 = S4 + 20;
	ZZ_CLOCKCYCLES(4,0x80032DA4);
	goto ZZ_32DA4;
ZZ_337BC_50C:
	A3 = EMU_ReadU32(SP + 216); //+ 0xD8
	if (!V0)
	{
		EMU_Write32(S1 + 16,A3); //+ 0x10
		ZZ_CLOCKCYCLES(3,0x80033A08);
		goto ZZ_337BC_24C;
	}
	EMU_Write32(S1 + 16,A3); //+ 0x10
	A0 = SP + 144;
	EMU_Write32(SP + 172,V0); //+ 0xAC
	V0 = 0x80;
	S0 = S3 << S2;
	EMU_Write32(SP + 148,V0); //+ 0x94
	RA = 0x80033CF0; //ZZ_337BC_534
	EMU_Write32(SP + 144,S0); //+ 0x90
	ZZ_CLOCKCYCLES(10,0x80051B50);
	goto ZZ_51B50;
ZZ_337BC_534:
	A0 = 0x1;
	RA = 0x80033CFC; //ZZ_337BC_540
	A1 = S0;
	ZZ_CLOCKCYCLES(3,0x80051310);
	goto ZZ_51310;
ZZ_337BC_540:
	EMU_Write8(S5,S3);
	ZZ_CLOCKCYCLES(2,0x80033BFC);
	goto ZZ_337BC_440;
ZZ_337BC_548:
	RA = 0x80033D0C; //ZZ_337BC_550
	A0 = S4;
	ZZ_CLOCKCYCLES(2,0x80033764);
	goto ZZ_33764;
ZZ_337BC_550:
	ZZ_CLOCKCYCLES(2,0x80033F28);
	goto ZZ_337BC_76C;
ZZ_337BC_558:
	EMU_Write32(SP + 84,R0); //+ 0x54
	V0 = EMU_ReadU32(S1);
	V0 &= 0x40;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(6,0x80033DE8);
		goto ZZ_337BC_62C;
	}
	V0 = EMU_ReadU32(S1 + 64); //+ 0x40
	V1 = EMU_ReadU16(S1 + 26); //+ 0x1A
	A0 = EMU_ReadU32(S1 + 60); //+ 0x3C
	V1 += V0;
	A0 -= 1;
	EMU_Write16(S1 + 26,V1); //+ 0x1A
	if ((int32_t)A0 <= 0)
	{
		EMU_Write32(S1 + 60,A0); //+ 0x3C
		ZZ_CLOCKCYCLES(14,0x80033D54);
		goto ZZ_337BC_598;
	}
	EMU_Write32(S1 + 60,A0); //+ 0x3C
	FP = 0x1;
	ZZ_CLOCKCYCLES(16,0x80033D64);
	goto ZZ_337BC_5A8;
ZZ_337BC_598:
	V0 = EMU_ReadU32(S1);
	V1 = -65;
	V0 &= V1;
	EMU_Write32(S1,V0);
	ZZ_CLOCKCYCLES(4,0x80033D64);
ZZ_337BC_5A8:
	V0 = EMU_ReadU32(SP + 84); //+ 0x54
	V0 |= 0x3;
	EMU_Write32(SP + 84,V0); //+ 0x54
	V0 = EMU_ReadU32(S1 + 8); //+ 0x8
	V0 = EMU_ReadU8(V0 + 288); //+ 0x120
	V0 -= 6;
	V0 = V0 < 2;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(12,0x80033DC8);
		goto ZZ_337BC_60C;
	}
	A0 = EMU_ReadS16(S1 + 26); //+ 0x1A
	V0 = (int32_t)A0 < 16383;
	if (!V0)
	{
		V1 = A0;
		ZZ_CLOCKCYCLES(17,0x80033DB8);
		goto ZZ_337BC_5FC;
	}
	V1 = A0;
	if ((int32_t)A0 >= 0)
	{
		V0 = V1;
		ZZ_CLOCKCYCLES(19,0x80033DBC);
		goto ZZ_337BC_600;
	}
	V0 = V1;
	V0 = R0;
	ZZ_CLOCKCYCLES(21,0x80033DBC);
	goto ZZ_337BC_600;
ZZ_337BC_5FC:
	V0 = 0x3FFF;
	ZZ_CLOCKCYCLES(1,0x80033DBC);
ZZ_337BC_600:
	EMU_Write16(SP + 90,V0); //+ 0x5A
	EMU_Write16(SP + 88,V0); //+ 0x58
	ZZ_CLOCKCYCLES(3,0x80033DE8);
	goto ZZ_337BC_62C;
ZZ_337BC_60C:
	A1 = EMU_ReadS16(S1 + 26); //+ 0x1A
	RA = 0x80033DD4; //ZZ_337BC_618
	A0 = S7;
	ZZ_CLOCKCYCLES(3,0x80032958);
	goto ZZ_32958;
ZZ_337BC_618:
	EMU_ReadLeft(V0 + 3,&V1); //+ 0x3
	EMU_ReadRight(V0,&V1);
	EMU_WriteLeft(SP + 91,V1); //+ 0x5B
	EMU_WriteRight(SP + 88,V1); //+ 0x58
	ZZ_CLOCKCYCLES(5,0x80033DE8);
ZZ_337BC_62C:
	V0 = EMU_ReadU32(S1);
	V0 &= 0x80;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x80033E78);
		goto ZZ_337BC_6BC;
	}
	V0 = EMU_ReadU32(S1 + 72); //+ 0x48
	V1 = EMU_ReadU16(S1 + 30); //+ 0x1E
	A0 = EMU_ReadU32(S1 + 68); //+ 0x44
	V1 += V0;
	A0 -= 1;
	EMU_Write16(S1 + 30,V1); //+ 0x1E
	if ((int32_t)A0 <= 0)
	{
		EMU_Write32(S1 + 68,A0); //+ 0x44
		ZZ_CLOCKCYCLES(13,0x80033E24);
		goto ZZ_337BC_668;
	}
	EMU_Write32(S1 + 68,A0); //+ 0x44
	FP = 0x1;
	ZZ_CLOCKCYCLES(15,0x80033E34);
	goto ZZ_337BC_678;
ZZ_337BC_668:
	V0 = EMU_ReadU32(S1);
	V1 = -129;
	V0 &= V1;
	EMU_Write32(S1,V0);
	ZZ_CLOCKCYCLES(4,0x80033E34);
ZZ_337BC_678:
	V0 = EMU_ReadU32(SP + 84); //+ 0x54
	V0 |= 0x10;
	EMU_Write32(SP + 84,V0); //+ 0x54
	V1 = EMU_ReadU16(S1 + 30); //+ 0x1E
	V0 = V1 << 5;
	V0 += V1;
	V0 <<= 3;
	V0 = V0 - V1;
	V0 <<= 4;
	V0 += V1;
	if ((int32_t)V0 >= 0)
	{
		ZZ_CLOCKCYCLES(14,0x80033E70);
		goto ZZ_337BC_6B4;
	}
	V0 += 4095;
	ZZ_CLOCKCYCLES(15,0x80033E70);
ZZ_337BC_6B4:
	V0 = (int32_t)V0 >> 12;
	EMU_Write16(SP + 100,V0); //+ 0x64
	ZZ_CLOCKCYCLES(2,0x80033E78);
ZZ_337BC_6BC:
	V0 = EMU_ReadU32(S1);
	V0 &= 0x200;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x80033F0C);
		goto ZZ_337BC_750;
	}
	A2 = EMU_ReadU32(S1 + 8); //+ 0x8
	if (!A2)
	{
		ZZ_CLOCKCYCLES(9,0x80033F0C);
		goto ZZ_337BC_750;
	}
	V0 = EMU_ReadU32(A2 + 96); //+ 0x60
	V1 = EMU_ReadU32(A2 + 100); //+ 0x64
	A0 = EMU_ReadU32(A2 + 104); //+ 0x68
	EMU_Write32(S1 + 44,V0); //+ 0x2C
	EMU_Write32(S1 + 48,V1); //+ 0x30
	EMU_Write32(S1 + 52,A0); //+ 0x34
	A0 = A2 + 96;
	A1 = SP + 144;
	RA = 0x80033EC4; //ZZ_337BC_708
	A2 = 0x1;
	ZZ_CLOCKCYCLES(19,0x8001EE74);
	goto ZZ_1EE74;
ZZ_337BC_708:
	V0 = EMU_ReadU32(SP + 144); //+ 0x90
	V1 = EMU_ReadU32(SP + 148); //+ 0x94
	A0 = EMU_ReadU32(SP + 152); //+ 0x98
	EMU_Write32(S1 + 32,V0); //+ 0x20
	EMU_Write32(S1 + 36,V1); //+ 0x24
	EMU_Write32(S1 + 40,A0); //+ 0x28
	V0 = EMU_ReadU32(SP + 84); //+ 0x54
	V0 |= 0x3;
	EMU_Write32(SP + 84,V0); //+ 0x54
	A1 = EMU_ReadS16(S1 + 26); //+ 0x1A
	RA = 0x80033EF8; //ZZ_337BC_73C
	A0 = S7;
	ZZ_CLOCKCYCLES(13,0x80032958);
	goto ZZ_32958;
ZZ_337BC_73C:
	EMU_ReadLeft(V0 + 3,&V1); //+ 0x3
	EMU_ReadRight(V0,&V1);
	EMU_WriteLeft(SP + 91,V1); //+ 0x5B
	EMU_WriteRight(SP + 88,V1); //+ 0x58
	ZZ_CLOCKCYCLES(5,0x80033F0C);
ZZ_337BC_750:
	V0 = EMU_ReadU32(SP + 84); //+ 0x54
	if (!V0)
	{
		V0 = S3 << S2;
		ZZ_CLOCKCYCLES(4,0x80033F28);
		goto ZZ_337BC_76C;
	}
	V0 = S3 << S2;
	EMU_Write32(SP + 80,V0); //+ 0x50
	RA = 0x80033F28; //ZZ_337BC_76C
	A0 = SP + 80;
	ZZ_CLOCKCYCLES(7,0x80051B50);
	goto ZZ_51B50;
ZZ_337BC_76C:
	V1 = EMU_ReadU32(S1);
	V0 = V1 & 0x1;
	if (V0)
	{
		ZZ_CLOCKCYCLES(5,0x80033F4C);
		goto ZZ_337BC_790;
	}
	if (FP)
	{
		V0 = V1 & 0x2;
		ZZ_CLOCKCYCLES(7,0x80033F54);
		goto ZZ_337BC_798;
	}
	V0 = V1 & 0x2;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(9,0x80033F54);
		goto ZZ_337BC_798;
	}
	ZZ_CLOCKCYCLES(9,0x80033F4C);
ZZ_337BC_790:
	RA = 0x80033F54; //ZZ_337BC_798
	A0 = S4;
	ZZ_CLOCKCYCLES(2,0x80033764);
	goto ZZ_33764;
ZZ_337BC_798:
	S5 += 1;
	S2 += 1;
	S1 += 80;
	S7 += 80;
	S6 += 80;
	V0 = (int32_t)S2 < 24;
	if (V0)
	{
		S4 += 80;
		ZZ_CLOCKCYCLES(8,0x800339F4);
		goto ZZ_337BC_238;
	}
	S4 += 80;
	ZZ_CLOCKCYCLES(8,0x80033F74);
ZZ_337BC_7B8:
	RA = EMU_ReadU32(SP + 268); //+ 0x10C
	FP = EMU_ReadU32(SP + 264); //+ 0x108
	S7 = EMU_ReadU32(SP + 260); //+ 0x104
	S6 = EMU_ReadU32(SP + 256); //+ 0x100
	S5 = EMU_ReadU32(SP + 252); //+ 0xFC
	S4 = EMU_ReadU32(SP + 248); //+ 0xF8
	S3 = EMU_ReadU32(SP + 244); //+ 0xF4
	S2 = EMU_ReadU32(SP + 240); //+ 0xF0
	S1 = EMU_ReadU32(SP + 236); //+ 0xEC
	S0 = EMU_ReadU32(SP + 232); //+ 0xE8
	SP += 272;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(13);
	ZZ_JUMPREGISTER(0x800168C8,ZZ_1658C_33C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800337BC,0x80033814,ZZ_337BC);
ZZ_MARK_TARGET(0x80033814,0x80033844,ZZ_337BC_58);
ZZ_MARK_TARGET(0x80033844,0x80033864,ZZ_337BC_88);
ZZ_MARK_TARGET(0x80033864,0x80033898,ZZ_337BC_A8);
ZZ_MARK_TARGET(0x80033898,0x800338C8,ZZ_337BC_DC);
ZZ_MARK_TARGET(0x800338C8,0x800338EC,ZZ_337BC_10C);
ZZ_MARK_TARGET(0x800338EC,0x80033948,ZZ_337BC_130);
ZZ_MARK_TARGET(0x80033948,0x80033954,ZZ_337BC_18C);
ZZ_MARK_TARGET(0x80033954,0x800339A0,ZZ_337BC_198);
ZZ_MARK_TARGET(0x800339A0,0x800339B0,ZZ_337BC_1E4);
ZZ_MARK_TARGET(0x800339B0,0x800339F4,ZZ_337BC_1F4);
ZZ_MARK_TARGET(0x800339F4,0x80033A08,ZZ_337BC_238);
ZZ_MARK_TARGET(0x80033A08,0x80033A3C,ZZ_337BC_24C);
ZZ_MARK_TARGET(0x80033A3C,0x80033A5C,ZZ_337BC_280);
ZZ_MARK_TARGET(0x80033A5C,0x80033A64,ZZ_337BC_2A0);
ZZ_MARK_TARGET(0x80033A64,0x80033A78,ZZ_337BC_2A8);
ZZ_MARK_TARGET(0x80033A78,0x80033AA0,ZZ_337BC_2BC);
ZZ_MARK_TARGET(0x80033AA0,0x80033AB4,ZZ_337BC_2E4);
ZZ_MARK_TARGET(0x80033AB4,0x80033AC4,ZZ_337BC_2F8);
ZZ_MARK_TARGET(0x80033AC4,0x80033AD4,ZZ_337BC_308);
ZZ_MARK_TARGET(0x80033AD4,0x80033AFC,ZZ_337BC_318);
ZZ_MARK_TARGET(0x80033AFC,0x80033B10,ZZ_337BC_340);
ZZ_MARK_TARGET(0x80033B10,0x80033B34,ZZ_337BC_354);
ZZ_MARK_TARGET(0x80033B34,0x80033B3C,ZZ_337BC_378);
ZZ_MARK_TARGET(0x80033B3C,0x80033B44,ZZ_337BC_380);
ZZ_MARK_TARGET(0x80033B44,0x80033B4C,ZZ_337BC_388);
ZZ_MARK_TARGET(0x80033B4C,0x80033BA4,ZZ_337BC_390);
ZZ_MARK_TARGET(0x80033BA4,0x80033BA8,ZZ_337BC_3E8);
ZZ_MARK_TARGET(0x80033BA8,0x80033BBC,ZZ_337BC_3EC);
ZZ_MARK_TARGET(0x80033BBC,0x80033BF0,ZZ_337BC_400);
ZZ_MARK_TARGET(0x80033BF0,0x80033BFC,ZZ_337BC_434);
ZZ_MARK_TARGET(0x80033BFC,0x80033C4C,ZZ_337BC_440);
ZZ_MARK_TARGET(0x80033C4C,0x80033C50,ZZ_337BC_490);
ZZ_MARK_TARGET(0x80033C50,0x80033C84,ZZ_337BC_494);
ZZ_MARK_TARGET(0x80033C84,0x80033C8C,ZZ_337BC_4C8);
ZZ_MARK_TARGET(0x80033C8C,0x80033CB8,ZZ_337BC_4D0);
ZZ_MARK_TARGET(0x80033CB8,0x80033CC8,ZZ_337BC_4FC);
ZZ_MARK_TARGET(0x80033CC8,0x80033CF0,ZZ_337BC_50C);
ZZ_MARK_TARGET(0x80033CF0,0x80033CFC,ZZ_337BC_534);
ZZ_MARK_TARGET(0x80033CFC,0x80033D04,ZZ_337BC_540);
ZZ_MARK_TARGET(0x80033D04,0x80033D0C,ZZ_337BC_548);
ZZ_MARK_TARGET(0x80033D0C,0x80033D14,ZZ_337BC_550);
ZZ_MARK_TARGET(0x80033D14,0x80033D54,ZZ_337BC_558);
ZZ_MARK_TARGET(0x80033D54,0x80033D64,ZZ_337BC_598);
ZZ_MARK_TARGET(0x80033D64,0x80033DB8,ZZ_337BC_5A8);
ZZ_MARK_TARGET(0x80033DB8,0x80033DBC,ZZ_337BC_5FC);
ZZ_MARK_TARGET(0x80033DBC,0x80033DC8,ZZ_337BC_600);
ZZ_MARK_TARGET(0x80033DC8,0x80033DD4,ZZ_337BC_60C);
ZZ_MARK_TARGET(0x80033DD4,0x80033DE8,ZZ_337BC_618);
ZZ_MARK_TARGET(0x80033DE8,0x80033E24,ZZ_337BC_62C);
ZZ_MARK_TARGET(0x80033E24,0x80033E34,ZZ_337BC_668);
ZZ_MARK_TARGET(0x80033E34,0x80033E70,ZZ_337BC_678);
ZZ_MARK_TARGET(0x80033E70,0x80033E78,ZZ_337BC_6B4);
ZZ_MARK_TARGET(0x80033E78,0x80033EC4,ZZ_337BC_6BC);
ZZ_MARK_TARGET(0x80033EC4,0x80033EF8,ZZ_337BC_708);
ZZ_MARK_TARGET(0x80033EF8,0x80033F0C,ZZ_337BC_73C);
ZZ_MARK_TARGET(0x80033F0C,0x80033F28,ZZ_337BC_750);
ZZ_MARK_TARGET(0x80033F28,0x80033F4C,ZZ_337BC_76C);
ZZ_MARK_TARGET(0x80033F4C,0x80033F54,ZZ_337BC_790);
ZZ_MARK_TARGET(0x80033F54,0x80033F74,ZZ_337BC_798);
ZZ_MARK_TARGET(0x80033F74,0x80033FA8,ZZ_337BC_7B8);
