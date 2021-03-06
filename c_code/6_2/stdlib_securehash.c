/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef N_NIMCALL_PTR(void, TY3489) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3494) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3489 marker;
TY3494 deepcopy;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NU8 Sha1digest192003[20];
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU32 Sha1state192402[5];
typedef NU32 Sha1buffer192404[80];
N_NIMCALL(void, securehash_192011)(NimStringDesc* str, Sha1digest192003* Result);
N_NIMCALL(void, sha1_192008)(NimStringDesc* src, Sha1digest192003* Result);
N_NIMCALL(void, init_192417)(NU32* result);
N_NIMCALL(void, innerhash_192421)(NU32* state, NU32* w);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(void, genericReset)(void* dest, TNimType* mt);
N_NIMCALL(NimStringDesc*, readfile_15466)(NimStringDesc* filename);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_192093)(Sha1digest192003 x, Sha1digest192003 y);
N_NIMCALL(NI, nsuParseHexInt)(NimStringDesc* s);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
STRING_LITERAL(TMP1799, "", 0);
extern TNimType NTI116; /* uint8 */
TNimType NTI192003; /* Sha1Digest */

N_NIMCALL(void, init_192417)(NU32* result) {
	result[(((NI) 0))- 0] = ((NU32) 1732584193);
	result[(((NI) 1))- 0] = ((NU32) IL64(4023233417));
	result[(((NI) 2))- 0] = ((NU32) IL64(2562383102));
	result[(((NI) 3))- 0] = ((NU32) 271733878);
	result[(((NI) 4))- 0] = ((NU32) IL64(3285377520));
}

N_NIMCALL(void, innerhash_192421)(NU32* state, NU32* w) {
	NU32 a;
	NU32 b;
	NU32 c;
	NU32 d;
	NU32 e;
	NI round;
	unsigned int v_193457;
	unsigned int v_193468;
	unsigned int v_193479;
	unsigned int v_193490;
	unsigned int v_193501;
	a = state[(((NI) 0))- 0];
	b = state[(((NI) 1))- 0];
	c = state[(((NI) 2))- 0];
	d = state[(((NI) 3))- 0];
	e = state[(((NI) 4))- 0];
	round = ((NI) 0);
	{
		while (1) {
			unsigned int t_192507;
			if (!(round < ((NI) 16))) goto LA2;
			t_192507 = (unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((NU64)(a) << (NU64)(((NI) 5))) | (NU32)((NU64)(a) >> (NU64)(((NI) 27))))) + (NU32)((unsigned int)((unsigned int)(b & c) | (unsigned int)((unsigned int)((NU32) ~(b)) & d))))) + (NU32)(e))) + (NU32)(((NU32) 1518500249)))) + (NU32)(w[(round)- 0]));
			e = d;
			d = c;
			c = (unsigned int)((NU32)((NU64)(b) << (NU64)(((NI) 30))) | (NU32)((NU64)(b) >> (NU64)(((NI) 2))));
			b = a;
			a = t_192507;
			round += ((NI) 1);
		} LA2: ;
	}
	{
		while (1) {
			unsigned int t_192643;
			if (!(round < ((NI) 20))) goto LA4;
			w[(round)- 0] = (unsigned int)((NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)(round - ((NI) 3)))- 0] ^ w[((NI)(round - ((NI) 8)))- 0]) ^ w[((NI)(round - ((NI) 14)))- 0]) ^ w[((NI)(round - ((NI) 16)))- 0])) << (NU64)(((NI) 1))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)(round - ((NI) 3)))- 0] ^ w[((NI)(round - ((NI) 8)))- 0]) ^ w[((NI)(round - ((NI) 14)))- 0]) ^ w[((NI)(round - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))));
			t_192643 = (unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((NU64)(a) << (NU64)(((NI) 5))) | (NU32)((NU64)(a) >> (NU64)(((NI) 27))))) + (NU32)((unsigned int)((unsigned int)(b & c) | (unsigned int)((unsigned int)((NU32) ~(b)) & d))))) + (NU32)(e))) + (NU32)(((NU32) 1518500249)))) + (NU32)(w[(round)- 0]));
			e = d;
			d = c;
			c = (unsigned int)((NU32)((NU64)(b) << (NU64)(((NI) 30))) | (NU32)((NU64)(b) >> (NU64)(((NI) 2))));
			b = a;
			a = t_192643;
			round += ((NI) 1);
		} LA4: ;
	}
	{
		while (1) {
			unsigned int t_192844;
			if (!(round < ((NI) 40))) goto LA6;
			w[(round)- 0] = (unsigned int)((NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)(round - ((NI) 3)))- 0] ^ w[((NI)(round - ((NI) 8)))- 0]) ^ w[((NI)(round - ((NI) 14)))- 0]) ^ w[((NI)(round - ((NI) 16)))- 0])) << (NU64)(((NI) 1))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)(round - ((NI) 3)))- 0] ^ w[((NI)(round - ((NI) 8)))- 0]) ^ w[((NI)(round - ((NI) 14)))- 0]) ^ w[((NI)(round - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))));
			t_192844 = (unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((NU64)(a) << (NU64)(((NI) 5))) | (NU32)((NU64)(a) >> (NU64)(((NI) 27))))) + (NU32)((NU32)((NU32)(b ^ c) ^ d)))) + (NU32)(e))) + (NU32)(((NU32) 1859775393)))) + (NU32)(w[(round)- 0]));
			e = d;
			d = c;
			c = (unsigned int)((NU32)((NU64)(b) << (NU64)(((NI) 30))) | (NU32)((NU64)(b) >> (NU64)(((NI) 2))));
			b = a;
			a = t_192844;
			round += ((NI) 1);
		} LA6: ;
	}
	{
		while (1) {
			unsigned int t_193072;
			if (!(round < ((NI) 60))) goto LA8;
			w[(round)- 0] = (unsigned int)((NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)(round - ((NI) 3)))- 0] ^ w[((NI)(round - ((NI) 8)))- 0]) ^ w[((NI)(round - ((NI) 14)))- 0]) ^ w[((NI)(round - ((NI) 16)))- 0])) << (NU64)(((NI) 1))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)(round - ((NI) 3)))- 0] ^ w[((NI)(round - ((NI) 8)))- 0]) ^ w[((NI)(round - ((NI) 14)))- 0]) ^ w[((NI)(round - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))));
			t_193072 = (unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((NU64)(a) << (NU64)(((NI) 5))) | (NU32)((NU64)(a) >> (NU64)(((NI) 27))))) + (NU32)((unsigned int)((unsigned int)((unsigned int)(b & c) | (unsigned int)(b & d)) | (unsigned int)(c & d))))) + (NU32)(e))) + (NU32)(((NU32) IL64(2400959708))))) + (NU32)(w[(round)- 0]));
			e = d;
			d = c;
			c = (unsigned int)((NU32)((NU64)(b) << (NU64)(((NI) 30))) | (NU32)((NU64)(b) >> (NU64)(((NI) 2))));
			b = a;
			a = t_193072;
			round += ((NI) 1);
		} LA8: ;
	}
	{
		while (1) {
			unsigned int t_193274;
			if (!(round < ((NI) 80))) goto LA10;
			w[(round)- 0] = (unsigned int)((NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)(round - ((NI) 3)))- 0] ^ w[((NI)(round - ((NI) 8)))- 0]) ^ w[((NI)(round - ((NI) 14)))- 0]) ^ w[((NI)(round - ((NI) 16)))- 0])) << (NU64)(((NI) 1))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)(round - ((NI) 3)))- 0] ^ w[((NI)(round - ((NI) 8)))- 0]) ^ w[((NI)(round - ((NI) 14)))- 0]) ^ w[((NI)(round - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))));
			t_193274 = (unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((NU64)(a) << (NU64)(((NI) 5))) | (NU32)((NU64)(a) >> (NU64)(((NI) 27))))) + (NU32)((NU32)((NU32)(b ^ c) ^ d)))) + (NU32)(e))) + (NU32)(((NU32) IL64(3395469782))))) + (NU32)(w[(round)- 0]));
			e = d;
			d = c;
			c = (unsigned int)((NU32)((NU64)(b) << (NU64)(((NI) 30))) | (NU32)((NU64)(b) >> (NU64)(((NI) 2))));
			b = a;
			a = t_193274;
			round += ((NI) 1);
		} LA10: ;
	}
	v_193457 = (unsigned int)((NU32)(state[(((NI) 0))- 0]) + (NU32)(a));
	state[(((NI) 0))- 0] = v_193457;
	v_193468 = (unsigned int)((NU32)(state[(((NI) 1))- 0]) + (NU32)(b));
	state[(((NI) 1))- 0] = v_193468;
	v_193479 = (unsigned int)((NU32)(state[(((NI) 2))- 0]) + (NU32)(c));
	state[(((NI) 2))- 0] = v_193479;
	v_193490 = (unsigned int)((NU32)(state[(((NI) 3))- 0]) + (NU32)(d));
	state[(((NI) 3))- 0] = v_193490;
	v_193501 = (unsigned int)((NU32)(state[(((NI) 4))- 0]) + (NU32)(e));
	state[(((NI) 4))- 0] = v_193501;
}

N_NIMCALL(void, sha1_192008)(NimStringDesc* src, Sha1digest192003* Result) {
	Sha1state192402 state_193598;
	Sha1buffer192404 w_193600;
	NI bytelen_193602;
	NI endoffullblocks_193604;
	NI endcurrentblock_193606;
	NI currentblock_193608;
	NI lastblockbytes_193612;
	memset((void*)state_193598, 0, sizeof(state_193598));
	init_192417(state_193598);
	memset((void*)w_193600, 0, sizeof(w_193600));
	bytelen_193602 = (src ? src->Sup.len : 0);
	endoffullblocks_193604 = (NI)(bytelen_193602 - ((NI) 64));
	endcurrentblock_193606 = ((NI) 0);
	currentblock_193608 = ((NI) 0);
	{
		while (1) {
			NI i_193610;
			if (!(currentblock_193608 <= endoffullblocks_193604)) goto LA2;
			endcurrentblock_193606 = (NI)(currentblock_193608 + ((NI) 64));
			i_193610 = ((NI) 0);
			{
				while (1) {
					if (!(currentblock_193608 < endcurrentblock_193606)) goto LA4;
					w_193600[(i_193610)- 0] = (unsigned int)((unsigned int)((unsigned int)(((NU32) (((NU8)(src->data[(NI)(currentblock_193608 + ((NI) 3))])))) | (NU32)((NU32)(((NU32) (((NU8)(src->data[(NI)(currentblock_193608 + ((NI) 2))]))))) << (NU32)(((NU32) 8)))) | (NU32)((NU32)(((NU32) (((NU8)(src->data[(NI)(currentblock_193608 + ((NI) 1))]))))) << (NU32)(((NU32) 16)))) | (NU32)((NU32)(((NU32) (((NU8)(src->data[currentblock_193608]))))) << (NU32)(((NU32) 24))));
					currentblock_193608 += ((NI) 4);
					i_193610 += ((NI) 1);
				} LA4: ;
			}
			innerhash_192421(state_193598, w_193600);
		} LA2: ;
	}
	endcurrentblock_193606 = (NI)(bytelen_193602 - currentblock_193608);
	zeroMem(((void*) (w_193600)), ((NI) 64));
	lastblockbytes_193612 = ((NI) 0);
	{
		while (1) {
			NU32 value_193614;
			if (!(lastblockbytes_193612 < endcurrentblock_193606)) goto LA6;
			value_193614 = (NU32)((NU32)(((NU32) (((NU8)(src->data[(NI)(lastblockbytes_193612 + currentblock_193608)]))))) << (NU32)((NU32)((NU64)((NU32)((NU32)(((NU32) 3)) - (NU32)(((NU32) ((NI)(lastblockbytes_193612 & ((NI) 3))))))) << (NU64)(((NI) 3)))));
			w_193600[((NI)((NU64)(lastblockbytes_193612) >> (NU64)(((NI) 2))))- 0] = (unsigned int)(w_193600[((NI)((NU64)(lastblockbytes_193612) >> (NU64)(((NI) 2))))- 0] | value_193614);
			lastblockbytes_193612 += ((NI) 1);
		} LA6: ;
	}
	w_193600[((NI)((NU64)(lastblockbytes_193612) >> (NU64)(((NI) 2))))- 0] = (unsigned int)(w_193600[((NI)((NU64)(lastblockbytes_193612) >> (NU64)(((NI) 2))))- 0] | (NU32)((NU32)(((NU32) 128)) << (NU32)((NU32)((NU64)((NU32)((NU32)(((NU32) 3)) - (NU32)(((NU32) ((NI)(lastblockbytes_193612 & ((NI) 3))))))) << (NU64)(((NI) 3))))));
	{
		if (!(((NI) 56) <= endcurrentblock_193606)) goto LA9;
		innerhash_192421(state_193598, w_193600);
		zeroMem(((void*) (w_193600)), ((NI) 64));
	}
	LA9: ;
	w_193600[(((NI) 15))- 0] = (NU32)((NU64)(((NU32) (bytelen_193602))) << (NU64)(((NI) 3)));
	innerhash_192421(state_193598, w_193600);
	{
		NI i_193616;
		NI res_193832;
		i_193616 = 0;
		res_193832 = ((NI) 0);
		{
			while (1) {
				if (!(res_193832 <= ((NI) 19))) goto LA13;
				i_193616 = res_193832;
				(*Result)[(i_193616)- 0] = ((NU8) ((NI)((NI)((NU64)(((NI) (state_193598[((NI)((NU64)(i_193616) >> (NU64)(((NI) 2))))- 0]))) >> (NU64)((NI)((NI)(((NI) 3) - ((NI) ((NI)(i_193616 & ((NI) 3))))) * ((NI) 8)))) & ((NI) 255))));
				res_193832 += ((NI) 1);
			} LA13: ;
		}
	}
}

N_NIMCALL(void, securehash_192011)(NimStringDesc* str, Sha1digest192003* Result) {
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI192003));
	sha1_192008(str, Result);
}

N_NIMCALL(void, securehashfile_192016)(NimStringDesc* filename, Sha1digest192003* Result) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = readfile_15466(filename);
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI192003));
	securehash_192011(LOC1, Result);
}

N_NIMCALL(NIM_BOOL, HEX3DHEX3D_192087)(Sha1digest192003 a, Sha1digest192003 b) {
	NIM_BOOL result;
	result = 0;
	result = HEX3DHEX3D_192093(a, b);
	return result;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_NIMCALL(void, parsesecurehash_192058)(NimStringDesc* hash, Sha1digest192003* Result) {
	{
		NI i_192079;
		NI res_192083;
		i_192079 = 0;
		res_192083 = ((NI) 0);
		{
			while (1) {
				NimStringDesc* LOC4;
				NI LOC5;
				if (!(res_192083 <= ((NI) 19))) goto LA3;
				i_192079 = res_192083;
				LOC4 = 0;
				LOC4 = rawNewString(2);
appendChar(LOC4, hash->data[(NI)(i_192079 * ((NI) 2))]);
appendChar(LOC4, hash->data[(NI)((NI)(i_192079 * ((NI) 2)) + ((NI) 1))]);
				LOC5 = 0;
				LOC5 = nsuParseHexInt(LOC4);
				(*Result)[(i_192079)- 0] = ((NU8) (LOC5));
				res_192083 += ((NI) 1);
			} LA3: ;
		}
	}
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, HEX24_192020)(Sha1digest192003 self) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP1799));
	{
		NU8 v_192050;
		Sha1digest192003 HEX3Atmp_192054;
		NI i_192057;
		v_192050 = 0;
		memset((void*)HEX3Atmp_192054, 0, sizeof(HEX3Atmp_192054));
		memcpy((void*)HEX3Atmp_192054, (NIM_CONST void*)self, sizeof(Sha1digest192003));
		i_192057 = ((NI) 0);
		{
			if (!(((NI) (i_192057)) <= ((NI) 19))) goto LA4;
			{
				while (1) {
					NimStringDesc* LOC8;
					v_192050 = HEX3Atmp_192054[(i_192057)- 0];
					LOC8 = 0;
					LOC8 = nsuToHex(((NI64) (((NI) (v_192050)))), ((NI) 2));
					result = resizeString(result, LOC8->Sup.len + 0);
appendString(result, LOC8);
					{
						if (!(((NI) 19) <= ((NI) (i_192057)))) goto LA11;
						goto LA6;
					}
					LA11: ;
					i_192057 += ((NI) 1);
				}
			} LA6: ;
		}
		LA4: ;
	}
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_securehashInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_securehashDatInit000)(void) {
NTI192003.size = sizeof(Sha1digest192003);
NTI192003.kind = 16;
NTI192003.base = (&NTI116);
NTI192003.flags = 3;
}

