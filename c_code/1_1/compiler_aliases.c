/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Tnode216790 Tnode216790;
typedef struct Ttype216828 Ttype216828;
typedef struct Tlineinfo184337 Tlineinfo184337;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym216822 Tsym216822;
typedef struct Tident191012 Tident191012;
typedef struct Tnodeseq216784 Tnodeseq216784;
typedef struct Tidobj191006 Tidobj191006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq216824 Ttypeseq216824;
typedef struct Tscope216816 Tscope216816;
typedef struct TY216925 TY216925;
typedef struct Tstrtable216794 Tstrtable216794;
typedef struct Tsymseq216792 Tsymseq216792;
typedef struct Tloc216804 Tloc216804;
typedef struct Ropeobj172006 Ropeobj172006;
typedef struct Tlib216808 Tlib216808;
typedef struct Intset213035 Intset213035;
typedef struct Trunk213031 Trunk213031;
typedef struct Trunkseq213033 Trunkseq213033;
typedef struct Tinstantiation216812 Tinstantiation216812;
typedef struct Tlistentry138010 Tlistentry138010;
typedef struct TY216913 TY216913;
struct  Tlineinfo184337  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tnode216790  {
Ttype216828* typ;
Tlineinfo184337 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym216822* sym;
} S4;
struct {Tident191012* ident;
} S5;
struct {Tnodeseq216784* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj191006  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable216794  {
NI counter;
Tsymseq216792* data;
};
struct  Tloc216804  {
NU8 k;
NU8 s;
NU16 flags;
Ttype216828* t;
Ropeobj172006* r;
Ropeobj172006* heaproot;
};
struct  Tsym216822  {
  Tidobj191006 Sup;
NU8 kind;
union{
struct {Ttypeseq216824* typeinstcache;
Tscope216816* typscope;
} S1;
struct {TY216925* procinstcache;
Tsym216822* gcunsafetyreason;
} S2;
struct {TY216925* usedgenerics;
Tstrtable216794 tab;
} S3;
struct {Tsym216822* guard;
NI bitsize;
} S4;
} kindU;
NU8 magic;
Ttype216828* typ;
Tident191012* name;
Tlineinfo184337 info;
Tsym216822* owner;
NU32 flags;
Tnode216790* ast;
NU32 options;
NI position;
NI offset;
Tloc216804 loc;
Tlib216808* annex;
Tnode216790* constraint;
};
struct  Intset213035  {
NI counter;
NI max;
Trunk213031* head;
Trunkseq213033* data;
};
struct  Ttype216828  {
  Tidobj191006 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq216824* sons;
Tnode216790* n;
Tsym216822* owner;
Tsym216822* sym;
Tsym216822* destructor;
Tsym216822* deepcopy;
Tsym216822* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc216804 loc;
};
struct  Tident191012  {
  Tidobj191006 Sup;
NimStringDesc* s;
Tident191012* next;
NI h;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tscope216816  {
NI depthlevel;
Tstrtable216794 symbols;
Tnodeseq216784* usingsyms;
Tscope216816* parent;
};
struct  Ropeobj172006  {
  TNimObject Sup;
Ropeobj172006* left;
Ropeobj172006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry138010  {
  TNimObject Sup;
Tlistentry138010* prev;
Tlistentry138010* next;
};
struct  Tlib216808  {
  Tlistentry138010 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj172006* name;
Tnode216790* path;
};
typedef NI TY29418[16];
struct  Trunk213031  {
Trunk213031* next;
NI key;
TY29418 bits;
};
struct  Tinstantiation216812  {
Tsym216822* sym;
Ttypeseq216824* concretetypes;
TY216913* usedby;
NI compilesid;
};
struct Tnodeseq216784 {
  TGenericSeq Sup;
  Tnode216790* data[SEQ_DECL_SIZE];
};
struct Ttypeseq216824 {
  TGenericSeq Sup;
  Ttype216828* data[SEQ_DECL_SIZE];
};
struct TY216925 {
  TGenericSeq Sup;
  Tinstantiation216812* data[SEQ_DECL_SIZE];
};
struct Tsymseq216792 {
  TGenericSeq Sup;
  Tsym216822* data[SEQ_DECL_SIZE];
};
struct Trunkseq213033 {
  TGenericSeq Sup;
  Trunk213031* data[SEQ_DECL_SIZE];
};
struct TY216913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NU8, ispartof_417321)(Ttype216828* a, Ttype216828* b);
N_NIMCALL(void, initintset_213885)(Intset213035* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NU8, ispartofaux_417008)(Ttype216828* a, Ttype216828* b, Intset213035* marker);
N_NIMCALL(NIM_BOOL, containsorincl_213862)(Intset213035* s, NI key);
N_NIMCALL(NIM_BOOL, comparetypes_248404)(Ttype216828* x, Ttype216828* y, NU8 cmp, NU8 flags);
N_NIMCALL(NU8, ispartofaux_417014)(Tnode216790* n, Ttype216828* b, Intset213035* marker);
N_NIMCALL(NI, sonslen_219351)(Tnode216790* n);
N_NIMCALL(Tnode216790*, lastson_219364)(Tnode216790* n);
N_NIMCALL(void, internalerror_189113)(NimStringDesc* errmsg);
N_NIMCALL(void, internalerror_189100)(Tlineinfo184337 info, NimStringDesc* errmsg);
N_NIMCALL(Ttype216828*, lastson_219377)(Ttype216828* n);
N_NIMCALL(NI, sonslen_219327)(Ttype216828* n);
N_NIMCALL(NU8, ispartof_417328)(Tnode216790* a, Tnode216790* b);
static N_INLINE(Tnode216790*, HEX5BHEX5D_217238)(Tnode216790* n, NI i);
static N_INLINE(NI, len_217059)(Tnode216790* n);
N_NIMCALL(NIM_BOOL, isdeepconstexpr_241361)(Tnode216790* n);
N_NIMCALL(NIM_BOOL, samevalue_223189)(Tnode216790* a, Tnode216790* b);
STRING_LITERAL(TMP3365, "isPartOfAux(record case branch)", 31);
STRING_LITERAL(TMP3366, "isPartOfAux()", 13);

N_NIMCALL(NU8, ispartofaux_417014)(Tnode216790* n, Ttype216828* b, Intset213035* marker) {
	NU8 result;
{	result = 0;
	result = ((NU8) 0);
	switch ((*n).kind) {
	case ((NU8) 138):
	{
		{
			NI i_417032;
			NI HEX3Atmp_417237;
			NI LOC3;
			NI res_417240;
			i_417032 = 0;
			HEX3Atmp_417237 = 0;
			LOC3 = 0;
			LOC3 = sonslen_219351(n);
			HEX3Atmp_417237 = (NI)(LOC3 - ((NI) 1));
			res_417240 = ((NI) 0);
			{
				while (1) {
					if (!(res_417240 <= HEX3Atmp_417237)) goto LA5;
					i_417032 = res_417240;
					result = ispartofaux_417014((*n).kindU.S6.sons->data[i_417032], b, marker);
					{
						if (!(result == ((NU8) 2))) goto LA8;
						goto BeforeRet;
					}
					LA8: ;
					res_417240 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 139):
	{
		result = ispartofaux_417014((*n).kindU.S6.sons->data[((NI) 0)], b, marker);
		{
			if (!(result == ((NU8) 2))) goto LA13;
			goto BeforeRet;
		}
		LA13: ;
		{
			NI i_417222;
			NI HEX3Atmp_417245;
			NI LOC16;
			NI res_417248;
			i_417222 = 0;
			HEX3Atmp_417245 = 0;
			LOC16 = 0;
			LOC16 = sonslen_219351(n);
			HEX3Atmp_417245 = (NI)(LOC16 - ((NI) 1));
			res_417248 = ((NI) 1);
			{
				while (1) {
					if (!(res_417248 <= HEX3Atmp_417245)) goto LA18;
					i_417222 = res_417248;
					switch ((*(*n).kindU.S6.sons->data[i_417222]).kind) {
					case ((NU8) 85):
					case ((NU8) 88):
					{
						Tnode216790* LOC20;
						LOC20 = 0;
						LOC20 = lastson_219364((*n).kindU.S6.sons->data[i_417222]);
						result = ispartofaux_417014(LOC20, b, marker);
						{
							if (!(result == ((NU8) 2))) goto LA23;
							goto BeforeRet;
						}
						LA23: ;
					}
					break;
					default:
					{
						internalerror_189113(((NimStringDesc*) &TMP3365));
					}
					break;
					}
					res_417248 += ((NI) 1);
				} LA18: ;
			}
		}
	}
	break;
	case ((NU8) 3):
	{
		result = ispartofaux_417008((*(*n).kindU.S4.sym).typ, b, marker);
	}
	break;
	default:
	{
		internalerror_189100((*n).info, ((NimStringDesc*) &TMP3366));
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NU8, ispartofaux_417008)(Ttype216828* a, Ttype216828* b, Intset213035* marker) {
	NU8 result;
{	result = 0;
	result = ((NU8) 0);
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (a == NIM_NIL);
		if (LOC3) goto LA4;
		LOC3 = (b == NIM_NIL);
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	{
		NIM_BOOL LOC9;
		LOC9 = 0;
		LOC9 = containsorincl_213862(marker, (*a).Sup.id);
		if (!LOC9) goto LA10;
		goto BeforeRet;
	}
	LA10: ;
	{
		NIM_BOOL LOC14;
		LOC14 = 0;
		LOC14 = comparetypes_248404(a, b, ((NU8) 1), 0);
		if (!LOC14) goto LA15;
		result = ((NU8) 2);
		goto BeforeRet;
	}
	LA15: ;
	switch ((*a).kind) {
	case ((NU8) 17):
	{
		result = ispartofaux_417008((*a).sons->data[((NI) 0)], b, marker);
		{
			if (!(result == ((NU8) 0))) goto LA20;
			result = ispartofaux_417014((*a).n, b, marker);
		}
		LA20: ;
	}
	break;
	case ((NU8) 11):
	case ((NU8) 13):
	{
		Ttype216828* LOC23;
		LOC23 = 0;
		LOC23 = lastson_219377(a);
		result = ispartofaux_417008(LOC23, b, marker);
	}
	break;
	case ((NU8) 16):
	case ((NU8) 4):
	case ((NU8) 19):
	case ((NU8) 18):
	{
		{
			NI i_417303;
			NI HEX3Atmp_417314;
			NI LOC26;
			NI res_417317;
			i_417303 = 0;
			HEX3Atmp_417314 = 0;
			LOC26 = 0;
			LOC26 = sonslen_219327(a);
			HEX3Atmp_417314 = (NI)(LOC26 - ((NI) 1));
			res_417317 = ((NI) 0);
			{
				while (1) {
					if (!(res_417317 <= HEX3Atmp_417314)) goto LA28;
					i_417303 = res_417317;
					result = ispartofaux_417008((*a).sons->data[i_417303], b, marker);
					{
						if (!(result == ((NU8) 2))) goto LA31;
						goto BeforeRet;
					}
					LA31: ;
					res_417317 += ((NI) 1);
				} LA28: ;
			}
		}
	}
	break;
	default:
	{
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NU8, ispartof_417321)(Ttype216828* a, Ttype216828* b) {
	NU8 result;
	Intset213035 marker;
	result = 0;
	memset((void*)(&marker), 0, sizeof(marker));
	chckNil((void*)(&marker));
	memset((void*)(&marker), 0, sizeof(marker));
	initintset_213885((&marker));
	result = ispartofaux_417008(b, a, (&marker));
	return result;
}

static N_INLINE(Tnode216790*, HEX5BHEX5D_217238)(Tnode216790* n, NI i) {
	Tnode216790* result;
	result = 0;
	result = (*n).kindU.S6.sons->data[i];
	return result;
}

static N_INLINE(NI, len_217059)(Tnode216790* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.sons == 0) goto LA3;
		result = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		result = ((*n).kindU.S6.sons ? (*n).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NU8, ispartof_417328)(Tnode216790* a, Tnode216790* b) {
	NU8 result;
	result = 0;
	{
		if (!((*a).kind == (*b).kind)) goto LA3;
		switch ((*a).kind) {
		case ((NU8) 3):
		{
			{
				if (!((*(*a).kindU.S4.sym).Sup.id == (*(*b).kindU.S4.sym).Sup.id)) goto LA8;
				result = ((NU8) 2);
			}
			goto LA6;
			LA8: ;
			{
				NIM_BOOL LOC11;
				LOC11 = 0;
				LOC11 = ((4384 &(1U<<((NU)((*(*a).kindU.S4.sym).kind)&31U)))!=0);
				if (LOC11) goto LA12;
				LOC11 = ((4384 &(1U<<((NU)((*(*b).kindU.S4.sym).kind)&31U)))!=0);
				LA12: ;
				if (!LOC11) goto LA13;
				result = ((NU8) 0);
			}
			goto LA6;
			LA13: ;
			{
				{
					NU8 LOC18;
					LOC18 = 0;
					LOC18 = ispartof_417321((*(*a).kindU.S4.sym).typ, (*(*b).kindU.S4.sym).typ);
					if (!!((LOC18 == ((NU8) 0)))) goto LA19;
					result = ((NU8) 1);
				}
				LA19: ;
			}
			LA6: ;
		}
		break;
		case ((NU8) 42):
		{
			Tnode216790* LOC22;
			Tnode216790* LOC23;
			LOC22 = 0;
			LOC22 = HEX5BHEX5D_217238(a, ((NI) 0));
			LOC23 = 0;
			LOC23 = HEX5BHEX5D_217238(b, ((NI) 0));
			result = ispartof_417328(LOC22, LOC23);
			{
				NIM_BOOL LOC26;
				NI LOC27;
				NI LOC29;
				LOC26 = 0;
				LOC27 = 0;
				LOC27 = len_217059(a);
				LOC26 = (((NI) 2) <= LOC27);
				if (!(LOC26)) goto LA28;
				LOC29 = 0;
				LOC29 = len_217059(b);
				LOC26 = (((NI) 2) <= LOC29);
				LA28: ;
				if (!LOC26) goto LA30;
				{
					NIM_BOOL LOC34;
					NIM_BOOL LOC35;
					Tnode216790* LOC37;
					Tnode216790* LOC39;
					Tnode216790* x;
					Tnode216790* y;
					LOC34 = 0;
					LOC35 = 0;
					LOC35 = (result == ((NU8) 2));
					if (!(LOC35)) goto LA36;
					LOC37 = 0;
					LOC37 = HEX5BHEX5D_217238(a, ((NI) 1));
					LOC35 = isdeepconstexpr_241361(LOC37);
					LA36: ;
					LOC34 = LOC35;
					if (!(LOC34)) goto LA38;
					LOC39 = 0;
					LOC39 = HEX5BHEX5D_217238(b, ((NI) 1));
					LOC34 = isdeepconstexpr_241361(LOC39);
					LA38: ;
					if (!LOC34) goto LA40;
					{
						Tnode216790* LOC44;
						Tnode216790* LOC47;
						LOC44 = 0;
						LOC44 = HEX5BHEX5D_217238(a, ((NI) 1));
						if (!((*LOC44).kind == ((NU8) 58))) goto LA45;
						LOC47 = 0;
						LOC47 = HEX5BHEX5D_217238(a, ((NI) 1));
						x = HEX5BHEX5D_217238(LOC47, ((NI) 1));
					}
					goto LA42;
					LA45: ;
					{
						x = HEX5BHEX5D_217238(a, ((NI) 1));
					}
					LA42: ;
					{
						Tnode216790* LOC51;
						Tnode216790* LOC54;
						LOC51 = 0;
						LOC51 = HEX5BHEX5D_217238(b, ((NI) 1));
						if (!((*LOC51).kind == ((NU8) 58))) goto LA52;
						LOC54 = 0;
						LOC54 = HEX5BHEX5D_217238(b, ((NI) 1));
						y = HEX5BHEX5D_217238(LOC54, ((NI) 1));
					}
					goto LA49;
					LA52: ;
					{
						y = HEX5BHEX5D_217238(b, ((NI) 1));
					}
					LA49: ;
					{
						NIM_BOOL LOC58;
						LOC58 = 0;
						LOC58 = samevalue_223189(x, y);
						if (!LOC58) goto LA59;
						result = ((NU8) 2);
					}
					goto LA56;
					LA59: ;
					{
						result = ((NU8) 0);
					}
					LA56: ;
				}
				LA40: ;
			}
			goto LA24;
			LA30: ;
			{
				{
					if (!!((result == ((NU8) 2)))) goto LA65;
					{
						NU8 LOC69;
						LOC69 = 0;
						LOC69 = ispartof_417321((*a).typ, (*b).typ);
						if (!!((LOC69 == ((NU8) 0)))) goto LA70;
						result = ((NU8) 1);
					}
					LA70: ;
				}
				LA65: ;
			}
			LA24: ;
		}
		break;
		case ((NU8) 45):
		{
			Tnode216790* LOC73;
			Tnode216790* LOC74;
			LOC73 = 0;
			LOC73 = HEX5BHEX5D_217238(a, ((NI) 0));
			LOC74 = 0;
			LOC74 = HEX5BHEX5D_217238(b, ((NI) 0));
			result = ispartof_417328(LOC73, LOC74);
			{
				if (!!((result == ((NU8) 0)))) goto LA77;
				{
					Tnode216790* LOC81;
					Tnode216790* LOC82;
					LOC81 = 0;
					LOC81 = HEX5BHEX5D_217238(a, ((NI) 1));
					LOC82 = 0;
					LOC82 = HEX5BHEX5D_217238(b, ((NI) 1));
					if (!!(((*(*LOC81).kindU.S4.sym).Sup.id == (*(*LOC82).kindU.S4.sym).Sup.id))) goto LA83;
					result = ((NU8) 0);
				}
				LA83: ;
			}
			LA77: ;
		}
		break;
		case ((NU8) 65):
		case ((NU8) 47):
		{
			Tnode216790* LOC86;
			Tnode216790* LOC87;
			LOC86 = 0;
			LOC86 = HEX5BHEX5D_217238(a, ((NI) 0));
			LOC87 = 0;
			LOC87 = HEX5BHEX5D_217238(b, ((NI) 0));
			result = ispartof_417328(LOC86, LOC87);
			{
				if (!!((result == ((NU8) 2)))) goto LA90;
				{
					NU8 LOC94;
					LOC94 = 0;
					LOC94 = ispartof_417321((*a).typ, (*b).typ);
					if (!!((LOC94 == ((NU8) 0)))) goto LA95;
					result = ((NU8) 1);
				}
				LA95: ;
			}
			LA90: ;
		}
		break;
		case ((NU8) 58):
		case ((NU8) 59):
		case ((NU8) 60):
		{
			Tnode216790* LOC98;
			Tnode216790* LOC99;
			LOC98 = 0;
			LOC98 = HEX5BHEX5D_217238(a, ((NI) 1));
			LOC99 = 0;
			LOC99 = HEX5BHEX5D_217238(b, ((NI) 1));
			result = ispartof_417328(LOC98, LOC99);
		}
		break;
		case ((NU8) 67):
		case ((NU8) 66):
		case ((NU8) 46):
		{
			Tnode216790* LOC101;
			Tnode216790* LOC102;
			LOC101 = 0;
			LOC101 = HEX5BHEX5D_217238(a, ((NI) 0));
			LOC102 = 0;
			LOC102 = HEX5BHEX5D_217238(b, ((NI) 0));
			result = ispartof_417328(LOC101, LOC102);
		}
		break;
		default:
		{
		}
		break;
		}
	}
	goto LA1;
	LA3: ;
	{
		switch ((*b).kind) {
		case ((NU8) 45):
		case ((NU8) 42):
		case ((NU8) 67):
		case ((NU8) 66):
		case ((NU8) 46):
		case ((NU8) 64):
		{
			Tnode216790* LOC106;
			LOC106 = 0;
			LOC106 = HEX5BHEX5D_217238(b, ((NI) 0));
			result = ispartof_417328(a, LOC106);
		}
		break;
		case ((NU8) 65):
		case ((NU8) 47):
		{
			{
				NU8 LOC110;
				Tnode216790* LOC113;
				LOC110 = 0;
				LOC110 = ispartof_417321((*a).typ, (*b).typ);
				if (!!((LOC110 == ((NU8) 0)))) goto LA111;
				LOC113 = 0;
				LOC113 = HEX5BHEX5D_217238(b, ((NI) 0));
				result = ispartof_417328(a, LOC113);
				{
					if (!(result == ((NU8) 0))) goto LA116;
					result = ((NU8) 1);
				}
				LA116: ;
			}
			LA111: ;
		}
		break;
		case ((NU8) 58):
		case ((NU8) 59):
		case ((NU8) 60):
		{
			Tnode216790* LOC119;
			LOC119 = 0;
			LOC119 = HEX5BHEX5D_217238(b, ((NI) 1));
			result = ispartof_417328(a, LOC119);
		}
		break;
		case ((NU8) 3):
		{
			switch ((*a).kind) {
			case ((NU8) 45):
			case ((NU8) 42):
			case ((NU8) 67):
			case ((NU8) 66):
			case ((NU8) 46):
			case ((NU8) 64):
			{
				Tnode216790* LOC122;
				LOC122 = 0;
				LOC122 = HEX5BHEX5D_217238(a, ((NI) 0));
				result = ispartof_417328(LOC122, b);
			}
			break;
			case ((NU8) 58):
			case ((NU8) 59):
			case ((NU8) 60):
			{
				Tnode216790* LOC124;
				LOC124 = 0;
				LOC124 = HEX5BHEX5D_217238(a, ((NI) 1));
				result = ispartof_417328(LOC124, b);
			}
			break;
			case ((NU8) 65):
			case ((NU8) 47):
			{
				{
					NU8 LOC128;
					Tnode216790* LOC131;
					LOC128 = 0;
					LOC128 = ispartof_417321((*a).typ, (*b).typ);
					if (!!((LOC128 == ((NU8) 0)))) goto LA129;
					LOC131 = 0;
					LOC131 = HEX5BHEX5D_217238(a, ((NI) 0));
					result = ispartof_417328(LOC131, b);
					{
						if (!(result == ((NU8) 0))) goto LA134;
						result = ((NU8) 1);
					}
					LA134: ;
				}
				LA129: ;
			}
			break;
			default:
			{
			}
			break;
			}
		}
		break;
		default:
		{
		}
		break;
		}
	}
	LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_aliasesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_aliasesDatInit000)(void) {
}

