/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct TY211112 TY211112;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell47504 Cell47504;
typedef struct Cellseq47520 Cellseq47520;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Cellset47516 Cellset47516;
typedef struct Pagedesc47512 Pagedesc47512;
typedef struct Memregion29688 Memregion29688;
typedef struct Smallchunk29640 Smallchunk29640;
typedef struct Llchunk29682 Llchunk29682;
typedef struct Bigchunk29642 Bigchunk29642;
typedef struct Intset29614 Intset29614;
typedef struct Trunk29610 Trunk29610;
typedef struct Avlnode29686 Avlnode29686;
typedef struct Gcstat49814 Gcstat49814;
typedef struct NimStringDesc NimStringDesc;
typedef struct Tlexer206173 Tlexer206173;
typedef struct Tbaselexer204015 Tbaselexer204015;
typedef struct TNimObject TNimObject;
typedef struct Tllstream203204 Tllstream203204;
typedef struct Tlineinfo183337 Tlineinfo183337;
typedef struct Ttoken206169 Ttoken206169;
typedef struct Tident190012 Tident190012;
typedef struct Tidobj190006 Tidobj190006;
typedef struct Stringtableobj140209 Stringtableobj140209;
typedef struct Basechunk29638 Basechunk29638;
typedef struct Freecell29630 Freecell29630;
typedef struct Keyvaluepairseq140207 Keyvaluepairseq140207;
typedef struct Keyvaluepair140205 Keyvaluepair140205;
struct  TGenericSeq  {
NI len;
NI reserved;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Cell47504  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47520  {
NI len;
NI cap;
Cell47504** d;
};
struct  Cellset47516  {
NI counter;
NI max;
Pagedesc47512* head;
Pagedesc47512** data;
};
typedef Smallchunk29640* TY29703[512];
typedef Trunk29610* Trunkbuckets29612[256];
struct  Intset29614  {
Trunkbuckets29612 data;
};
struct  Memregion29688  {
NI minlargeobj;
NI maxlargeobj;
TY29703 freesmallchunks;
Llchunk29682* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29642* freechunkslist;
Intset29614 chunkstarts;
Avlnode29686* root;
Avlnode29686* deleted;
Avlnode29686* last;
Avlnode29686* freeavlnodes;
};
struct  Gcstat49814  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Gcheap49818  {
Gcstack49816* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47520 zct;
Cellseq47520 decstack;
Cellset47516 cycleroots;
Cellseq47520 tempstack;
NI recgclock;
Memregion29688 region;
Gcstat49814 stat;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tbaselexer204015  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Tllstream203204* stream;
NI linenumber;
NI sentinel;
NI linestart;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Tlineinfo183337 info, NU16 msg, NimStringDesc* arg, void* ClEnv);
void* ClEnv;
} Terrorhandler206171;
struct  Tlexer206173  {
  Tbaselexer204015 Sup;
NI32 fileidx;
NI indentahead;
NI currlineindent;
NIM_BOOL strongspaces;
Terrorhandler206171 errorhandler;
};
struct  Ttoken206169  {
NU8 toktype;
NI indent;
Tident190012* ident;
NI64 inumber;
NF fnumber;
NU8 base;
NI8 strongspacea;
NI8 strongspaceb;
NimStringDesc* literal;
NI line;
NI col;
};
struct  Tidobj190006  {
  TNimObject Sup;
NI id;
};
struct  Tident190012  {
  Tidobj190006 Sup;
NimStringDesc* s;
Tident190012* next;
NI h;
};
struct  Tlineinfo183337  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NimStringDesc* TY185156[3];
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY29619[8];
struct  Pagedesc47512  {
Pagedesc47512* next;
NI key;
TY29619 bits;
};
struct  Basechunk29638  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29640  {
  Basechunk29638 Sup;
Smallchunk29640* next;
Smallchunk29640* prev;
Freecell29630* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29682  {
NI size;
NI acc;
Llchunk29682* next;
};
struct  Bigchunk29642  {
  Basechunk29638 Sup;
Bigchunk29642* next;
Bigchunk29642* prev;
NI align;
NF data;
};
struct  Trunk29610  {
Trunk29610* next;
NI key;
TY29619 bits;
};
typedef Avlnode29686* TY29693[2];
struct  Avlnode29686  {
TY29693 link;
NI key;
NI upperbound;
NI level;
};
struct  Tllstream203204  {
  TNimObject Sup;
NU8 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
struct  Stringtableobj140209  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq140207* data;
NU8 mode;
};
struct  Freecell29630  {
Freecell29630* next;
NI zerofield;
};
struct Keyvaluepair140205 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct TY211112 {
  TGenericSeq Sup;
  NIM_BOOL data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq140207 {
  TGenericSeq Sup;
  Keyvaluepair140205 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP802)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell47504*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_53001)(Cell47504* c);
N_NOINLINE(void, addzct_51417)(Cellseq47520* s, Cell47504* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void, setdefaultlibpath_161298)(void);
N_NIMCALL(void, readconfigfile_211382)(NimStringDesc* filename);
N_NIMCALL(Tllstream203204*, llstreamopen_203241)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, inittoken_206306)(Ttoken206169* L);
N_NIMCALL(void, openlexer_206329)(Tlexer206173* lex, NimStringDesc* filename, Tllstream203204* inputstream);
N_NIMCALL(void, conftok_211275)(Tlexer206173* L, Ttoken206169* tok);
N_NIMCALL(void, ppgettok_211003)(Tlexer206173* L, Ttoken206169* tok);
N_NIMCALL(void, rawgettok_209824)(Tlexer206173* L, Ttoken206169* tok);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(void, parsedirective_211246)(Tlexer206173* L, Ttoken206169* tok);
N_NIMCALL(NU16, whichkeyword_197362)(Tident190012* id);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(NIM_BOOL, evalppif_211096)(Tlexer206173* L, Ttoken206169* tok);
N_NIMCALL(NIM_BOOL, parseexpr_211021)(Tlexer206173* L, Ttoken206169* tok);
N_NIMCALL(NIM_BOOL, parseandexpr_211061)(Tlexer206173* L, Ttoken206169* tok);
N_NIMCALL(NIM_BOOL, parseatom_211027)(Tlexer206173* L, Ttoken206169* tok);
N_NIMCALL(void, lexmessage_206370)(Tlexer206173* L, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NIM_BOOL, isdefined_191140)(Tident190012* symbol);
N_NIMCALL(void, jumptodirective_211151)(Tlexer206173* L, Ttoken206169* tok, NU8 dest);
N_NIMCALL(void, doelse_211158)(Tlexer206173* L, Ttoken206169* tok);
N_NIMCALL(void, doelif_211173)(Tlexer206173* L, Ttoken206169* tok);
N_NIMCALL(void, doend_211131)(Tlexer206173* L, Ttoken206169* tok);
N_NIMCALL(void, msgwriteln_184449)(NimStringDesc* s, NU8 flags);
N_NIMCALL(NimStringDesc*, nstFormat)(NimStringDesc* f, Stringtableobj140209* t, NU8 flags);
N_NIMCALL(NimStringDesc*, toktostr_206281)(Ttoken206169* tok);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(void, putenv_125838)(NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, getenv_125825)(NimStringDesc* key);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, parseassignment_211319)(Tlexer206173* L, Ttoken206169* tok);
N_NIMCALL(Tident190012*, getident_190441)(NimStringDesc* identifier);
static N_INLINE(Tlineinfo183337, getlineinfo_206200)(Tlexer206173* L, Ttoken206169* tok);
N_NIMCALL(Tlineinfo183337, newlineinfo_184023)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(void, checksymbol_211294)(Tlexer206173* L, Ttoken206169* tok);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(void, processswitch_201016)(NimStringDesc* switch_201018, NimStringDesc* arg, NU8 pass, Tlineinfo183337 info);
N_NIMCALL(void, closelexer_206335)(Tlexer206173* lex);
N_NIMCALL(void, rawmessage_186612)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, getsystemconfigpath_211434)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, getprefixdir_161295)(void);
N_NIMCALL(NimStringDesc*, nosjoinPathOpenArray)(NimStringDesc** parts, NI partsLen0);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, getuserconfigpath_211428)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NimStringDesc*, nosgetConfigDir)(void);
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(NimStringDesc*, HEX2F_118465)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NIM_BOOL, nosisRootDir)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, nosparentDir)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_79810, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
static N_INLINE(NIM_BOOL, fileexists_121804)(NimStringDesc* filename);
STRING_LITERAL(TMP2037, "@", 1);
STRING_LITERAL(TMP2038, "\')\'", 3);
STRING_LITERAL(TMP2039, "\':\'", 3);
STRING_LITERAL(TMP2040, "@if", 3);
STRING_LITERAL(TMP2041, "@end", 4);
STRING_LITERAL(TMP2043, "putenv", 6);
STRING_LITERAL(TMP2044, "prependenv", 10);
STRING_LITERAL(TMP2045, "appendenv", 9);
STRING_LITERAL(TMP2046, "-", 1);
STRING_LITERAL(TMP2047, "--", 2);
STRING_LITERAL(TMP2048, "", 0);
STRING_LITERAL(TMP2049, "\']\'", 3);
STRING_LITERAL(TMP2050, "%=", 2);
STRING_LITERAL(TMP2051, "&", 1);
STRING_LITERAL(TMP2052, "config", 6);
STRING_LITERAL(TMP2053, "etc", 3);
STRING_LITERAL(TMP2054, "/etc/", 5);
STRING_LITERAL(TMP2056, "nimcfg", 6);
STRING_LITERAL(TMP2057, "nim.cfg", 7);
STRING_LITERAL(TMP2058, "nimrod.cfg", 10);
TY211112* condstack_211129;
extern TNimType NTI130; /* bool */
TNimType NTI211112; /* seq[bool] */
extern Gcheap49818 gch_49859;
extern NU32 gglobaloptions_161121;
extern TNimType NTI206173; /* TLexer */
extern Stringtableobj140209* gconfigvars_161195;
extern NimStringDesc* gprojectpath_161200;
extern NimStringDesc* gprojectname_161199;
extern NimStringDesc* gprojectfull_161201;
N_NIMCALL(void, TMP802)(void* p, NI op) {
	TY211112* a;
	NI LOC1;
	a = (TY211112*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}

static N_INLINE(Cell47504*, usrtocell_51440)(void* usr) {
	Cell47504* result;
	result = 0;
	result = ((Cell47504*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell47504))))));
	return result;
}

static N_INLINE(void, rtladdzct_53001)(Cell47504* c) {
	addzct_51417((&gch_49859.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell47504* c;
	c = usrtocell_51440(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_53001(c);
	}
	LA3: ;
}

N_NIMCALL(void, ppgettok_211003)(Tlexer206173* L, Ttoken206169* tok) {
	rawgettok_209824(L, tok);
	{
		while (1) {
			if (!((*tok).toktype == ((NU8) 113))) goto LA2;
			rawgettok_209824(L, tok);
		} LA2: ;
	}
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
{	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (*a).Sup.len);
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, parseatom_211027)(Tlexer206173* L, Ttoken206169* tok) {
	NIM_BOOL result;
	result = 0;
	{
		if (!((*tok).toktype == ((NU8) 93))) goto LA3;
		ppgettok_211003(L, tok);
		result = parseexpr_211021(L, tok);
		{
			if (!((*tok).toktype == ((NU8) 94))) goto LA7;
			ppgettok_211003(L, tok);
		}
		goto LA5;
		LA7: ;
		{
			lexmessage_206370((&(*L)), ((NU16) 24), ((NimStringDesc*) &TMP2038));
		}
		LA5: ;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC13;
		if (!((*(*tok).ident).Sup.id == ((NI) 45))) goto LA11;
		ppgettok_211003(L, tok);
		LOC13 = 0;
		LOC13 = parseatom_211027(L, tok);
		result = !(LOC13);
	}
	goto LA1;
	LA11: ;
	{
		result = isdefined_191140((*tok).ident);
		ppgettok_211003(L, tok);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, parseandexpr_211061)(Tlexer206173* L, Ttoken206169* tok) {
	NIM_BOOL result;
	result = 0;
	result = parseatom_211027(L, tok);
	{
		while (1) {
			NIM_BOOL b;
			NIM_BOOL LOC3;
			if (!((*(*tok).ident).Sup.id == ((NI) 2))) goto LA2;
			ppgettok_211003(L, tok);
			b = parseatom_211027(L, tok);
			LOC3 = 0;
			LOC3 = result;
			if (!(LOC3)) goto LA4;
			LOC3 = b;
			LA4: ;
			result = LOC3;
		} LA2: ;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, parseexpr_211021)(Tlexer206173* L, Ttoken206169* tok) {
	NIM_BOOL result;
	result = 0;
	result = parseandexpr_211061(L, tok);
	{
		while (1) {
			NIM_BOOL b;
			NIM_BOOL LOC3;
			if (!((*(*tok).ident).Sup.id == ((NI) 49))) goto LA2;
			ppgettok_211003(L, tok);
			b = parseandexpr_211061(L, tok);
			LOC3 = 0;
			LOC3 = result;
			if (LOC3) goto LA4;
			LOC3 = b;
			LA4: ;
			result = LOC3;
		} LA2: ;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, evalppif_211096)(Tlexer206173* L, Ttoken206169* tok) {
	NIM_BOOL result;
	result = 0;
	ppgettok_211003(L, tok);
	result = parseexpr_211021(L, tok);
	{
		if (!((*tok).toktype == ((NU8) 107))) goto LA3;
		ppgettok_211003(L, tok);
	}
	goto LA1;
	LA3: ;
	{
		lexmessage_206370((&(*L)), ((NU16) 24), ((NimStringDesc*) &TMP2039));
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, doelse_211158)(Tlexer206173* L, Ttoken206169* tok) {
	{
		if (!((condstack_211129 ? (condstack_211129->Sup.len-1) : -1) < ((NI) 0))) goto LA3;
		lexmessage_206370((&(*L)), ((NU16) 24), ((NimStringDesc*) &TMP2040));
	}
	LA3: ;
	ppgettok_211003(L, tok);
	{
		if (!((*tok).toktype == ((NU8) 107))) goto LA7;
		ppgettok_211003(L, tok);
	}
	LA7: ;
	{
		if (!condstack_211129->data[(condstack_211129 ? (condstack_211129->Sup.len-1) : -1)]) goto LA11;
		jumptodirective_211151(L, tok, ((NU8) 0));
	}
	LA11: ;
}

N_NIMCALL(void, doelif_211173)(Tlexer206173* L, Ttoken206169* tok) {
	NIM_BOOL res;
	{
		if (!((condstack_211129 ? (condstack_211129->Sup.len-1) : -1) < ((NI) 0))) goto LA3;
		lexmessage_206370((&(*L)), ((NU16) 24), ((NimStringDesc*) &TMP2040));
	}
	LA3: ;
	res = evalppif_211096(L, tok);
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = condstack_211129->data[(condstack_211129 ? (condstack_211129->Sup.len-1) : -1)];
		if (LOC7) goto LA8;
		LOC7 = !(res);
		LA8: ;
		if (!LOC7) goto LA9;
		jumptodirective_211151(L, tok, ((NU8) 1));
	}
	goto LA5;
	LA9: ;
	{
		condstack_211129->data[(condstack_211129 ? (condstack_211129->Sup.len-1) : -1)] = NIM_TRUE;
	}
	LA5: ;
}

N_NIMCALL(void, doend_211131)(Tlexer206173* L, Ttoken206169* tok) {
	{
		if (!((condstack_211129 ? (condstack_211129->Sup.len-1) : -1) < ((NI) 0))) goto LA3;
		lexmessage_206370((&(*L)), ((NU16) 24), ((NimStringDesc*) &TMP2040));
	}
	LA3: ;
	ppgettok_211003(L, tok);
	condstack_211129 = (TY211112*) setLengthSeq(&(condstack_211129)->Sup, sizeof(NIM_BOOL), ((NI) ((condstack_211129 ? (condstack_211129->Sup.len-1) : -1))));
}

N_NIMCALL(void, jumptodirective_211151)(Tlexer206173* L, Ttoken206169* tok, NU8 dest) {
	NI nestedifs;
	nestedifs = ((NI) 0);
	{
		while (1) {
			{
				NIM_BOOL LOC5;
				NU16 LOC9;
				LOC5 = 0;
				LOC5 = !(((*tok).ident == NIM_NIL));
				if (!(LOC5)) goto LA6;
				LOC5 = eqStrings((*(*tok).ident).s, ((NimStringDesc*) &TMP2037));
				LA6: ;
				if (!LOC5) goto LA7;
				ppgettok_211003(L, tok);
				LOC9 = 0;
				LOC9 = whichkeyword_197362((*tok).ident);
				switch (LOC9) {
				case ((NU16) 31):
				{
					nestedifs += ((NI) 1);
				}
				break;
				case ((NU16) 21):
				{
					{
						NIM_BOOL LOC14;
						LOC14 = 0;
						LOC14 = (dest == ((NU8) 1));
						if (!(LOC14)) goto LA15;
						LOC14 = (nestedifs == ((NI) 0));
						LA15: ;
						if (!LOC14) goto LA16;
						doelse_211158(L, tok);
						goto LA1;
					}
					LA16: ;
				}
				break;
				case ((NU16) 20):
				{
					{
						NIM_BOOL LOC21;
						LOC21 = 0;
						LOC21 = (dest == ((NU8) 1));
						if (!(LOC21)) goto LA22;
						LOC21 = (nestedifs == ((NI) 0));
						LA22: ;
						if (!LOC21) goto LA23;
						doelif_211173(L, tok);
						goto LA1;
					}
					LA23: ;
				}
				break;
				case ((NU16) 22):
				{
					{
						if (!(nestedifs == ((NI) 0))) goto LA28;
						doend_211131(L, tok);
						goto LA1;
					}
					LA28: ;
					{
						if (!(((NI) 0) < nestedifs)) goto LA32;
						nestedifs -= ((NI) 1);
					}
					LA32: ;
				}
				break;
				default:
				{
				}
				break;
				}
				ppgettok_211003(L, tok);
			}
			goto LA3;
			LA7: ;
			{
				if (!((*tok).toktype == ((NU8) 1))) goto LA36;
				lexmessage_206370((&(*L)), ((NU16) 24), ((NimStringDesc*) &TMP2041));
			}
			goto LA3;
			LA36: ;
			{
				ppgettok_211003(L, tok);
			}
			LA3: ;
		}
	} LA1: ;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, parsedirective_211246)(Tlexer206173* L, Ttoken206169* tok) {
	NU16 LOC1;
	ppgettok_211003(L, tok);
	LOC1 = 0;
	LOC1 = whichkeyword_197362((*tok).ident);
	switch (LOC1) {
	case ((NU16) 31):
	{
		NIM_BOOL res;
		condstack_211129 = (TY211112*) setLengthSeq(&(condstack_211129)->Sup, sizeof(NIM_BOOL), ((NI) ((NI)((condstack_211129 ? condstack_211129->Sup.len : 0) + ((NI) 1)))));
		res = evalppif_211096(L, tok);
		condstack_211129->data[(condstack_211129 ? (condstack_211129->Sup.len-1) : -1)] = res;
		{
			if (!!(res)) goto LA5;
			jumptodirective_211151(L, tok, ((NU8) 1));
		}
		LA5: ;
	}
	break;
	case ((NU16) 20):
	{
		doelif_211173(L, tok);
	}
	break;
	case ((NU16) 21):
	{
		doelse_211158(L, tok);
	}
	break;
	case ((NU16) 22):
	{
		doend_211131(L, tok);
	}
	break;
	case ((NU16) 183):
	{
		NimStringDesc* LOC11;
		NimStringDesc* LOC12;
		ppgettok_211003(L, tok);
		LOC11 = 0;
		LOC11 = toktostr_206281((&(*tok)));
		LOC12 = 0;
		LOC12 = nstFormat(LOC11, gconfigvars_161195, 5);
		msgwriteln_184449(LOC12, 0);
		ppgettok_211003(L, tok);
	}
	break;
	default:
	{
		NimStringDesc* LOC14;
		LOC14 = 0;
		LOC14 = nsuNormalize((*(*tok).ident).s);
		if (eqStrings(LOC14, ((NimStringDesc*) &TMP2043))) goto LA15;
		if (eqStrings(LOC14, ((NimStringDesc*) &TMP2044))) goto LA16;
		if (eqStrings(LOC14, ((NimStringDesc*) &TMP2045))) goto LA17;
		goto LA18;
		LA15: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC21;
			ppgettok_211003(L, tok);
			key = toktostr_206281((&(*tok)));
			ppgettok_211003(L, tok);
			LOC21 = 0;
			LOC21 = toktostr_206281((&(*tok)));
			putenv_125838(key, LOC21);
			ppgettok_211003(L, tok);
		}
		goto LA19;
		LA16: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC23;
			NimStringDesc* LOC24;
			NimStringDesc* LOC25;
			ppgettok_211003(L, tok);
			key = toktostr_206281((&(*tok)));
			ppgettok_211003(L, tok);
			LOC23 = 0;
			LOC24 = 0;
			LOC24 = toktostr_206281((&(*tok)));
			LOC25 = 0;
			LOC25 = getenv_125825(key);
			LOC23 = rawNewString(LOC24->Sup.len + LOC25->Sup.len + 0);
appendString(LOC23, LOC24);
appendString(LOC23, LOC25);
			putenv_125838(key, LOC23);
			ppgettok_211003(L, tok);
		}
		goto LA19;
		LA17: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC27;
			NimStringDesc* LOC28;
			NimStringDesc* LOC29;
			ppgettok_211003(L, tok);
			key = toktostr_206281((&(*tok)));
			ppgettok_211003(L, tok);
			LOC27 = 0;
			LOC28 = 0;
			LOC28 = getenv_125825(key);
			LOC29 = 0;
			LOC29 = toktostr_206281((&(*tok)));
			LOC27 = rawNewString(LOC28->Sup.len + LOC29->Sup.len + 0);
appendString(LOC27, LOC28);
appendString(LOC27, LOC29);
			putenv_125838(key, LOC27);
			ppgettok_211003(L, tok);
		}
		goto LA19;
		LA18: ;
		{
			NimStringDesc* LOC31;
			LOC31 = 0;
			LOC31 = toktostr_206281((&(*tok)));
			lexmessage_206370((&(*L)), ((NU16) 31), LOC31);
		}
		LA19: ;
	}
	break;
	}
}

N_NIMCALL(void, conftok_211275)(Tlexer206173* L, Ttoken206169* tok) {
	ppgettok_211003(L, tok);
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = !(((*tok).ident == NIM_NIL));
			if (!(LOC3)) goto LA4;
			LOC3 = eqStrings((*(*tok).ident).s, ((NimStringDesc*) &TMP2037));
			LA4: ;
			if (!LOC3) goto LA2;
			parsedirective_211246(L, tok);
		} LA2: ;
	}
}

static N_INLINE(Tlineinfo183337, getlineinfo_206200)(Tlexer206173* L, Ttoken206169* tok) {
	Tlineinfo183337 result;
	memset((void*)(&result), 0, sizeof(result));
	result = newlineinfo_184023((*L).fileidx, (*tok).line, (*tok).col);
	return result;
}

N_NIMCALL(void, checksymbol_211294)(Tlexer206173* L, Ttoken206169* tok) {
	{
		NimStringDesc* LOC5;
		if (!!(((*tok).toktype >= ((NU8) 2) && (*tok).toktype <= ((NU8) 72) || (*tok).toktype >= ((NU8) 87) && (*tok).toktype <= ((NU8) 89)))) goto LA3;
		LOC5 = 0;
		LOC5 = toktostr_206281(tok);
		lexmessage_206370(L, ((NU16) 20), LOC5);
	}
	LA3: ;
}

N_NIMCALL(void, parseassignment_211319)(Tlexer206173* L, Ttoken206169* tok) {
	Tlineinfo183337 info;
	NimStringDesc* s;
	NimStringDesc* val;
	NIM_BOOL percent;
	Tident190012* LOC22;
	{
		NIM_BOOL LOC3;
		Tident190012* LOC4;
		Tident190012* LOC6;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = getident_190441(((NimStringDesc*) &TMP2046));
		LOC3 = ((*(*tok).ident).Sup.id == (*LOC4).Sup.id);
		if (LOC3) goto LA5;
		LOC6 = 0;
		LOC6 = getident_190441(((NimStringDesc*) &TMP2047));
		LOC3 = ((*(*tok).ident).Sup.id == (*LOC6).Sup.id);
		LA5: ;
		if (!LOC3) goto LA7;
		conftok_211275(L, tok);
	}
	LA7: ;
	info = getlineinfo_206200((&(*L)), (&(*tok)));
	checksymbol_211294((&(*L)), (&(*tok)));
	s = toktostr_206281((&(*tok)));
	conftok_211275(L, tok);
	val = copyString(((NimStringDesc*) &TMP2048));
	{
		while (1) {
			NimStringDesc* LOC11;
			if (!((*tok).toktype == ((NU8) 110))) goto LA10;
			s = addChar(s, 46);
			conftok_211275(L, tok);
			checksymbol_211294((&(*L)), (&(*tok)));
			LOC11 = 0;
			LOC11 = toktostr_206281((&(*tok)));
			s = resizeString(s, LOC11->Sup.len + 0);
appendString(s, LOC11);
			conftok_211275(L, tok);
		} LA10: ;
	}
	{
		NimStringDesc* LOC16;
		if (!((*tok).toktype == ((NU8) 95))) goto LA14;
		conftok_211275(L, tok);
		checksymbol_211294((&(*L)), (&(*tok)));
		LOC16 = 0;
		LOC16 = toktostr_206281((&(*tok)));
		val = resizeString(val, LOC16->Sup.len + 0);
appendString(val, LOC16);
		conftok_211275(L, tok);
		{
			if (!((*tok).toktype == ((NU8) 96))) goto LA19;
			conftok_211275(L, tok);
		}
		goto LA17;
		LA19: ;
		{
			lexmessage_206370((&(*L)), ((NU16) 24), ((NimStringDesc*) &TMP2049));
		}
		LA17: ;
		val = addChar(val, 93);
	}
	LA14: ;
	LOC22 = 0;
	LOC22 = getident_190441(((NimStringDesc*) &TMP2050));
	percent = ((*(*tok).ident).Sup.id == (*LOC22).Sup.id);
	{
		NIM_BOOL LOC25;
		NimStringDesc* LOC33;
		LOC25 = 0;
		LOC25 = ((*tok).toktype == ((NU8) 107) || (*tok).toktype == ((NU8) 109));
		if (LOC25) goto LA26;
		LOC25 = percent;
		LA26: ;
		if (!LOC25) goto LA27;
		{
			if (!(((NI) 0) < (val ? val->Sup.len : 0))) goto LA31;
			val = addChar(val, 58);
		}
		LA31: ;
		conftok_211275(L, tok);
		checksymbol_211294((&(*L)), (&(*tok)));
		LOC33 = 0;
		LOC33 = toktostr_206281((&(*tok)));
		val = resizeString(val, LOC33->Sup.len + 0);
appendString(val, LOC33);
		conftok_211275(L, tok);
		{
			while (1) {
				NIM_BOOL LOC36;
				Tident190012* LOC38;
				NimStringDesc* LOC39;
				LOC36 = 0;
				LOC36 = !(((*tok).ident == NIM_NIL));
				if (!(LOC36)) goto LA37;
				LOC38 = 0;
				LOC38 = getident_190441(((NimStringDesc*) &TMP2051));
				LOC36 = ((*(*tok).ident).Sup.id == (*LOC38).Sup.id);
				LA37: ;
				if (!LOC36) goto LA35;
				conftok_211275(L, tok);
				checksymbol_211294((&(*L)), (&(*tok)));
				LOC39 = 0;
				LOC39 = toktostr_206281((&(*tok)));
				val = resizeString(val, LOC39->Sup.len + 0);
appendString(val, LOC39);
				conftok_211275(L, tok);
			} LA35: ;
		}
	}
	LA27: ;
	{
		NimStringDesc* LOC44;
		if (!percent) goto LA42;
		LOC44 = 0;
		LOC44 = nstFormat(val, gconfigvars_161195, 3);
		processswitch_201016(s, LOC44, ((NU8) 2), info);
	}
	goto LA40;
	LA42: ;
	{
		processswitch_201016(s, val, ((NU8) 2), info);
	}
	LA40: ;
}

N_NIMCALL(void, readconfigfile_211382)(NimStringDesc* filename) {
	Tlexer206173 L;
	Ttoken206169 tok;
	Tllstream203204* stream;
	memset((void*)(&L), 0, sizeof(L));
	L.Sup.Sup.m_type = (&NTI206173);
	memset((void*)(&tok), 0, sizeof(tok));
	stream = 0;
	stream = llstreamopen_203241(filename, ((NU8) 0));
	{
		if (!!((stream == NIM_NIL))) goto LA3;
		inittoken_206306((&tok));
		openlexer_206329((&L), filename, stream);
		tok.toktype = ((NU8) 1);
		conftok_211275((&L), (&tok));
		{
			while (1) {
				if (!!((tok.toktype == ((NU8) 1)))) goto LA6;
				parseassignment_211319((&L), (&tok));
			} LA6: ;
		}
		{
			if (!(((NI) 0) < (condstack_211129 ? condstack_211129->Sup.len : 0))) goto LA9;
			lexmessage_206370((&L), ((NU16) 24), ((NimStringDesc*) &TMP2041));
		}
		LA9: ;
		closelexer_206335((&L));
		rawmessage_186612(((NU16) 279), filename);
	}
	LA3: ;
}

N_NIMCALL(NimStringDesc*, getsystemconfigpath_211434)(NimStringDesc* filename) {
	NimStringDesc* result;
	NimStringDesc* p;
	TY185156 LOC1;
	result = 0;
	p = getprefixdir_161295();
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = copyString(p);
	LOC1[1] = copyString(((NimStringDesc*) &TMP2052));
	LOC1[2] = copyString(filename);
	result = nosjoinPathOpenArray(LOC1, 3);
	{
		NIM_BOOL LOC4;
		TY185156 LOC7;
		LOC4 = 0;
		LOC4 = nosexistsFile(result);
		if (!!(LOC4)) goto LA5;
		memset((void*)LOC7, 0, sizeof(LOC7));
		LOC7[0] = copyString(p);
		LOC7[1] = copyString(((NimStringDesc*) &TMP2053));
		LOC7[2] = copyString(filename);
		result = nosjoinPathOpenArray(LOC7, 3);
	}
	LA5: ;
	{
		NIM_BOOL LOC10;
		NimStringDesc* LOC13;
		LOC10 = 0;
		LOC10 = nosexistsFile(result);
		if (!!(LOC10)) goto LA11;
		LOC13 = 0;
		LOC13 = rawNewString(filename->Sup.len + 5);
appendString(LOC13, ((NimStringDesc*) &TMP2054));
appendString(LOC13, filename);
		result = LOC13;
	}
	LA11: ;
	return result;
}

N_NIMCALL(NimStringDesc*, getuserconfigpath_211428)(NimStringDesc* filename) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = nosgetConfigDir();
	result = nosjoinPath(LOC1, filename);
	return result;
}

static N_INLINE(NIM_BOOL, fileexists_121804)(NimStringDesc* filename) {
	NIM_BOOL result;
	result = 0;
	result = nosexistsFile(filename);
	return result;
}

N_NIMCALL(void, loadconfigs_211603)(NimStringDesc* cfg) {
	NimStringDesc* pd;
	setdefaultlibpath_161298();
	{
		NimStringDesc* LOC5;
		if (!!(((gglobaloptions_161121 &(1U<<((NU)(((NU8) 16))&31U)))!=0))) goto LA3;
		LOC5 = 0;
		LOC5 = getsystemconfigpath_211434(cfg);
		readconfigfile_211382(LOC5);
	}
	LA3: ;
	{
		NimStringDesc* LOC10;
		if (!!(((gglobaloptions_161121 &(1U<<((NU)(((NU8) 18))&31U)))!=0))) goto LA8;
		LOC10 = 0;
		LOC10 = getuserconfigpath_211428(cfg);
		readconfigfile_211382(LOC10);
	}
	LA8: ;
	{
		if (!(((NI) 0) < (gprojectpath_161200 ? gprojectpath_161200->Sup.len : 0))) goto LA13;
		pd = copyString(gprojectpath_161200);
	}
	goto LA11;
	LA13: ;
	{
		pd = nosgetCurrentDir();
	}
	LA11: ;
	{
		if (!!(((gglobaloptions_161121 &(1U<<((NU)(((NU8) 19))&31U)))!=0))) goto LA18;
		{
			NimStringDesc* dir_211637;
			dir_211637 = 0;
			{
				NimStringDesc* current_211654;
				if (!NIM_FALSE) goto LA23;
				current_211654 = copyString(pd);
				{
					NimStringDesc* LOC29;
					if (!NIM_FALSE) goto LA27;
					dir_211637 = pd;
					LOC29 = 0;
					LOC29 = HEX2F_118465(dir_211637, cfg);
					readconfigfile_211382(LOC29);
				}
				LA27: ;
				{
					while (1) {
						NimStringDesc* LOC37;
						{
							NIM_BOOL LOC34;
							LOC34 = 0;
							LOC34 = nosisRootDir(current_211654);
							if (!LOC34) goto LA35;
							goto LA30;
						}
						LA35: ;
						current_211654 = nosparentDir(current_211654);
						dir_211637 = current_211654;
						LOC37 = 0;
						LOC37 = HEX2F_118465(dir_211637, cfg);
						readconfigfile_211382(LOC37);
					}
				} LA30: ;
			}
			goto LA21;
			LA23: ;
			{
				{
					NI i_211656;
					NI HEX3Atmp_211658;
					NI res_211660;
					i_211656 = 0;
					HEX3Atmp_211658 = 0;
					HEX3Atmp_211658 = (NI)((pd ? pd->Sup.len : 0) - ((NI) 2));
					res_211660 = ((NI) 0);
					{
						while (1) {
							if (!(res_211660 <= HEX3Atmp_211658)) goto LA41;
							i_211656 = res_211660;
							{
								NIM_BOOL LOC44;
								NIM_BOOL LOC46;
								NimStringDesc* LOC50;
								LOC44 = 0;
								LOC44 = (((NU8)(pd->data[i_211656])) == ((NU8)(47)) || ((NU8)(pd->data[i_211656])) == ((NU8)(47)));
								if (!(LOC44)) goto LA45;
								LOC46 = 0;
								LOC46 = (i_211656 == ((NI) 0));
								if (LOC46) goto LA47;
								LOC46 = !((((NU8)(pd->data[(NI)(i_211656 - ((NI) 1))])) == ((NU8)(47)) || ((NU8)(pd->data[(NI)(i_211656 - ((NI) 1))])) == ((NU8)(47))));
								LA47: ;
								LOC44 = LOC46;
								LA45: ;
								if (!LOC44) goto LA48;
								dir_211637 = copyStrLast(pd, ((NI) 0), i_211656);
								LOC50 = 0;
								LOC50 = HEX2F_118465(dir_211637, cfg);
								readconfigfile_211382(LOC50);
							}
							LA48: ;
							res_211660 += ((NI) 1);
						} LA41: ;
					}
				}
				{
					NimStringDesc* LOC55;
					if (!NIM_FALSE) goto LA53;
					dir_211637 = pd;
					LOC55 = 0;
					LOC55 = HEX2F_118465(dir_211637, cfg);
					readconfigfile_211382(LOC55);
				}
				LA53: ;
			}
			LA21: ;
		}
	}
	LA18: ;
	{
		NimStringDesc* LOC60;
		if (!!(((gglobaloptions_161121 &(1U<<((NU)(((NU8) 17))&31U)))!=0))) goto LA58;
		LOC60 = 0;
		LOC60 = HEX2F_118465(pd, cfg);
		readconfigfile_211382(LOC60);
		{
			NimStringDesc* projectconfig;
			if (!!(((gprojectname_161199 ? gprojectname_161199->Sup.len : 0) == ((NI) 0)))) goto LA63;
			projectconfig = noschangeFileExt(gprojectfull_161201, ((NimStringDesc*) &TMP2056));
			{
				NIM_BOOL LOC67;
				LOC67 = 0;
				LOC67 = fileexists_121804(projectconfig);
				if (!!(LOC67)) goto LA68;
				projectconfig = noschangeFileExt(gprojectfull_161201, ((NimStringDesc*) &TMP2057));
			}
			LA68: ;
			{
				NIM_BOOL LOC72;
				LOC72 = 0;
				LOC72 = fileexists_121804(projectconfig);
				if (!!(LOC72)) goto LA73;
				projectconfig = noschangeFileExt(gprojectfull_161201, ((NimStringDesc*) &TMP2058));
				{
					NIM_BOOL LOC77;
					LOC77 = 0;
					LOC77 = fileexists_121804(projectconfig);
					if (!LOC77) goto LA78;
					rawmessage_186612(((NU16) 241), projectconfig);
				}
				LA78: ;
			}
			LA73: ;
			readconfigfile_211382(projectconfig);
		}
		LA63: ;
	}
	LA58: ;
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimconfInit000)(void) {
	if (condstack_211129) nimGCunrefNoCycle(condstack_211129);
	condstack_211129 = (TY211112*) newSeqRC1((&NTI211112), 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimconfDatInit000)(void) {
NTI211112.size = sizeof(TY211112*);
NTI211112.kind = 24;
NTI211112.base = (&NTI130);
NTI211112.flags = 2;
NTI211112.marker = TMP802;
}

