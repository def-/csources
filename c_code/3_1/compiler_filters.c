/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <stdio.h>
typedef struct Tnode213790 Tnode213790;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype213828 Ttype213828;
typedef struct Tlineinfo181337 Tlineinfo181337;
typedef struct Tsym213822 Tsym213822;
typedef struct Tident188012 Tident188012;
typedef struct Tnodeseq213784 Tnodeseq213784;
typedef struct Tllstream201204 Tllstream201204;
typedef struct Tidobj188006 Tidobj188006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq213824 Ttypeseq213824;
typedef struct Tloc213804 Tloc213804;
typedef struct Ropeobj168006 Ropeobj168006;
typedef struct Tscope213816 Tscope213816;
typedef struct TY213925 TY213925;
typedef struct Tstrtable213794 Tstrtable213794;
typedef struct Tsymseq213792 Tsymseq213792;
typedef struct Tlib213808 Tlib213808;
typedef struct Tinstantiation213812 Tinstantiation213812;
typedef struct Tlistentry135010 Tlistentry135010;
typedef struct TY213913 TY213913;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo181337  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tnode213790  {
Ttype213828* typ;
Tlineinfo181337 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym213822* sym;
} S4;
struct {Tident188012* ident;
} S5;
struct {Tnodeseq213784* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef NU8 TY201404[32];
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
struct  Tidobj188006  {
  TNimObject Sup;
NI id;
};
struct  Tloc213804  {
NU8 k;
NU8 s;
NU16 flags;
Ttype213828* t;
Ropeobj168006* r;
Ropeobj168006* heaproot;
};
struct  Ttype213828  {
  Tidobj188006 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq213824* sons;
Tnode213790* n;
Tsym213822* owner;
Tsym213822* sym;
Tsym213822* destructor;
Tsym213822* deepcopy;
Tsym213822* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc213804 loc;
};
struct  Tstrtable213794  {
NI counter;
Tsymseq213792* data;
};
struct  Tsym213822  {
  Tidobj188006 Sup;
NU8 kind;
union{
struct {Ttypeseq213824* typeinstcache;
Tscope213816* typscope;
} S1;
struct {TY213925* procinstcache;
Tsym213822* gcunsafetyreason;
} S2;
struct {TY213925* usedgenerics;
Tstrtable213794 tab;
} S3;
struct {Tsym213822* guard;
NI bitsize;
} S4;
} kindU;
NU8 magic;
Ttype213828* typ;
Tident188012* name;
Tlineinfo181337 info;
Tsym213822* owner;
NU32 flags;
Tnode213790* ast;
NU32 options;
NI position;
NI offset;
Tloc213804 loc;
Tlib213808* annex;
Tnode213790* constraint;
};
struct  Tident188012  {
  Tidobj188006 Sup;
NimStringDesc* s;
Tident188012* next;
NI h;
};
struct  Tllstream201204  {
  TNimObject Sup;
NU8 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Ropeobj168006  {
  TNimObject Sup;
Ropeobj168006* left;
Ropeobj168006* right;
NI length;
NimStringDesc* data;
};
struct  Tscope213816  {
NI depthlevel;
Tstrtable213794 symbols;
Tnodeseq213784* usingsyms;
Tscope213816* parent;
};
struct  Tlistentry135010  {
  TNimObject Sup;
Tlistentry135010* prev;
Tlistentry135010* next;
};
struct  Tlib213808  {
  Tlistentry135010 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj168006* name;
Tnode213790* path;
};
struct  Tinstantiation213812  {
Tsym213822* sym;
Ttypeseq213824* concretetypes;
TY213913* usedby;
NI compilesid;
};
struct Tnodeseq213784 {
  TGenericSeq Sup;
  Tnode213790* data[SEQ_DECL_SIZE];
};
struct Ttypeseq213824 {
  TGenericSeq Sup;
  Ttype213828* data[SEQ_DECL_SIZE];
};
struct TY213925 {
  TGenericSeq Sup;
  Tinstantiation213812* data[SEQ_DECL_SIZE];
};
struct Tsymseq213792 {
  TGenericSeq Sup;
  Tsym213822* data[SEQ_DECL_SIZE];
};
struct TY213913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tnode213790*, getarg_235033)(Tnode213790* n, NimStringDesc* name, NI pos);
N_NIMCALL(NI, sonslen_216351)(Tnode213790* n);
N_NIMCALL(void, invalidpragma_235029)(Tnode213790* n);
N_NIMCALL(void, localerror_186080)(Tlineinfo181337 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, rendertree_232044)(Tnode213790* n, NU8 renderflags);
N_NIMCALL(NIM_BOOL, identeq_188450)(Tident188012* id, NimStringDesc* name);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, strarg_235017)(Tnode213790* n, NimStringDesc* name, NI pos, NimStringDesc* default_235022);
N_NIMCALL(NIM_BOOL, boolarg_235023)(Tnode213790* n, NimStringDesc* name, NI pos, NIM_BOOL default_235028);
N_NIMCALL(Tllstream201204*, llstreamopen_201217)(NimStringDesc* data);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_201550)(Tllstream201204* s, NimStringDesc** line);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s, NIM_BOOL leading, NIM_BOOL trailing, TY201404 chars);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_NIMCALL(void, llstreamwriteln_201608)(Tllstream201204* s, NimStringDesc* data);
N_NIMCALL(void, llstreamclose_201277)(Tllstream201204* s);
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s, NimStringDesc* sub, NimStringDesc* by);
STRING_LITERAL(TMP1538, "startswith", 10);
STRING_LITERAL(TMP1539, "", 0);
STRING_LITERAL(TMP1540, "true", 4);
STRING_LITERAL(TMP1541, "false", 5);
STRING_LITERAL(TMP1542, "leading", 7);
STRING_LITERAL(TMP1543, "trailing", 8);
static NIM_CONST TY201404 TMP1544 = {
0x00, 0x3E, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1545, "sub", 3);
STRING_LITERAL(TMP1546, "by", 2);

N_NIMCALL(void, invalidpragma_235029)(Tnode213790* n) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = rendertree_232044(n, 4);
	localerror_186080((*n).info, ((NU16) 167), LOC1);
}

N_NIMCALL(Tnode213790*, getarg_235033)(Tnode213790* n, NimStringDesc* name, NI pos) {
	Tnode213790* result;
{	result = 0;
	result = NIM_NIL;
	{
		if (!((*n).kind >= ((NU8) 1) && (*n).kind <= ((NU8) 23))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI i_235061;
		NI HEX3Atmp_235090;
		NI LOC6;
		NI res_235093;
		i_235061 = 0;
		HEX3Atmp_235090 = 0;
		LOC6 = 0;
		LOC6 = sonslen_216351(n);
		HEX3Atmp_235090 = (NI)(LOC6 - ((NI) 1));
		res_235093 = ((NI) 1);
		{
			while (1) {
				if (!(res_235093 <= HEX3Atmp_235090)) goto LA8;
				i_235061 = res_235093;
				{
					if (!((*(*n).kindU.S6.sons->data[i_235061]).kind == ((NU8) 33))) goto LA11;
					{
						if (!!(((*(*(*n).kindU.S6.sons->data[i_235061]).kindU.S6.sons->data[((NI) 0)]).kind == ((NU8) 2)))) goto LA15;
						invalidpragma_235029(n);
					}
					LA15: ;
					{
						NIM_BOOL LOC19;
						LOC19 = 0;
						LOC19 = identeq_188450((*(*(*n).kindU.S6.sons->data[i_235061]).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident, name);
						if (!LOC19) goto LA20;
						result = (*(*n).kindU.S6.sons->data[i_235061]).kindU.S6.sons->data[((NI) 1)];
						goto BeforeRet;
					}
					LA20: ;
				}
				goto LA9;
				LA11: ;
				{
					if (!(i_235061 == pos)) goto LA23;
					result = (*n).kindU.S6.sons->data[i_235061];
					goto BeforeRet;
				}
				goto LA9;
				LA23: ;
				LA9: ;
				res_235093 += ((NI) 1);
			} LA8: ;
		}
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_CHAR, chararg_235011)(Tnode213790* n, NimStringDesc* name, NI pos, NIM_CHAR default_235016) {
	NIM_CHAR result;
	Tnode213790* x;
	result = 0;
	x = getarg_235033(n, name, pos);
	{
		if (!(x == NIM_NIL)) goto LA3;
		result = default_235016;
	}
	goto LA1;
	LA3: ;
	{
		if (!((*x).kind == ((NU8) 5))) goto LA6;
		result = ((NIM_CHAR) (((NI) (((NI) ((*x).kindU.S1.intval))))));
	}
	goto LA1;
	LA6: ;
	{
		invalidpragma_235029(n);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, strarg_235017)(Tnode213790* n, NimStringDesc* name, NI pos, NimStringDesc* default_235022) {
	NimStringDesc* result;
	Tnode213790* x;
	result = 0;
	x = getarg_235033(n, name, pos);
	{
		if (!(x == NIM_NIL)) goto LA3;
		result = copyString(default_235022);
	}
	goto LA1;
	LA3: ;
	{
		if (!((*x).kind >= ((NU8) 20) && (*x).kind <= ((NU8) 22))) goto LA6;
		result = copyString((*x).kindU.S3.strval);
	}
	goto LA1;
	LA6: ;
	{
		invalidpragma_235029(n);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, boolarg_235023)(Tnode213790* n, NimStringDesc* name, NI pos, NIM_BOOL default_235028) {
	NIM_BOOL result;
	Tnode213790* x;
	result = 0;
	x = getarg_235033(n, name, pos);
	{
		if (!(x == NIM_NIL)) goto LA3;
		result = default_235028;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = ((*x).kind == ((NU8) 2));
		if (!(LOC6)) goto LA7;
		LOC6 = identeq_188450((*x).kindU.S5.ident, ((NimStringDesc*) &TMP1540));
		LA7: ;
		if (!LOC6) goto LA8;
		result = NIM_TRUE;
	}
	goto LA1;
	LA8: ;
	{
		NIM_BOOL LOC11;
		LOC11 = 0;
		LOC11 = ((*x).kind == ((NU8) 2));
		if (!(LOC11)) goto LA12;
		LOC11 = identeq_188450((*x).kindU.S5.ident, ((NimStringDesc*) &TMP1541));
		LA12: ;
		if (!LOC11) goto LA13;
		result = NIM_FALSE;
	}
	goto LA1;
	LA13: ;
	{
		invalidpragma_235029(n);
	}
	LA1: ;
	return result;
}

N_NIMCALL(Tllstream201204*, filterstrip_235006)(Tllstream201204* stdin_235008, NimStringDesc* filename, Tnode213790* call) {
	Tllstream201204* result;
	NimStringDesc* pattern;
	NIM_BOOL leading;
	NIM_BOOL trailing;
	NimStringDesc* line;
	result = 0;
	pattern = strarg_235017(call, ((NimStringDesc*) &TMP1538), ((NI) 1), ((NimStringDesc*) &TMP1539));
	leading = boolarg_235023(call, ((NimStringDesc*) &TMP1542), ((NI) 2), NIM_TRUE);
	trailing = boolarg_235023(call, ((NimStringDesc*) &TMP1543), ((NI) 3), NIM_TRUE);
	result = llstreamopen_201217(((NimStringDesc*) &TMP1539));
	line = rawNewString(((NI) 80));
	{
		while (1) {
			NIM_BOOL LOC3;
			NimStringDesc* stripped;
			LOC3 = 0;
			LOC3 = llstreamreadline_201550(stdin_235008, (&line));
			if (!LOC3) goto LA2;
			stripped = nsuStrip(line, leading, trailing, TMP1544);
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = ((pattern ? pattern->Sup.len : 0) == ((NI) 0));
				if (LOC6) goto LA7;
				LOC6 = nsuStartsWith(stripped, pattern);
				LA7: ;
				if (!LOC6) goto LA8;
				llstreamwriteln_201608(result, stripped);
			}
			goto LA4;
			LA8: ;
			{
				llstreamwriteln_201608(result, line);
			}
			LA4: ;
		} LA2: ;
	}
	llstreamclose_201277(stdin_235008);
	return result;
}

N_NIMCALL(Tllstream201204*, filterreplace_235001)(Tllstream201204* stdin_235003, NimStringDesc* filename, Tnode213790* call) {
	Tllstream201204* result;
	NimStringDesc* sub;
	NimStringDesc* by;
	NimStringDesc* line;
	result = 0;
	sub = strarg_235017(call, ((NimStringDesc*) &TMP1545), ((NI) 1), ((NimStringDesc*) &TMP1539));
	{
		if (!((sub ? sub->Sup.len : 0) == ((NI) 0))) goto LA3;
		invalidpragma_235029(call);
	}
	LA3: ;
	by = strarg_235017(call, ((NimStringDesc*) &TMP1546), ((NI) 2), ((NimStringDesc*) &TMP1539));
	result = llstreamopen_201217(((NimStringDesc*) &TMP1539));
	line = rawNewString(((NI) 80));
	{
		while (1) {
			NIM_BOOL LOC7;
			NimStringDesc* LOC8;
			LOC7 = 0;
			LOC7 = llstreamreadline_201550(stdin_235003, (&line));
			if (!LOC7) goto LA6;
			LOC8 = 0;
			LOC8 = nsuReplaceStr(line, sub, by);
			llstreamwriteln_201608(result, LOC8);
		} LA6: ;
	}
	llstreamclose_201277(stdin_235003);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_filtersInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_filtersDatInit000)(void) {
}

