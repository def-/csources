/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <setjmp.h>
typedef struct Tpasscontext263002 Tpasscontext263002;
typedef struct Tsym216822 Tsym216822;
typedef struct Tgen517004 Tgen517004;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tdocumentor361004 Tdocumentor361004;
typedef struct Cell47304 Cell47304;
typedef struct Cellseq47320 Cellseq47320;
typedef struct Gcheap49618 Gcheap49618;
typedef struct Gcstack49616 Gcstack49616;
typedef struct Cellset47316 Cellset47316;
typedef struct Pagedesc47312 Pagedesc47312;
typedef struct Memregion29488 Memregion29488;
typedef struct Smallchunk29440 Smallchunk29440;
typedef struct Llchunk29482 Llchunk29482;
typedef struct Bigchunk29442 Bigchunk29442;
typedef struct Intset29414 Intset29414;
typedef struct Trunk29410 Trunk29410;
typedef struct Avlnode29486 Avlnode29486;
typedef struct Gcstat49614 Gcstat49614;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Stringtableobj143209 Stringtableobj143209;
typedef struct Tidobj191006 Tidobj191006;
typedef struct Ttypeseq216824 Ttypeseq216824;
typedef struct Tscope216816 Tscope216816;
typedef struct TY216925 TY216925;
typedef struct Tstrtable216794 Tstrtable216794;
typedef struct Tsymseq216792 Tsymseq216792;
typedef struct Ttype216828 Ttype216828;
typedef struct Tident191012 Tident191012;
typedef struct Tlineinfo184337 Tlineinfo184337;
typedef struct Tnode216790 Tnode216790;
typedef struct Tloc216804 Tloc216804;
typedef struct Ropeobj172006 Ropeobj172006;
typedef struct Tlib216808 Tlib216808;
typedef struct Rstgenerator328010 Rstgenerator328010;
typedef struct TY328029 TY328029;
typedef struct Table328047 Table328047;
typedef struct Keyvaluepairseq328050 Keyvaluepairseq328050;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct Basechunk29438 Basechunk29438;
typedef struct Freecell29430 Freecell29430;
typedef struct Keyvaluepairseq143207 Keyvaluepairseq143207;
typedef struct Tnodeseq216784 Tnodeseq216784;
typedef struct Tinstantiation216812 Tinstantiation216812;
typedef struct Tlistentry138010 Tlistentry138010;
typedef struct Tocentry328006 Tocentry328006;
typedef struct Rstnode315008 Rstnode315008;
typedef struct Keyvaluepair328053 Keyvaluepair328053;
typedef struct Keyvaluepair143205 Keyvaluepair143205;
typedef struct TY216913 TY216913;
typedef struct Rstnodeseq315006 Rstnodeseq315006;
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
struct  Tpasscontext263002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tgen517004  {
  Tpasscontext263002 Sup;
Tdocumentor361004* doc;
Tsym216822* module;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Cell47304  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47320  {
NI len;
NI cap;
Cell47304** d;
};
struct  Cellset47316  {
NI counter;
NI max;
Pagedesc47312* head;
Pagedesc47312** data;
};
typedef Smallchunk29440* TY29503[512];
typedef Trunk29410* Trunkbuckets29412[256];
struct  Intset29414  {
Trunkbuckets29412 data;
};
struct  Memregion29488  {
NI minlargeobj;
NI maxlargeobj;
TY29503 freesmallchunks;
Llchunk29482* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29442* freechunkslist;
Intset29414 chunkstarts;
Avlnode29486* root;
Avlnode29486* deleted;
Avlnode29486* last;
Avlnode29486* freeavlnodes;
};
struct  Gcstat49614  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Gcheap49618  {
Gcstack49616* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47320 zct;
Cellseq47320 decstack;
Cellset47316 cycleroots;
Cellseq47320 tempstack;
NI recgclock;
Memregion29488 region;
Gcstat49614 stat;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tidobj191006  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable216794  {
NI counter;
Tsymseq216792* data;
};
struct  Tlineinfo184337  {
NI16 line;
NI16 col;
NI32 fileindex;
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
typedef N_NIMCALL_PTR(NimStringDesc*, Findfilehandler316014) (NimStringDesc* filename);
typedef N_NIMCALL_PTR(void, Msghandler316012) (NimStringDesc* filename, NI line, NI col, NU8 msgkind, NimStringDesc* arg);
typedef NimStringDesc* TY328039[5];
struct  Table328047  {
Keyvaluepairseq328050* data;
NI counter;
};
struct  Rstgenerator328010  {
  TNimObject Sup;
NU8 target;
Stringtableobj143209* config;
NI splitafter;
NI listingcounter;
TY328029* tocpart;
NIM_BOOL hastoc;
NimStringDesc* theindex;
NU8 options;
Findfilehandler316014 findfile;
Msghandler316012 msghandler;
NimStringDesc* filename;
TY328039 meta;
NimStringDesc* currentsection;
Table328047 seenindexterms;
};
typedef Ropeobj172006* Tsections361002[25];
struct  Tdocumentor361004  {
  Rstgenerator328010 Sup;
Ropeobj172006* moddesc;
NI id;
Tsections361002 toc;
Tsections361002 section;
NimStringDesc* indexvalfilename;
NimStringDesc* analytics;
Stringtableobj143209* seensymbols;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e, void* ClEnv);
void* ClEnv;
} TY17811;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY17811 raiseAction;
};
struct  Gcstack49616  {
Gcstack49616* prev;
Gcstack49616* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY29419[8];
struct  Pagedesc47312  {
Pagedesc47312* next;
NI key;
TY29419 bits;
};
struct  Basechunk29438  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29440  {
  Basechunk29438 Sup;
Smallchunk29440* next;
Smallchunk29440* prev;
Freecell29430* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29482  {
NI size;
NI acc;
Llchunk29482* next;
};
struct  Bigchunk29442  {
  Basechunk29438 Sup;
Bigchunk29442* next;
Bigchunk29442* prev;
NI align;
NF data;
};
struct  Trunk29410  {
Trunk29410* next;
NI key;
TY29419 bits;
};
typedef Avlnode29486* TY29493[2];
struct  Avlnode29486  {
TY29493 link;
NI key;
NI upperbound;
NI level;
};
struct  Stringtableobj143209  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq143207* data;
NU8 mode;
};
struct  Tscope216816  {
NI depthlevel;
Tstrtable216794 symbols;
Tnodeseq216784* usingsyms;
Tscope216816* parent;
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
struct  Tocentry328006  {
Rstnode315008* n;
NimStringDesc* refname;
NimStringDesc* header;
};
struct Keyvaluepair328053 {
NI Field0;
NimStringDesc* Field1;
NI Field2;
};
struct  Freecell29430  {
Freecell29430* next;
NI zerofield;
};
struct Keyvaluepair143205 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  Tinstantiation216812  {
Tsym216822* sym;
Ttypeseq216824* concretetypes;
TY216913* usedby;
NI compilesid;
};
struct  Rstnode315008  {
NU8 kind;
NimStringDesc* text;
NI level;
Rstnodeseq315006* sons;
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
struct TY328029 {
  TGenericSeq Sup;
  Tocentry328006 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq328050 {
  TGenericSeq Sup;
  Keyvaluepair328053 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq143207 {
  TGenericSeq Sup;
  Keyvaluepair143205 data[SEQ_DECL_SIZE];
};
struct Tnodeseq216784 {
  TGenericSeq Sup;
  Tnode216790* data[SEQ_DECL_SIZE];
};
struct TY216913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct Rstnodeseq315006 {
  TGenericSeq Sup;
  Rstnode315008* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP5165)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell47304*, usrtocell_51240)(void* usr);
static N_INLINE(void, rtladdzct_52801)(Cell47304* c);
N_NOINLINE(void, addzct_51217)(Cellseq47320* s, Cell47304* c);
N_NIMCALL(Tdocumentor361004*, newdocumentor_361041)(NimStringDesc* filename, Stringtableobj143209* config);
N_NIMCALL(NimStringDesc*, tofilename_185262)(NI32 fileidx);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_53619)(Cell47304* c);
static N_INLINE(NIM_BOOL, canbecycleroot_51258)(Cell47304* c);
static N_INLINE(void, rtladdcycleroot_52020)(Cell47304* c);
N_NOINLINE(void, incl_48047)(Cellset47316* s, Cell47304* cell);
static N_INLINE(void, decref_53201)(Cell47304* c);
N_NIMCALL(void, generatedoc_361976)(Tdocumentor361004* d, Tnode216790* n);
N_NIMCALL(void, writeoutput_363697)(Tdocumentor361004* d, NimStringDesc* filename, NimStringDesc* outext, NIM_BOOL usewarning);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(void, generateindex_363684)(Tdocumentor361004* d);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
static N_INLINE(void, popCurrentException)(void);
N_NIMCALL(void, reraiseException)(void);
STRING_LITERAL(TMP5166, "html", 4);
extern TNimType NTI263002; /* TPassContext */
TNimType NTI517004; /* TGen */
extern TNimType NTI361006; /* PDoc */
extern TNimType NTI216788; /* PSym */
TNimType NTI517006; /* PGen */
extern Gcheap49618 gch_49659;
extern Stringtableobj143209* gconfigvars_163195;
extern NIM_BOOL gwholeproject_163132;
extern TSafePoint* exchandler_19437;
extern TNimType NTI3628; /* IOError */
extern Exception* currexception_19439;
N_NIMCALL(void, TMP5165)(void* p, NI op) {
	Tgen517004* a;
	a = (Tgen517004*)p;
	nimGCvisit((void*)(*a).doc, op);
	nimGCvisit((void*)(*a).module, op);
}

static N_INLINE(Cell47304*, usrtocell_51240)(void* usr) {
	Cell47304* result;
	result = 0;
	result = ((Cell47304*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell47304))))));
	return result;
}

static N_INLINE(void, rtladdzct_52801)(Cell47304* c) {
	addzct_51217((&gch_49659.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell47304* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_51240(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47304* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_51240((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_52801(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(NIM_BOOL, canbecycleroot_51258)(Cell47304* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).typ).flags &(1U<<((NU)(((NU8) 1))&7U)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_52020)(Cell47304* c) {
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		incl_48047((&gch_49659.cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_53619)(Cell47304* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_51258(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_52020(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_53201)(Cell47304* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_52801(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_51258(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_52020(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Cell47304* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_51240(src);
		incref_53619(LOC5);
	}
	LA3: ;
	{
		Cell47304* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_51240((*dest));
		decref_53201(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(Tpasscontext263002*, myopen_517047)(Tsym216822* module) {
	Tpasscontext263002* result;
	Tgen517004* g;
	Tdocumentor361004* d;
	NimStringDesc* LOC1;
	result = 0;
	g = 0;
	g = (Tgen517004*) newObj((&NTI517006), sizeof(Tgen517004));
	(*g).Sup.Sup.m_type = (&NTI517004);
	asgnRefNoCycle((void**) (&(*g).module), module);
	LOC1 = 0;
	LOC1 = tofilename_185262(((NI32) ((*module).position)));
	d = newdocumentor_361041(LOC1, gconfigvars_163195);
	(*d).Sup.hastoc = NIM_TRUE;
	asgnRef((void**) (&(*g).doc), d);
	result = &g->Sup;
	return result;
}

N_NIMCALL(Tnode216790*, processnode_517041)(Tpasscontext263002* c, Tnode216790* n) {
	Tnode216790* result;
	Tgen517004* g;
	result = 0;
	result = n;
	g = ((Tgen517004*) (c));
	generatedoc_361976((*g).doc, n);
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_19437;
	exchandler_19437 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_19437 = (*exchandler_19437).prev;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	result = 0;
	result = currexception_19439;
	return result;
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_19439), NIM_NIL);
}

N_NIMCALL(Tnode216790*, close_517009)(Tpasscontext263002* p, Tnode216790* n) {
	Tnode216790* result;
	Tgen517004* g;
	NIM_BOOL usewarning;
	result = 0;
	g = ((Tgen517004*) (p));
	usewarning = !((((*(*g).module).flags &(1U<<((NU)(((NU8) 12))&31U)))!=0));
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC7;
		TSafePoint TMP5167;
		LOC3 = 0;
		LOC3 = gwholeproject_163132;
		if (LOC3) goto LA4;
		LOC3 = (((*(*g).module).flags &(1U<<((NU)(((NU8) 12))&31U)))!=0);
		LA4: ;
		if (!LOC3) goto LA5;
		LOC7 = 0;
		LOC7 = tofilename_185262(((NI32) ((*(*g).module).position)));
		writeoutput_363697((*g).doc, LOC7, ((NimStringDesc*) &TMP5166), usewarning);
		pushSafePoint(&TMP5167);
		TMP5167.status = setjmp(TMP5167.context);
		if (TMP5167.status == 0) {
			generateindex_363684((*g).doc);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI3628))) {
				TMP5167.status = 0;
				popCurrentException();
			}
		}
		if (TMP5167.status != 0) reraiseException();
	}
	LA5: ;
	return result;
}

N_NIMCALL(void, finishdoc2pass_517067)(NimStringDesc* project) {
}
NIM_EXTERNC N_NOINLINE(void, compiler_docgen2Init000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_docgen2DatInit000)(void) {
static TNimNode* TMP5164[2];
static TNimNode TMP1195[3];
NTI517004.size = sizeof(Tgen517004);
NTI517004.kind = 17;
NTI517004.base = (&NTI263002);
TMP5164[0] = &TMP1195[1];
TMP1195[1].kind = 1;
TMP1195[1].offset = offsetof(Tgen517004, doc);
TMP1195[1].typ = (&NTI361006);
TMP1195[1].name = "doc";
TMP5164[1] = &TMP1195[2];
TMP1195[2].kind = 1;
TMP1195[2].offset = offsetof(Tgen517004, module);
TMP1195[2].typ = (&NTI216788);
TMP1195[2].name = "module";
TMP1195[0].len = 2; TMP1195[0].kind = 2; TMP1195[0].sons = &TMP5164[0];
NTI517004.node = &TMP1195[0];
NTI517006.size = sizeof(Tgen517004*);
NTI517006.kind = 22;
NTI517006.base = (&NTI517004);
NTI517006.marker = TMP5165;
}

