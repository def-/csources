/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct TY375226 TY375226;
typedef struct TY375227 TY375227;
typedef struct Tsymseq215792 Tsymseq215792;
typedef struct Tsym215822 Tsym215822;
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
typedef struct Tidobj190006 Tidobj190006;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq215824 Ttypeseq215824;
typedef struct Tscope215816 Tscope215816;
typedef struct TY215925 TY215925;
typedef struct Tstrtable215794 Tstrtable215794;
typedef struct Ttype215828 Ttype215828;
typedef struct Tident190012 Tident190012;
typedef struct Tlineinfo183337 Tlineinfo183337;
typedef struct Tnode215790 Tnode215790;
typedef struct Tloc215804 Tloc215804;
typedef struct Ropeobj170006 Ropeobj170006;
typedef struct Tlib215808 Tlib215808;
typedef struct NimStringDesc NimStringDesc;
typedef struct Tnodeseq215784 Tnodeseq215784;
typedef struct Intset212035 Intset212035;
typedef struct Trunk212031 Trunk212031;
typedef struct Trunkseq212033 Trunkseq212033;
typedef struct Basechunk29638 Basechunk29638;
typedef struct Freecell29630 Freecell29630;
typedef struct Tinstantiation215812 Tinstantiation215812;
typedef struct Tlistentry135010 Tlistentry135010;
typedef struct TY215913 TY215913;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct TY375227 {
Tsymseq215792* Field0;
Tsym215822* Field1;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj190006  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable215794  {
NI counter;
Tsymseq215792* data;
};
struct  Tlineinfo183337  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tloc215804  {
NU8 k;
NU8 s;
NU16 flags;
Ttype215828* t;
Ropeobj170006* r;
Ropeobj170006* heaproot;
};
struct  Tsym215822  {
  Tidobj190006 Sup;
NU8 kind;
union{
struct {Ttypeseq215824* typeinstcache;
Tscope215816* typscope;
} S1;
struct {TY215925* procinstcache;
Tsym215822* gcunsafetyreason;
} S2;
struct {TY215925* usedgenerics;
Tstrtable215794 tab;
} S3;
struct {Tsym215822* guard;
NI bitsize;
} S4;
} kindU;
NU8 magic;
Ttype215828* typ;
Tident190012* name;
Tlineinfo183337 info;
Tsym215822* owner;
NU32 flags;
Tnode215790* ast;
NU32 options;
NI position;
NI offset;
Tloc215804 loc;
Tlib215808* annex;
Tnode215790* constraint;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tident190012  {
  Tidobj190006 Sup;
NimStringDesc* s;
Tident190012* next;
NI h;
};
struct  Ttype215828  {
  Tidobj190006 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq215824* sons;
Tnode215790* n;
Tsym215822* owner;
Tsym215822* sym;
Tsym215822* destructor;
Tsym215822* deepcopy;
Tsym215822* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc215804 loc;
};
struct  Tnode215790  {
Ttype215828* typ;
Tlineinfo183337 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym215822* sym;
} S4;
struct {Tident190012* ident;
} S5;
struct {Tnodeseq215784* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef NimStringDesc* TY185169[2];
typedef Tsym215822* TY265331[1];
struct  Intset212035  {
NI counter;
NI max;
Trunk212031* head;
Trunkseq212033* data;
};
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
struct  Tscope215816  {
NI depthlevel;
Tstrtable215794 symbols;
Tnodeseq215784* usingsyms;
Tscope215816* parent;
};
struct  Ropeobj170006  {
  TNimObject Sup;
Ropeobj170006* left;
Ropeobj170006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry135010  {
  TNimObject Sup;
Tlistentry135010* prev;
Tlistentry135010* next;
};
struct  Tlib215808  {
  Tlistentry135010 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj170006* name;
Tnode215790* path;
};
struct  Trunk212031  {
Trunk212031* next;
NI key;
TY29619 bits;
};
struct  Freecell29630  {
Freecell29630* next;
NI zerofield;
};
struct  Tinstantiation215812  {
Tsym215822* sym;
Ttypeseq215824* concretetypes;
TY215913* usedby;
NI compilesid;
};
struct Tsymseq215792 {
  TGenericSeq Sup;
  Tsym215822* data[SEQ_DECL_SIZE];
};
struct TY375226 {
  TGenericSeq Sup;
  TY375227 data[SEQ_DECL_SIZE];
};
struct Ttypeseq215824 {
  TGenericSeq Sup;
  Ttype215828* data[SEQ_DECL_SIZE];
};
struct TY215925 {
  TGenericSeq Sup;
  Tinstantiation215812* data[SEQ_DECL_SIZE];
};
struct Tnodeseq215784 {
  TGenericSeq Sup;
  Tnode215790* data[SEQ_DECL_SIZE];
};
struct Trunkseq212033 {
  TGenericSeq Sup;
  Trunk212031* data[SEQ_DECL_SIZE];
};
struct TY215913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1014)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell47504*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_53001)(Cell47504* c);
N_NOINLINE(void, addzct_51417)(Cellseq47520* s, Cell47504* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NU8, samemethodbucket_375253)(Tsym215822* a, Tsym215822* b);
N_NIMCALL(NI, sonslen_218327)(Ttype215828* n);
N_NIMCALL(NIM_BOOL, sametypeornil_245638)(Ttype215828* a, Ttype215828* b, NU8 flags);
N_NIMCALL(Ttype215828*, skiptypes_219113)(Ttype215828* t, NU64 kinds);
N_NIMCALL(Ttype215828*, lastson_218377)(Ttype215828* n);
N_NIMCALL(NIM_BOOL, sametype_245628)(Ttype215828* a, Ttype215828* b, NU8 flags);
N_NIMCALL(NI, inheritancediff_247442)(Ttype215828* a, Ttype215828* b);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, attachdispatcher_375362)(Tsym215822* s, Tnode215790* dispatcher);
static N_INLINE(NI, len_216059)(Tnode215790* n);
N_NIMCALL(void, add_216114)(Tnode215790* father, Tnode215790* son);
N_NIMCALL(Tnode215790*, lastson_218364)(Tnode215790* n);
N_NIMCALL(void, fixupdispatcher_375466)(Tsym215822* meth, Tsym215822* disp);
N_NIMCALL(NI, sonslen_218351)(Tnode215790* n);
N_NIMCALL(Tnode215790*, copytree_219822)(Tnode215790* src);
N_NIMCALL(void, message_188095)(Tlineinfo183337 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* formatstr, NimStringDesc** a, NI aLen0);
N_NIMCALL(NimStringDesc*, HEX24_218069)(NI16 x);
N_NIMCALL(void, checkmethodeffects_347842)(Tsym215822* disp, Tsym215822* branch);
N_NIMCALL(void, localerror_188085)(Tlineinfo183337 info, NimStringDesc* arg);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(Tsym215822*, createdispatcher_375397)(Tsym215822* s);
N_NIMCALL(Tsym215822*, copysym_218601)(Tsym215822* s, NIM_BOOL keepid);
N_NIMCALL(Ttype215828*, copytype_218470)(Ttype215828* t, Tsym215822* owner, NIM_BOOL keepid);
N_NIMCALL(void, addson_217807)(Tnode215790* father, Tnode215790* son);
N_NIMCALL(Tnode215790*, newsymnode_217234)(Tsym215822* sym);
N_NIMCALL(void, genericSeqAssign)(void* dest, void* src_84004, TNimType* mt);
N_NIMCALL(void, internalerror_188100)(Tlineinfo183337 info, NimStringDesc* errmsg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, HEX24_184431)(Tlineinfo183337 info);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(Tnode215790*, genconv_375005)(Tnode215790* n, Ttype215828* d, NIM_BOOL downcast);
N_NIMCALL(Tnode215790*, newnodeit_217801)(NU8 kind, Tlineinfo183337 info, Ttype215828* typ);
N_NIMCALL(Tnode215790*, newnode_216401)(NU8 kind);
N_NIMCALL(void, initintset_212885)(Intset212035* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NIM_BOOL, relevantcol_375896)(Tsymseq215792* methods, NI col);
N_NIMCALL(void, incl_212832)(Intset212035* s, NI key);
N_NIMCALL(void, sortbucket_375970)(Tsymseq215792** a, Intset212035* relevantcols);
N_NIMCALL(NI, cmpsignatures_375934)(Tsym215822* a, Tsym215822* b, Intset212035* relevantcols);
N_NIMCALL(NIM_BOOL, contains_212811)(Intset212035* s, NI key);
N_NIMCALL(Tsym215822*, gendispatcher_376010)(Tsymseq215792* methods, Intset212035* relevantcols);
N_NIMCALL(Tnode215790*, newnodei_217248)(NU8 kind, Tlineinfo183337 info);
N_NIMCALL(Tsym215822*, getsyssym_259041)(NimStringDesc* name);
N_NIMCALL(Ttype215828*, getsystype_259130)(NU8 kind);
STRING_LITERAL(TMP3444, "method has lock level $1, but another method has $2", 51);
STRING_LITERAL(TMP3452, "method is not a base", 20);
STRING_LITERAL(TMP3453, "no method dispatcher found", 26);
STRING_LITERAL(TMP3454, "invalid declaration order; cannot attach \'", 42);
STRING_LITERAL(TMP3455, "\' to method defined here: ", 26);
STRING_LITERAL(TMP3456, "", 0);
STRING_LITERAL(TMP3457, "cgmeth.genConv: no upcast allowed", 33);
STRING_LITERAL(TMP3458, "cgmeth.genConv: no downcast allowed", 35);
STRING_LITERAL(TMP4482, "and", 3);
STRING_LITERAL(TMP4483, "of", 2);
TY375226* gmethods_375246;
TNimType NTI375227; /* tuple[methods: TSymSeq, dispatcher: PSym] */
extern TNimType NTI215792; /* TSymSeq */
extern TNimType NTI215788; /* PSym */
TNimType NTI375226; /* seq[tuple[methods: TSymSeq, dispatcher: PSym]] */
extern Gcheap49818 gch_49859;
extern Tnode215790* emptynode_216801;
N_NIMCALL(void, TMP1014)(void* p, NI op) {
	TY375226* a;
	NI LOC1;
	a = (TY375226*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1, op);
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

N_NIMCALL(NU8, samemethodbucket_375253)(Tsym215822* a, Tsym215822* b) {
	NU8 result;
{	result = 0;
	{
		if (!!(((*(*a).name).Sup.id == (*(*b).name).Sup.id))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI LOC7;
		NI LOC8;
		LOC7 = 0;
		LOC7 = sonslen_218327((*a).typ);
		LOC8 = 0;
		LOC8 = sonslen_218327((*b).typ);
		if (!!((LOC7 == LOC8))) goto LA9;
		goto BeforeRet;
	}
	LA9: ;
	{
		NIM_BOOL LOC13;
		LOC13 = 0;
		LOC13 = sametypeornil_245638((*(*a).typ).sons->data[((NI) 0)], (*(*b).typ).sons->data[((NI) 0)], 0);
		if (!!(LOC13)) goto LA14;
		goto BeforeRet;
	}
	LA14: ;
	{
		NI i_375276;
		NI HEX3Atmp_375355;
		NI LOC17;
		NI res_375358;
		i_375276 = 0;
		HEX3Atmp_375355 = 0;
		LOC17 = 0;
		LOC17 = sonslen_218327((*a).typ);
		HEX3Atmp_375355 = (NI)(LOC17 - ((NI) 1));
		res_375358 = ((NI) 1);
		{
			while (1) {
				Ttype215828* aa;
				Ttype215828* bb;
				if (!(res_375358 <= HEX3Atmp_375355)) goto LA19;
				i_375276 = res_375358;
				aa = (*(*a).typ).sons->data[i_375276];
				bb = (*(*b).typ).sons->data[i_375276];
				{
					while (1) {
						aa = skiptypes_219113(aa, 2048);
						bb = skiptypes_219113(bb, 2048);
						{
							NIM_BOOL LOC24;
							LOC24 = 0;
							LOC24 = ((*aa).kind == (*bb).kind);
							if (!(LOC24)) goto LA25;
							LOC24 = ((14680064 &((NU64)1<<((NU)((*aa).kind)&63U)))!=0);
							LA25: ;
							if (!LOC24) goto LA26;
							aa = lastson_218377(aa);
							bb = lastson_218377(bb);
						}
						goto LA22;
						LA26: ;
						{
							goto LA20;
						}
						LA22: ;
					}
				} LA20: ;
				{
					NIM_BOOL LOC31;
					LOC31 = 0;
					LOC31 = sametype_245628(aa, bb, 0);
					if (!LOC31) goto LA32;
					{
						NIM_BOOL LOC36;
						LOC36 = 0;
						LOC36 = ((*aa).kind == ((NU8) 17));
						if (!(LOC36)) goto LA37;
						LOC36 = !((result == ((NU8) 1)));
						LA37: ;
						if (!LOC36) goto LA38;
						result = ((NU8) 2);
					}
					LA38: ;
				}
				goto LA29;
				LA32: ;
				{
					NIM_BOOL LOC41;
					NI diff;
					LOC41 = 0;
					LOC41 = ((*aa).kind == ((NU8) 17));
					if (!(LOC41)) goto LA42;
					LOC41 = ((*bb).kind == ((NU8) 17));
					LA42: ;
					if (!LOC41) goto LA43;
					diff = inheritancediff_247442(bb, aa);
					{
						if (!(diff < ((NI) 0))) goto LA47;
						{
							if (!!((result == ((NU8) 1)))) goto LA51;
							result = ((NU8) 2);
						}
						LA51: ;
					}
					goto LA45;
					LA47: ;
					{
						if (!!((diff == ((NI) IL64(9223372036854775807))))) goto LA54;
						result = ((NU8) 1);
					}
					goto LA45;
					LA54: ;
					LA45: ;
				}
				goto LA29;
				LA43: ;
				{
					result = ((NU8) 0);
					goto BeforeRet;
				}
				LA29: ;
				res_375358 += ((NI) 1);
			} LA19: ;
		}
	}
	}BeforeRet: ;
	return result;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell47504* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_51440(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47504* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_51440((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_53001(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(NI, len_216059)(Tnode215790* n) {
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

N_NIMCALL(void, attachdispatcher_375362)(Tsym215822* s, Tnode215790* dispatcher) {
	NI L;
	NI LOC1;
	Tnode215790* x;
	LOC1 = 0;
	LOC1 = len_216059((*s).ast);
	L = (NI)(LOC1 - ((NI) 1));
	x = (*(*s).ast).kindU.S6.sons->data[L];
	{
		NIM_BOOL LOC4;
		LOC4 = 0;
		LOC4 = ((*x).kind == ((NU8) 3));
		if (!(LOC4)) goto LA5;
		LOC4 = (((*(*x).kindU.S4.sym).flags &(1U<<((NU)(((NU8) 25))&31U)))!=0);
		LA5: ;
		if (!LOC4) goto LA6;
		asgnRefNoCycle((void**) (&(*(*s).ast).kindU.S6.sons->data[L]), dispatcher);
	}
	goto LA2;
	LA6: ;
	{
		add_216114((*s).ast, dispatcher);
	}
	LA2: ;
}

N_NIMCALL(void, fixupdispatcher_375466)(Tsym215822* meth, Tsym215822* disp) {
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		NI LOC5;
		NI LOC7;
		LOC3 = 0;
		LOC4 = 0;
		LOC5 = 0;
		LOC5 = sonslen_218351((*disp).ast);
		LOC4 = (((NI) 7) < LOC5);
		if (!(LOC4)) goto LA6;
		LOC7 = 0;
		LOC7 = sonslen_218351((*meth).ast);
		LOC4 = (((NI) 7) < LOC7);
		LA6: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA8;
		LOC3 = ((*(*disp).ast).kindU.S6.sons->data[((NI) 7)] == emptynode_216801);
		LA8: ;
		if (!LOC3) goto LA9;
		asgnRefNoCycle((void**) (&(*(*disp).ast).kindU.S6.sons->data[((NI) 7)]), copytree_219822((*(*meth).ast).kindU.S6.sons->data[((NI) 7)]));
	}
	LA9: ;
	{
		if (!((*(*disp).typ).locklevel == ((NI16) -1))) goto LA13;
		(*(*disp).typ).locklevel = (*(*meth).typ).locklevel;
	}
	goto LA11;
	LA13: ;
	{
		NIM_BOOL LOC16;
		TY185169 LOC20;
		NimStringDesc* LOC21;
		LOC16 = 0;
		LOC16 = !(((*(*meth).typ).locklevel == ((NI16) -1)));
		if (!(LOC16)) goto LA17;
		LOC16 = !(((*(*meth).typ).locklevel == (*(*disp).typ).locklevel));
		LA17: ;
		if (!LOC16) goto LA18;
		memset((void*)LOC20, 0, sizeof(LOC20));
		LOC20[0] = HEX24_218069((*(*meth).typ).locklevel);
		LOC20[1] = HEX24_218069((*(*disp).typ).locklevel);
		LOC21 = 0;
		LOC21 = nsuFormatOpenArray(((NimStringDesc*) &TMP3444), LOC20, 2);
		message_188095((*meth).info, ((NU16) 265), LOC21);
		{
			if (!((*(*disp).typ).locklevel < (*(*meth).typ).locklevel)) goto LA24;
			(*(*disp).typ).locklevel = (*(*meth).typ).locklevel;
		}
		LA24: ;
	}
	goto LA11;
	LA18: ;
	LA11: ;
}

N_NIMCALL(Tsym215822*, createdispatcher_375397)(Tsym215822* s) {
	Tsym215822* result;
	Tsym215822* disp;
	Tnode215790* LOC15;
	Tnode215790* LOC16;
{	result = 0;
	disp = copysym_218601(s, NIM_FALSE);
	(*disp).flags |= ((NU32)1)<<((((NU8) 25))%(sizeof(NU32)*8));
	(*disp).flags &= ~(((NU32)1) << ((((NU8) 1)) % (sizeof(NU32)*8)));
	asgnRefNoCycle((void**) (&(*disp).typ), copytype_218470((*disp).typ, (*(*disp).typ).owner, NIM_FALSE));
	{
		if (!((*(*disp).typ).callconv == ((NU8) 5))) goto LA3;
		(*(*disp).typ).callconv = ((NU8) 0);
	}
	LA3: ;
	asgnRefNoCycle((void**) (&(*disp).ast), copytree_219822((*s).ast));
	asgnRefNoCycle((void**) (&(*(*disp).ast).kindU.S6.sons->data[((NI) 6)]), emptynode_216801);
	asgnRefNoCycle((void**) (&(*disp).loc.r), NIM_NIL);
	{
		if (!!(((*(*s).typ).sons->data[((NI) 0)] == NIM_NIL))) goto LA7;
		{
			NI LOC11;
			LOC11 = 0;
			LOC11 = sonslen_218351((*disp).ast);
			if (!(((NI) 7) < LOC11)) goto LA12;
			asgnRefNoCycle((void**) (&(*(*(*disp).ast).kindU.S6.sons->data[((NI) 7)]).kindU.S4.sym), copysym_218601((*(*(*s).ast).kindU.S6.sons->data[((NI) 7)]).kindU.S4.sym, NIM_FALSE));
		}
		goto LA9;
		LA12: ;
		{
			addson_217807((*disp).ast, emptynode_216801);
		}
		LA9: ;
	}
	LA7: ;
	LOC15 = 0;
	LOC15 = newsymnode_217234(disp);
	attachdispatcher_375362(s, LOC15);
	LOC16 = 0;
	LOC16 = newsymnode_217234(disp);
	attachdispatcher_375362(disp, LOC16);
	result = disp;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, methoddef_375628)(Tsym215822* s, NIM_BOOL fromcache) {
	NI L;
	Tsym215822* witness;
	TY375227 LOC19;
	TY265331 LOC20;
{	L = (gmethods_375246 ? gmethods_375246->Sup.len : 0);
	witness = 0;
	{
		NI i_375653;
		NI HEX3Atmp_375889;
		NI res_375892;
		i_375653 = 0;
		HEX3Atmp_375889 = 0;
		HEX3Atmp_375889 = (NI)(L - ((NI) 1));
		res_375892 = ((NI) 0);
		{
			while (1) {
				Tsym215822* disp;
				NU8 LOC4;
				if (!(res_375892 <= HEX3Atmp_375889)) goto LA3;
				i_375653 = res_375892;
				disp = gmethods_375246->data[i_375653].Field1;
				LOC4 = 0;
				LOC4 = samemethodbucket_375253(disp, s);
				switch (LOC4) {
				case ((NU8) 2):
				{
					Tnode215790* LOC6;
					gmethods_375246->data[i_375653].Field0 = (Tsymseq215792*) incrSeqV2(&(gmethods_375246->data[i_375653].Field0)->Sup, sizeof(Tsym215822*));
					asgnRefNoCycle((void**) (&gmethods_375246->data[i_375653].Field0->data[gmethods_375246->data[i_375653].Field0->Sup.len]), s);
					++gmethods_375246->data[i_375653].Field0->Sup.len;
					LOC6 = 0;
					LOC6 = lastson_218364((*disp).ast);
					attachdispatcher_375362(s, LOC6);
					fixupdispatcher_375466(s, disp);
					checkmethodeffects_347842(disp, s);
					{
						NIM_BOOL LOC9;
						LOC9 = 0;
						LOC9 = (((*s).flags &(1U<<((NU)(((NU8) 18))&31U)))!=0);
						if (!(LOC9)) goto LA10;
						LOC9 = !((gmethods_375246->data[i_375653].Field0->data[((NI) 0)] == s));
						LA10: ;
						if (!LOC9) goto LA11;
						localerror_188085((*s).info, ((NimStringDesc*) &TMP3452));
					}
					LA11: ;
					goto BeforeRet;
				}
				break;
				case ((NU8) 0):
				{
				}
				break;
				case ((NU8) 1):
				{
					{
						if (!witness == 0) goto LA17;
						witness = gmethods_375246->data[i_375653].Field0->data[((NI) 0)];
					}
					LA17: ;
				}
				break;
				}
				res_375892 += ((NI) 1);
			} LA3: ;
		}
	}
	memset((void*)(&LOC19), 0, sizeof(LOC19));
	LOC19.Field0 = (Tsymseq215792*) newSeq((&NTI215792), 1);
	memset((void*)LOC20, 0, sizeof(LOC20));
	LOC20[0] = s;
	asgnRefNoCycle((void**) (&LOC19.Field0->data[0]), LOC20[0]);
	LOC19.Field1 = createdispatcher_375397(s);
	gmethods_375246 = (TY375226*) incrSeqV2(&(gmethods_375246)->Sup, sizeof(TY375227));
	genericSeqAssign((&gmethods_375246->data[gmethods_375246->Sup.len].Field0), LOC19.Field0, (&NTI215792));
	asgnRefNoCycle((void**) (&gmethods_375246->data[gmethods_375246->Sup.len].Field1), LOC19.Field1);
	++gmethods_375246->Sup.len;
	{
		if (!fromcache) goto LA23;
		internalerror_188100((*s).info, ((NimStringDesc*) &TMP3453));
	}
	LA23: ;
	{
		NimStringDesc* LOC29;
		NimStringDesc* LOC30;
		if (!!((witness == NIM_NIL))) goto LA27;
		LOC29 = 0;
		LOC30 = 0;
		LOC30 = HEX24_184431((*witness).info);
		LOC29 = rawNewString((*(*s).name).s->Sup.len + LOC30->Sup.len + 68);
appendString(LOC29, ((NimStringDesc*) &TMP3454));
appendString(LOC29, (*(*s).name).s);
appendString(LOC29, ((NimStringDesc*) &TMP3455));
appendString(LOC29, LOC30);
		localerror_188085((*s).info, LOC29);
	}
	goto LA25;
	LA27: ;
	{
		if (!!((((*s).flags &(1U<<((NU)(((NU8) 18))&31U)))!=0))) goto LA32;
		message_188095((*s).info, ((NU16) 252), ((NimStringDesc*) &TMP3456));
	}
	goto LA25;
	LA32: ;
	LA25: ;
	}BeforeRet: ;
}

N_NIMCALL(Tnode215790*, genconv_375005)(Tnode215790* n, Ttype215828* d, NIM_BOOL downcast) {
	Tnode215790* result;
	Ttype215828* dest;
	Ttype215828* source;
	result = 0;
	dest = skiptypes_219113(d, IL64(211106247256320));
	source = skiptypes_219113((*n).typ, IL64(211106247256320));
	{
		NIM_BOOL LOC3;
		NI diff;
		LOC3 = 0;
		LOC3 = ((*source).kind == ((NU8) 17));
		if (!(LOC3)) goto LA4;
		LOC3 = ((*dest).kind == ((NU8) 17));
		LA4: ;
		if (!LOC3) goto LA5;
		diff = inheritancediff_247442(dest, source);
		{
			if (!(diff == ((NI) IL64(9223372036854775807)))) goto LA9;
			result = n;
		}
		goto LA7;
		LA9: ;
		{
			if (!(diff < ((NI) 0))) goto LA12;
			result = newnodeit_217801(((NU8) 67), (*n).info, d);
			addson_217807(result, n);
			{
				if (!downcast) goto LA16;
				internalerror_188100((*n).info, ((NimStringDesc*) &TMP3457));
			}
			LA16: ;
		}
		goto LA7;
		LA12: ;
		{
			if (!(((NI) 0) < diff)) goto LA19;
			result = newnodeit_217801(((NU8) 66), (*n).info, d);
			addson_217807(result, n);
			{
				if (!!(downcast)) goto LA23;
				internalerror_188100((*n).info, ((NimStringDesc*) &TMP3458));
			}
			LA23: ;
		}
		goto LA7;
		LA19: ;
		{
			result = n;
		}
		LA7: ;
	}
	goto LA1;
	LA5: ;
	{
		result = n;
	}
	LA1: ;
	return result;
}

N_NIMCALL(Tnode215790*, methodcall_375036)(Tnode215790* n) {
	Tnode215790* result;
	Tsym215822* disp;
	Tnode215790* LOC1;
	result = 0;
	result = n;
	LOC1 = 0;
	LOC1 = lastson_218364((*(*(*result).kindU.S6.sons->data[((NI) 0)]).kindU.S4.sym).ast);
	disp = (*LOC1).kindU.S4.sym;
	asgnRefNoCycle((void**) (&(*(*result).kindU.S6.sons->data[((NI) 0)]).kindU.S4.sym), disp);
	{
		NI i_375214;
		NI HEX3Atmp_375219;
		NI LOC3;
		NI res_375222;
		i_375214 = 0;
		HEX3Atmp_375219 = 0;
		LOC3 = 0;
		LOC3 = sonslen_218351(result);
		HEX3Atmp_375219 = (NI)(LOC3 - ((NI) 1));
		res_375222 = ((NI) 1);
		{
			while (1) {
				if (!(res_375222 <= HEX3Atmp_375219)) goto LA5;
				i_375214 = res_375222;
				asgnRefNoCycle((void**) (&(*result).kindU.S6.sons->data[i_375214]), genconv_375005((*result).kindU.S6.sons->data[i_375214], (*(*disp).typ).sons->data[i_375214], NIM_TRUE));
				res_375222 += ((NI) 1);
			} LA5: ;
		}
	}
	return result;
}

N_NIMCALL(NIM_BOOL, relevantcol_375896)(Tsymseq215792* methods, NI col) {
	NIM_BOOL result;
	Ttype215828* t;
{	result = 0;
	t = skiptypes_219113((*(*methods->data[((NI) 0)]).typ).sons->data[col], IL64(211106247215360));
	{
		if (!((*t).kind == ((NU8) 17))) goto LA3;
		{
			NI i_375923;
			NI HEX3Atmp_375927;
			NI res_375930;
			i_375923 = 0;
			HEX3Atmp_375927 = 0;
			HEX3Atmp_375927 = (methods ? (methods->Sup.len-1) : -1);
			res_375930 = ((NI) 1);
			{
				while (1) {
					Ttype215828* t2;
					if (!(res_375930 <= HEX3Atmp_375927)) goto LA7;
					i_375923 = res_375930;
					t2 = skiptypes_219113((*(*methods->data[i_375923]).typ).sons->data[col], IL64(211106247215360));
					{
						NIM_BOOL LOC10;
						LOC10 = 0;
						LOC10 = sametype_245628(t2, t, 0);
						if (!!(LOC10)) goto LA11;
						result = NIM_TRUE;
						goto BeforeRet;
					}
					LA11: ;
					res_375930 += ((NI) 1);
				} LA7: ;
			}
		}
	}
	LA3: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, cmpsignatures_375934)(Tsym215822* a, Tsym215822* b, Intset212035* relevantcols) {
	NI result;
{	result = 0;
	{
		NI col_375952;
		NI HEX3Atmp_375963;
		NI LOC2;
		NI res_375966;
		col_375952 = 0;
		HEX3Atmp_375963 = 0;
		LOC2 = 0;
		LOC2 = sonslen_218327((*a).typ);
		HEX3Atmp_375963 = (NI)(LOC2 - ((NI) 1));
		res_375966 = ((NI) 1);
		{
			while (1) {
				if (!(res_375966 <= HEX3Atmp_375963)) goto LA4;
				col_375952 = res_375966;
				{
					NIM_BOOL LOC7;
					Ttype215828* aa;
					Ttype215828* bb;
					NI d;
					LOC7 = 0;
					LOC7 = contains_212811(relevantcols, col_375952);
					if (!LOC7) goto LA8;
					aa = skiptypes_219113((*(*a).typ).sons->data[col_375952], IL64(211106247215360));
					bb = skiptypes_219113((*(*b).typ).sons->data[col_375952], IL64(211106247215360));
					d = inheritancediff_247442(aa, bb);
					{
						if (!!((d == ((NI) IL64(9223372036854775807))))) goto LA12;
						result = d;
						goto BeforeRet;
					}
					LA12: ;
				}
				LA8: ;
				res_375966 += ((NI) 1);
			} LA4: ;
		}
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, sortbucket_375970)(Tsymseq215792** a, Intset212035* relevantcols) {
	NI n;
	NI h;
	n = ((*a) ? (*a)->Sup.len : 0);
	h = ((NI) 1);
	{
		while (1) {
			h = (NI)((NI)(((NI) 3) * h) + ((NI) 1));
			{
				if (!(n < h)) goto LA5;
				goto LA1;
			}
			LA5: ;
		}
	} LA1: ;
	{
		while (1) {
			h = (NI)(h / ((NI) 3));
			{
				NI i_375996;
				NI HEX3Atmp_376003;
				NI res_376006;
				i_375996 = 0;
				HEX3Atmp_376003 = 0;
				HEX3Atmp_376003 = (NI)(n - ((NI) 1));
				res_376006 = h;
				{
					while (1) {
						Tsym215822* v;
						NI j;
						if (!(res_376006 <= HEX3Atmp_376003)) goto LA11;
						i_375996 = res_376006;
						v = (*a)->data[i_375996];
						j = i_375996;
						{
							while (1) {
								NI LOC14;
								LOC14 = 0;
								LOC14 = cmpsignatures_375934((*a)->data[(NI)(j - h)], v, relevantcols);
								if (!(((NI) 0) <= LOC14)) goto LA13;
								asgnRefNoCycle((void**) (&(*a)->data[j]), (*a)->data[(NI)(j - h)]);
								j = (NI)(j - h);
								{
									if (!(j < h)) goto LA17;
									goto LA12;
								}
								LA17: ;
							} LA13: ;
						} LA12: ;
						asgnRefNoCycle((void**) (&(*a)->data[j]), v);
						res_376006 += ((NI) 1);
					} LA11: ;
				}
			}
			{
				if (!(h == ((NI) 1))) goto LA21;
				goto LA7;
			}
			LA21: ;
		}
	} LA7: ;
}

N_NIMCALL(Tsym215822*, gendispatcher_376010)(Tsymseq215792* methods, Intset212035* relevantcols) {
	Tsym215822* result;
	Tsym215822* base;
	Tnode215790* LOC1;
	NI paramlen;
	Tnode215790* disp;
	Tsym215822* ands;
	Tsym215822* iss;
	result = 0;
	LOC1 = 0;
	LOC1 = lastson_218364((*methods->data[((NI) 0)]).ast);
	base = (*LOC1).kindU.S4.sym;
	result = base;
	paramlen = sonslen_218327((*base).typ);
	disp = newnodei_217248(((NU8) 92), (*base).info);
	ands = getsyssym_259041(((NimStringDesc*) &TMP4482));
	iss = getsyssym_259041(((NimStringDesc*) &TMP4483));
	{
		NI meth_376035;
		NI HEX3Atmp_376144;
		NI res_376147;
		meth_376035 = 0;
		HEX3Atmp_376144 = 0;
		HEX3Atmp_376144 = (methods ? (methods->Sup.len-1) : -1);
		res_376147 = ((NI) 0);
		{
			while (1) {
				Tsym215822* curr;
				Tnode215790* cond;
				Tnode215790* call;
				Tnode215790* LOC24;
				Tnode215790* ret;
				if (!(res_376147 <= HEX3Atmp_376144)) goto LA4;
				meth_376035 = res_376147;
				curr = methods->data[meth_376035];
				cond = NIM_NIL;
				{
					NI col_376049;
					NI HEX3Atmp_376128;
					NI res_376131;
					col_376049 = 0;
					HEX3Atmp_376128 = 0;
					HEX3Atmp_376128 = (NI)(paramlen - ((NI) 1));
					res_376131 = ((NI) 1);
					{
						while (1) {
							if (!(res_376131 <= HEX3Atmp_376128)) goto LA7;
							col_376049 = res_376131;
							{
								NIM_BOOL LOC10;
								Tnode215790* isn;
								Ttype215828* LOC13;
								Tnode215790* LOC14;
								Tnode215790* LOC15;
								Tnode215790* LOC16;
								LOC10 = 0;
								LOC10 = contains_212811(relevantcols, col_376049);
								if (!LOC10) goto LA11;
								LOC13 = 0;
								LOC13 = getsystype_259130(((NU8) 1));
								isn = newnodeit_217801(((NU8) 27), (*base).info, LOC13);
								LOC14 = 0;
								LOC14 = newsymnode_217234(iss);
								addson_217807(isn, LOC14);
								LOC15 = 0;
								LOC15 = newsymnode_217234((*(*(*(*base).typ).n).kindU.S6.sons->data[col_376049]).kindU.S4.sym);
								addson_217807(isn, LOC15);
								LOC16 = 0;
								LOC16 = newnodeit_217801(((NU8) 4), (*base).info, (*(*curr).typ).sons->data[col_376049]);
								addson_217807(isn, LOC16);
								{
									Tnode215790* a;
									Ttype215828* LOC21;
									Tnode215790* LOC22;
									if (!!((cond == NIM_NIL))) goto LA19;
									LOC21 = 0;
									LOC21 = getsystype_259130(((NU8) 1));
									a = newnodeit_217801(((NU8) 27), (*base).info, LOC21);
									LOC22 = 0;
									LOC22 = newsymnode_217234(ands);
									addson_217807(a, LOC22);
									addson_217807(a, cond);
									addson_217807(a, isn);
									cond = a;
								}
								goto LA17;
								LA19: ;
								{
									cond = isn;
								}
								LA17: ;
							}
							LA11: ;
							res_376131 += ((NI) 1);
						} LA7: ;
					}
				}
				call = newnodei_217248(((NU8) 27), (*base).info);
				LOC24 = 0;
				LOC24 = newsymnode_217234(curr);
				addson_217807(call, LOC24);
				{
					NI col_376084;
					NI HEX3Atmp_376136;
					NI res_376139;
					col_376084 = 0;
					HEX3Atmp_376136 = 0;
					HEX3Atmp_376136 = (NI)(paramlen - ((NI) 1));
					res_376139 = ((NI) 1);
					{
						while (1) {
							Tnode215790* LOC28;
							Tnode215790* LOC29;
							if (!(res_376139 <= HEX3Atmp_376136)) goto LA27;
							col_376084 = res_376139;
							LOC28 = 0;
							LOC28 = newsymnode_217234((*(*(*(*base).typ).n).kindU.S6.sons->data[col_376084]).kindU.S4.sym);
							LOC29 = 0;
							LOC29 = genconv_375005(LOC28, (*(*curr).typ).sons->data[col_376084], NIM_FALSE);
							addson_217807(call, LOC29);
							res_376139 += ((NI) 1);
						} LA27: ;
					}
				}
				ret = 0;
				{
					Tnode215790* a;
					Tnode215790* LOC34;
					if (!!(((*(*base).typ).sons->data[((NI) 0)] == NIM_NIL))) goto LA32;
					a = newnodei_217248(((NU8) 74), (*base).info);
					LOC34 = 0;
					LOC34 = newsymnode_217234((*(*(*base).ast).kindU.S6.sons->data[((NI) 7)]).kindU.S4.sym);
					addson_217807(a, LOC34);
					addson_217807(a, call);
					ret = newnodei_217248(((NU8) 109), (*base).info);
					addson_217807(ret, a);
				}
				goto LA30;
				LA32: ;
				{
					ret = call;
				}
				LA30: ;
				{
					Tnode215790* a;
					if (!!((cond == NIM_NIL))) goto LA38;
					a = newnodei_217248(((NU8) 86), (*base).info);
					addson_217807(a, cond);
					addson_217807(a, ret);
					addson_217807(disp, a);
				}
				goto LA36;
				LA38: ;
				{
					disp = ret;
				}
				LA36: ;
				res_376147 += ((NI) 1);
			} LA4: ;
		}
	}
	asgnRefNoCycle((void**) (&(*(*result).ast).kindU.S6.sons->data[((NI) 6)]), disp);
	return result;
}

N_NIMCALL(Tnode215790*, generatemethoddispatchers_376151)(void) {
	Tnode215790* result;
	result = 0;
	result = newnode_216401(((NU8) 115));
	{
		NI bucket_376173;
		NI HEX3Atmp_376199;
		NI res_376202;
		bucket_376173 = 0;
		HEX3Atmp_376199 = 0;
		HEX3Atmp_376199 = (NI)((gmethods_375246 ? gmethods_375246->Sup.len : 0) - ((NI) 1));
		res_376202 = ((NI) 0);
		{
			while (1) {
				Intset212035 relevantcols;
				Tsym215822* LOC13;
				Tnode215790* LOC14;
				if (!(res_376202 <= HEX3Atmp_376199)) goto LA3;
				bucket_376173 = res_376202;
				memset((void*)(&relevantcols), 0, sizeof(relevantcols));
				chckNil((void*)(&relevantcols));
				memset((void*)(&relevantcols), 0, sizeof(relevantcols));
				initintset_212885((&relevantcols));
				{
					NI col_376187;
					NI HEX3Atmp_376192;
					NI LOC5;
					NI res_376195;
					col_376187 = 0;
					HEX3Atmp_376192 = 0;
					LOC5 = 0;
					LOC5 = sonslen_218327((*gmethods_375246->data[bucket_376173].Field0->data[((NI) 0)]).typ);
					HEX3Atmp_376192 = (NI)(LOC5 - ((NI) 1));
					res_376195 = ((NI) 1);
					{
						while (1) {
							if (!(res_376195 <= HEX3Atmp_376192)) goto LA7;
							col_376187 = res_376195;
							{
								NIM_BOOL LOC10;
								LOC10 = 0;
								LOC10 = relevantcol_375896(gmethods_375246->data[bucket_376173].Field0, col_376187);
								if (!LOC10) goto LA11;
								incl_212832((&relevantcols), col_376187);
							}
							LA11: ;
							res_376195 += ((NI) 1);
						} LA7: ;
					}
				}
				sortbucket_375970((&gmethods_375246->data[bucket_376173].Field0), (&relevantcols));
				LOC13 = 0;
				LOC13 = gendispatcher_376010(gmethods_375246->data[bucket_376173].Field0, (&relevantcols));
				LOC14 = 0;
				LOC14 = newsymnode_217234(LOC13);
				addson_217807(result, LOC14);
				res_376202 += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_cgmethInit000)(void) {
	if (gmethods_375246) nimGCunrefNoCycle(gmethods_375246);
	gmethods_375246 = (TY375226*) newSeqRC1((&NTI375226), 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_cgmethDatInit000)(void) {
static TNimNode* TMP1013[2];
static TNimNode TMP1011[3];
NTI375227.size = sizeof(TY375227);
NTI375227.kind = 18;
NTI375227.base = 0;
NTI375227.flags = 2;
TMP1013[0] = &TMP1011[1];
TMP1011[1].kind = 1;
TMP1011[1].offset = offsetof(TY375227, Field0);
TMP1011[1].typ = (&NTI215792);
TMP1011[1].name = "Field0";
TMP1013[1] = &TMP1011[2];
TMP1011[2].kind = 1;
TMP1011[2].offset = offsetof(TY375227, Field1);
TMP1011[2].typ = (&NTI215788);
TMP1011[2].name = "Field1";
TMP1011[0].len = 2; TMP1011[0].kind = 2; TMP1011[0].sons = &TMP1013[0];
NTI375227.node = &TMP1011[0];
NTI375226.size = sizeof(TY375226*);
NTI375226.kind = 24;
NTI375226.base = (&NTI375227);
NTI375226.flags = 2;
NTI375226.marker = TMP1014;
}

