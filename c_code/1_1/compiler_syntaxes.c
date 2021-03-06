/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct Tnode216790 Tnode216790;
typedef struct Tparsers240026 Tparsers240026;
typedef struct Tparser230202 Tparser230202;
typedef struct Tlexer207173 Tlexer207173;
typedef struct Tbaselexer205015 Tbaselexer205015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tllstream204204 Tllstream204204;
typedef struct Tlineinfo184337 Tlineinfo184337;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttoken207169 Ttoken207169;
typedef struct Tident191012 Tident191012;
typedef struct Ttype216828 Ttype216828;
typedef struct Tsym216822 Tsym216822;
typedef struct Tnodeseq216784 Tnodeseq216784;
typedef struct Tidobj191006 Tidobj191006;
typedef struct Ttypeseq216824 Ttypeseq216824;
typedef struct Tloc216804 Tloc216804;
typedef struct Ropeobj172006 Ropeobj172006;
typedef struct Tscope216816 Tscope216816;
typedef struct TY216925 TY216925;
typedef struct Tstrtable216794 Tstrtable216794;
typedef struct Tsymseq216792 Tsymseq216792;
typedef struct Tlib216808 Tlib216808;
typedef struct Tinstantiation216812 Tinstantiation216812;
typedef struct Tlistentry138010 Tlistentry138010;
typedef struct TY216913 TY216913;
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
struct  Tbaselexer205015  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Tllstream204204* stream;
NI linenumber;
NI sentinel;
NI linestart;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Tlineinfo184337 info, NU16 msg, NimStringDesc* arg, void* ClEnv);
void* ClEnv;
} Terrorhandler207171;
struct  Tlexer207173  {
  Tbaselexer205015 Sup;
NI32 fileidx;
NI indentahead;
NI currlineindent;
NIM_BOOL strongspaces;
Terrorhandler207171 errorhandler;
};
struct  Ttoken207169  {
NU8 toktype;
NI indent;
Tident191012* ident;
NI64 inumber;
NF fnumber;
NU8 base;
NI8 strongspacea;
NI8 strongspaceb;
NimStringDesc* literal;
NI line;
NI col;
};
struct  Tparser230202  {
NI currind;
NIM_BOOL firsttok;
NIM_BOOL strongspaces;
Tlexer207173 lex;
Ttoken207169 tok;
NI inpragma;
NI insemistmtlist;
};
struct  Tparsers240026  {
NU8 skin;
Tparser230202 parser;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tlineinfo184337  {
NI16 line;
NI16 col;
NI32 fileindex;
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
typedef NimStringDesc* TY240022[4];
typedef NimStringDesc* TY240016[4];
struct  Tidobj191006  {
  TNimObject Sup;
NI id;
};
struct  Tident191012  {
  Tidobj191006 Sup;
NimStringDesc* s;
Tident191012* next;
NI h;
};
typedef NimStringDesc* TY240694[1];
struct  Tllstream204204  {
  TNimObject Sup;
NU8 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
struct  Tloc216804  {
NU8 k;
NU8 s;
NU16 flags;
Ttype216828* t;
Ropeobj172006* r;
Ropeobj172006* heaproot;
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
struct  Tstrtable216794  {
NI counter;
Tsymseq216792* data;
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
struct  Ropeobj172006  {
  TNimObject Sup;
Ropeobj172006* left;
Ropeobj172006* right;
NI length;
NimStringDesc* data;
};
struct  Tscope216816  {
NI depthlevel;
Tstrtable216794 symbols;
Tnodeseq216784* usingsyms;
Tscope216816* parent;
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
struct TY216913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, objectInit)(void* dest, TNimType* typ);
N_NIMCALL(NimStringDesc*, tofullpathconsiderdirty_185401)(NI32 fileidx);
N_NIMCALL(NIM_BOOL, open_15403)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(void, rawmessage_187612)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, openparsers_240032)(Tparsers240026* p, NI32 fileidx, Tllstream204204* inputstream);
N_NIMCALL(Tnode216790*, parsepipe_240107)(NimStringDesc* filename, Tllstream204204* inputstream);
N_NIMCALL(Tllstream204204*, llstreamopen_204241)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_204550)(Tllstream204204* s, NimStringDesc** line);
N_NIMCALL(NI, utf8bom_240077)(NimStringDesc* s);
N_NIMCALL(NIM_BOOL, containsshebang_240081)(NimStringDesc* s, NI i);
N_NIMCALL(void, message_189095)(Tlineinfo184337 info, NU16 msg, NimStringDesc* arg);
static N_INLINE(Tlineinfo184337, newlineinfo_185030)(NimStringDesc* filename, NI line, NI col);
N_NIMCALL(Tlineinfo184337, newlineinfo_185024)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(NI32, fileinfoidx_185017)(NimStringDesc* filename);
N_NIMCALL(void, openparser_230331)(Tparser230202* p, NimStringDesc* filename, Tllstream204204* inputstream, NIM_BOOL strongspaces);
N_NIMCALL(Tllstream204204*, llstreamopen_204217)(NimStringDesc* data);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(Tnode216790*, parseall_230210)(Tparser230202* p);
N_NIMCALL(void, closeparser_230214)(Tparser230202* p);
N_NIMCALL(void, llstreamclose_204277)(Tllstream204204* s);
N_NIMCALL(Tllstream204204*, evalpipe_240696)(Tparsers240026* p, Tnode216790* n, NimStringDesc* filename, Tllstream204204* start);
N_NIMCALL(NIM_BOOL, identeq_191450)(Tident191012* id, NimStringDesc* name);
N_NIMCALL(Tllstream204204*, applyfilter_240659)(Tparsers240026* p, Tnode216790* n, NimStringDesc* filename, Tllstream204204* stdin_240665);
N_NIMCALL(Tident191012*, getcallee_240623)(Tnode216790* n);
N_NIMCALL(NimStringDesc*, rendertree_235044)(Tnode216790* n, NU8 renderflags);
N_NIMCALL(NU8, getfilter_240185)(Tident191012* ident);
N_NIMCALL(NU8, getparser_240423)(Tident191012* ident);
N_NIMCALL(Tllstream204204*, filtertmpl_239003)(Tllstream204204* stdin_239005, NimStringDesc* filename, Tnode216790* call);
N_NIMCALL(Tllstream204204*, filterstrip_238006)(Tllstream204204* stdin_238008, NimStringDesc* filename, Tnode216790* call);
N_NIMCALL(Tllstream204204*, filterreplace_238001)(Tllstream204204* stdin_238003, NimStringDesc* filename, Tnode216790* call);
N_NIMCALL(void, rawmessage_186645)(NU16 msg, NimStringDesc** args, NI argsLen0);
N_NIMCALL(void, msgwriteln_185449)(NimStringDesc* s, NU8 flags);
N_NIMCALL(void, openparser_230322)(Tparser230202* p, NI32 fileidx, Tllstream204204* inputstream, NIM_BOOL strongspaces);
N_NIMCALL(Tllstream204204*, llstreamopen_204229)(FILE* f);
N_NIMCALL(Tnode216790*, parseall_240042)(Tparsers240026* p);
N_NIMCALL(Tnode216790*, parseall_234003)(Tparser230202* p);
N_NIMCALL(void, internalerror_189113)(NimStringDesc* errmsg);
N_NIMCALL(void, closeparsers_240038)(Tparsers240026* p);
N_NIMCALL(Tnode216790*, parsetoplevelstmt_230218)(Tparser230202* p);
N_NIMCALL(Tnode216790*, parsetoplevelstmt_234008)(Tparser230202* p);
STRING_LITERAL(TMP1245, "use \'#?\' instead; \'#!\'", 22);
STRING_LITERAL(TMP1411, "|", 1);
STRING_LITERAL(TMP1522, "none", 4);
STRING_LITERAL(TMP1523, "stdtmpl", 7);
STRING_LITERAL(TMP1524, "replace", 7);
STRING_LITERAL(TMP1525, "strip", 5);
NIM_CONST TY240022 filternames_240019 = {((NimStringDesc*) &TMP1522),
((NimStringDesc*) &TMP1523),
((NimStringDesc*) &TMP1524),
((NimStringDesc*) &TMP1525)}
;
STRING_LITERAL(TMP1526, "standard", 8);
STRING_LITERAL(TMP1527, "strongspaces", 12);
STRING_LITERAL(TMP1528, "braces", 6);
STRING_LITERAL(TMP1529, "endx", 4);
NIM_CONST TY240016 parsernames_240013 = {((NimStringDesc*) &TMP1526),
((NimStringDesc*) &TMP1527),
((NimStringDesc*) &TMP1528),
((NimStringDesc*) &TMP1529)}
;
STRING_LITERAL(TMP1561, "parser to implement", 19);
TNimType NTI240026; /* TParsers */
TNimType NTI240004; /* TParserKind */
extern TNimType NTI230202; /* TParser */
extern Tnode216790* emptynode_217801;
extern NU64 gnotes_185080;

N_NIMCALL(NI, utf8bom_240077)(NimStringDesc* s) {
	NI result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = ((NU8)(s->data[((NI) 0)]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		LOC4 = ((NU8)(s->data[((NI) 1)]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		LOC3 = ((NU8)(s->data[((NI) 2)]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		result = ((NI) 3);
	}
	goto LA1;
	LA7: ;
	{
		result = ((NI) 0);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, containsshebang_240081)(NimStringDesc* s, NI i) {
	NIM_BOOL result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NI j;
		LOC3 = 0;
		LOC3 = ((NU8)(s->data[i]) == (NU8)(35));
		if (!(LOC3)) goto LA4;
		LOC3 = ((NU8)(s->data[(NI)(i + ((NI) 1))]) == (NU8)(33));
		LA4: ;
		if (!LOC3) goto LA5;
		j = (NI)(i + ((NI) 2));
		{
			while (1) {
				if (!(((NU8)(s->data[j])) == ((NU8)(32)) || ((NU8)(s->data[j])) == ((NU8)(9)) || ((NU8)(s->data[j])) == ((NU8)(11)) || ((NU8)(s->data[j])) == ((NU8)(13)) || ((NU8)(s->data[j])) == ((NU8)(10)) || ((NU8)(s->data[j])) == ((NU8)(12)))) goto LA8;
				j += ((NI) 1);
			} LA8: ;
		}
		result = ((NU8)(s->data[j]) == (NU8)(47));
	}
	LA5: ;
	return result;
}

static N_INLINE(Tlineinfo184337, newlineinfo_185030)(NimStringDesc* filename, NI line, NI col) {
	Tlineinfo184337 result;
	NI32 LOC1;
	memset((void*)(&result), 0, sizeof(result));
	LOC1 = 0;
	LOC1 = fileinfoidx_185017(filename);
	result = newlineinfo_185024(LOC1, line, col);
	return result;
}

N_NIMCALL(Tnode216790*, parsepipe_240107)(NimStringDesc* filename, Tllstream204204* inputstream) {
	Tnode216790* result;
	Tllstream204204* s;
	result = 0;
	result = emptynode_217801;
	s = llstreamopen_204241(filename, ((NU8) 0));
	{
		NimStringDesc* line;
		NIM_BOOL LOC5;
		NI i;
		NI linenumber;
		if (!!((s == NIM_NIL))) goto LA3;
		line = rawNewString(((NI) 80));
		LOC5 = 0;
		LOC5 = llstreamreadline_204550(s, (&line));
		i = utf8bom_240077(line);
		linenumber = ((NI) 1);
		{
			NIM_BOOL LOC8;
			NIM_BOOL LOC11;
			LOC8 = 0;
			LOC8 = containsshebang_240081(line, i);
			if (!LOC8) goto LA9;
			LOC11 = 0;
			LOC11 = llstreamreadline_204550(s, (&line));
			i = ((NI) 0);
			linenumber += ((NI) 1);
		}
		LA9: ;
		{
			NIM_BOOL LOC14;
			Tparser230202 q;
			NimStringDesc* LOC25;
			Tllstream204204* LOC26;
			LOC14 = 0;
			LOC14 = ((NU8)(line->data[i]) == (NU8)(35));
			if (!(LOC14)) goto LA15;
			LOC14 = (((NU8)(line->data[(NI)(i + ((NI) 1))])) == ((NU8)(63)) || ((NU8)(line->data[(NI)(i + ((NI) 1))])) == ((NU8)(33)));
			LA15: ;
			if (!LOC14) goto LA16;
			{
				Tlineinfo184337 LOC22;
				if (!((NU8)(line->data[(NI)(i + ((NI) 1))]) == (NU8)(33))) goto LA20;
				LOC22 = newlineinfo_185030(filename, linenumber, ((NI) 1));
				message_189095(LOC22, ((NU16) 241), ((NimStringDesc*) &TMP1245));
			}
			LA20: ;
			i += ((NI) 2);
			{
				while (1) {
					if (!(((NU8)(line->data[i])) == ((NU8)(32)) || ((NU8)(line->data[i])) == ((NU8)(9)) || ((NU8)(line->data[i])) == ((NU8)(11)) || ((NU8)(line->data[i])) == ((NU8)(13)) || ((NU8)(line->data[i])) == ((NU8)(10)) || ((NU8)(line->data[i])) == ((NU8)(12)))) goto LA24;
					i += ((NI) 1);
				} LA24: ;
			}
			memset((void*)(&q), 0, sizeof(q));
			objectInit((&q), (&NTI230202));
			LOC25 = 0;
			LOC25 = copyStr(line, i);
			LOC26 = 0;
			LOC26 = llstreamopen_204217(LOC25);
			openparser_230331((&q), filename, LOC26, NIM_FALSE);
			result = parseall_230210((&q));
			closeparser_230214((&q));
		}
		LA16: ;
		llstreamclose_204277(s);
	}
	LA3: ;
	return result;
}

N_NIMCALL(Tident191012*, getcallee_240623)(Tnode216790* n) {
	Tident191012* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((*n).kind == ((NU8) 27) || (*n).kind == ((NU8) 29) || (*n).kind == ((NU8) 30) || (*n).kind == ((NU8) 31) || (*n).kind == ((NU8) 26) || (*n).kind == ((NU8) 28) || (*n).kind == ((NU8) 32));
		if (!(LOC3)) goto LA4;
		LOC3 = ((*(*n).kindU.S6.sons->data[((NI) 0)]).kind == ((NU8) 2));
		LA4: ;
		if (!LOC3) goto LA5;
		result = (*(*n).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident;
	}
	goto LA1;
	LA5: ;
	{
		if (!((*n).kind == ((NU8) 2))) goto LA8;
		result = (*n).kindU.S5.ident;
	}
	goto LA1;
	LA8: ;
	{
		NimStringDesc* LOC11;
		LOC11 = 0;
		LOC11 = rendertree_235044(n, 0);
		rawmessage_187612(((NU16) 167), LOC11);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NU8, getfilter_240185)(Tident191012* ident) {
	NU8 result;
{	result = 0;
	{
		NU8 i_240414;
		NI res_240420;
		i_240414 = 0;
		res_240420 = ((NI) 0);
		{
			while (1) {
				if (!(res_240420 <= ((NI) 3))) goto LA3;
				i_240414 = ((NU8) (res_240420));
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = identeq_191450(ident, filternames_240019[(i_240414)- 0]);
					if (!LOC6) goto LA7;
					result = i_240414;
					goto BeforeRet;
				}
				LA7: ;
				res_240420 += ((NI) 1);
			} LA3: ;
		}
	}
	result = ((NU8) 0);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NU8, getparser_240423)(Tident191012* ident) {
	NU8 result;
{	result = 0;
	{
		NU8 i_240614;
		NI res_240620;
		i_240614 = 0;
		res_240620 = ((NI) 0);
		{
			while (1) {
				if (!(res_240620 <= ((NI) 3))) goto LA3;
				i_240614 = ((NU8) (res_240620));
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = identeq_191450(ident, parsernames_240013[(i_240614)- 0]);
					if (!LOC6) goto LA7;
					result = i_240614;
					goto BeforeRet;
				}
				LA7: ;
				res_240620 += ((NI) 1);
			} LA3: ;
		}
	}
	rawmessage_187612(((NU16) 31), (*ident).s);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Tllstream204204*, applyfilter_240659)(Tparsers240026* p, Tnode216790* n, NimStringDesc* filename, Tllstream204204* stdin_240665) {
	Tllstream204204* result;
	Tident191012* ident;
	NU8 f;
	result = 0;
	ident = getcallee_240623(n);
	f = getfilter_240185(ident);
	switch (f) {
	case ((NU8) 0):
	{
		(*p).skin = getparser_240423(ident);
		result = stdin_240665;
	}
	break;
	case ((NU8) 1):
	{
		result = filtertmpl_239003(stdin_240665, filename, n);
	}
	break;
	case ((NU8) 3):
	{
		result = filterstrip_238006(stdin_240665, filename, n);
	}
	break;
	case ((NU8) 2):
	{
		result = filterreplace_238001(stdin_240665, filename, n);
	}
	break;
	}
	{
		if (!!((f == ((NU8) 0)))) goto LA7;
		{
			TY240694 LOC13;
			TY240694 LOC14;
			if (!((gnotes_185080 &((NU64)1<<((NU)((((NU16) 277)- 237))&63U)))!=0)) goto LA11;
			memset((void*)LOC13, 0, sizeof(LOC13));
			rawmessage_186645(((NU16) 277), LOC13, 0);
			msgwriteln_185449((*result).s, 0);
			memset((void*)LOC14, 0, sizeof(LOC14));
			rawmessage_186645(((NU16) 278), LOC14, 0);
		}
		LA11: ;
	}
	LA7: ;
	return result;
}

N_NIMCALL(Tllstream204204*, evalpipe_240696)(Tparsers240026* p, Tnode216790* n, NimStringDesc* filename, Tllstream204204* start) {
	Tllstream204204* result;
{	result = 0;
	result = start;
	{
		if (!((*n).kind == ((NU8) 1))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		NIM_BOOL LOC8;
		LOC7 = 0;
		LOC8 = 0;
		LOC8 = ((*n).kind == ((NU8) 29));
		if (!(LOC8)) goto LA9;
		LOC8 = ((*(*n).kindU.S6.sons->data[((NI) 0)]).kind == ((NU8) 2));
		LA9: ;
		LOC7 = LOC8;
		if (!(LOC7)) goto LA10;
		LOC7 = identeq_191450((*(*n).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident, ((NimStringDesc*) &TMP1411));
		LA10: ;
		if (!LOC7) goto LA11;
		{
			NI i_240745;
			NI res_240771;
			i_240745 = 0;
			res_240771 = ((NI) 1);
			{
				while (1) {
					if (!(res_240771 <= ((NI) 2))) goto LA15;
					i_240745 = res_240771;
					{
						if (!((*(*n).kindU.S6.sons->data[i_240745]).kind == ((NU8) 29))) goto LA18;
						result = evalpipe_240696(p, (*n).kindU.S6.sons->data[i_240745], filename, result);
					}
					goto LA16;
					LA18: ;
					{
						result = applyfilter_240659(p, (*n).kindU.S6.sons->data[i_240745], filename, result);
					}
					LA16: ;
					res_240771 += ((NI) 1);
				} LA15: ;
			}
		}
	}
	goto LA5;
	LA11: ;
	{
		if (!((*n).kind == ((NU8) 115))) goto LA22;
		result = evalpipe_240696(p, (*n).kindU.S6.sons->data[((NI) 0)], filename, result);
	}
	goto LA5;
	LA22: ;
	{
		result = applyfilter_240659(p, n, filename, result);
	}
	LA5: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, openparsers_240032)(Tparsers240026* p, NI32 fileidx, Tllstream204204* inputstream) {
	Tllstream204204* s;
	NimStringDesc* filename;
	Tnode216790* pipe;
	s = 0;
	(*p).skin = ((NU8) 0);
	filename = tofullpathconsiderdirty_185401(fileidx);
	pipe = parsepipe_240107(filename, inputstream);
	{
		if (!!((pipe == NIM_NIL))) goto LA3;
		s = evalpipe_240696(p, pipe, filename, inputstream);
	}
	goto LA1;
	LA3: ;
	{
		s = inputstream;
	}
	LA1: ;
	switch ((*p).skin) {
	case ((NU8) 0):
	case ((NU8) 2):
	case ((NU8) 3):
	{
		openparser_230322((&(*p).parser), fileidx, s, NIM_FALSE);
	}
	break;
	case ((NU8) 1):
	{
		openparser_230322((&(*p).parser), fileidx, s, NIM_TRUE);
	}
	break;
	}
}

N_NIMCALL(Tnode216790*, parseall_240042)(Tparsers240026* p) {
	Tnode216790* result;
	result = 0;
	switch ((*p).skin) {
	case ((NU8) 0):
	case ((NU8) 1):
	{
		result = parseall_230210((&(*p).parser));
	}
	break;
	case ((NU8) 2):
	{
		result = parseall_234003((&(*p).parser));
	}
	break;
	case ((NU8) 3):
	{
		internalerror_189113(((NimStringDesc*) &TMP1561));
		result = emptynode_217801;
	}
	break;
	}
	return result;
}

N_NIMCALL(void, closeparsers_240038)(Tparsers240026* p) {
	closeparser_230214((&(*p).parser));
}

N_NIMCALL(Tnode216790*, parsefile_240029)(NI32 fileidx) {
	Tnode216790* result;
	Tparsers240026 p;
	FILE* f;
	NimStringDesc* filename;
	Tllstream204204* LOC6;
{	result = 0;
	memset((void*)(&p), 0, sizeof(p));
	objectInit((&p), (&NTI240026));
	f = 0;
	filename = tofullpathconsiderdirty_185401(fileidx);
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = open_15403(&f, filename, ((NU8) 0), ((NI) -1));
		if (!!(LOC3)) goto LA4;
		rawmessage_187612(((NU16) 3), filename);
		goto BeforeRet;
	}
	LA4: ;
	LOC6 = 0;
	LOC6 = llstreamopen_204229(f);
	openparsers_240032((&p), fileidx, LOC6);
	result = parseall_240042((&p));
	closeparsers_240038((&p));
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Tnode216790*, parsetoplevelstmt_240046)(Tparsers240026* p) {
	Tnode216790* result;
	result = 0;
	switch ((*p).skin) {
	case ((NU8) 0):
	case ((NU8) 1):
	{
		result = parsetoplevelstmt_230218((&(*p).parser));
	}
	break;
	case ((NU8) 2):
	{
		result = parsetoplevelstmt_234008((&(*p).parser));
	}
	break;
	case ((NU8) 3):
	{
		internalerror_189113(((NimStringDesc*) &TMP1561));
		result = emptynode_217801;
	}
	break;
	}
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_syntaxesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_syntaxesDatInit000)(void) {
static TNimNode* TMP1221[2];
static TNimNode* TMP1222[4];
NI TMP1224;
static char* NIM_CONST TMP1223[4] = {
"skinStandard", 
"skinStrongSpaces", 
"skinBraces", 
"skinEndX"};
static TNimNode TMP890[8];
NTI240026.size = sizeof(Tparsers240026);
NTI240026.kind = 18;
NTI240026.base = 0;
TMP1221[0] = &TMP890[1];
NTI240004.size = sizeof(NU8);
NTI240004.kind = 14;
NTI240004.base = 0;
NTI240004.flags = 3;
for (TMP1224 = 0; TMP1224 < 4; TMP1224++) {
TMP890[TMP1224+2].kind = 1;
TMP890[TMP1224+2].offset = TMP1224;
TMP890[TMP1224+2].name = TMP1223[TMP1224];
TMP1222[TMP1224] = &TMP890[TMP1224+2];
}
TMP890[6].len = 4; TMP890[6].kind = 2; TMP890[6].sons = &TMP1222[0];
NTI240004.node = &TMP890[6];
TMP890[1].kind = 1;
TMP890[1].offset = offsetof(Tparsers240026, skin);
TMP890[1].typ = (&NTI240004);
TMP890[1].name = "skin";
TMP1221[1] = &TMP890[7];
TMP890[7].kind = 1;
TMP890[7].offset = offsetof(Tparsers240026, parser);
TMP890[7].typ = (&NTI230202);
TMP890[7].name = "parser";
TMP890[0].len = 2; TMP890[0].kind = 2; TMP890[0].sons = &TMP1221[0];
NTI240026.node = &TMP890[0];
}

