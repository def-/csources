/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <setjmp.h>
typedef struct Tpasscontext261002 Tpasscontext261002;
typedef struct Tsym214822 Tsym214822;
typedef struct Tgen515004 Tgen515004;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tdocumentor359004 Tdocumentor359004;
typedef struct Cell47505 Cell47505;
typedef struct Cellseq47521 Cellseq47521;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Cellset47517 Cellset47517;
typedef struct Pagedesc47513 Pagedesc47513;
typedef struct Memregion29687 Memregion29687;
typedef struct Smallchunk29639 Smallchunk29639;
typedef struct Llchunk29681 Llchunk29681;
typedef struct Bigchunk29641 Bigchunk29641;
typedef struct Intset29614 Intset29614;
typedef struct Trunk29610 Trunk29610;
typedef struct Avlnode29685 Avlnode29685;
typedef struct Gcstat49814 Gcstat49814;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Stringtableobj140209 Stringtableobj140209;
typedef struct Tidobj189006 Tidobj189006;
typedef struct Ttypeseq214824 Ttypeseq214824;
typedef struct Tscope214816 Tscope214816;
typedef struct TY214925 TY214925;
typedef struct Tstrtable214794 Tstrtable214794;
typedef struct Tsymseq214792 Tsymseq214792;
typedef struct Ttype214828 Ttype214828;
typedef struct Tident189012 Tident189012;
typedef struct Tlineinfo182337 Tlineinfo182337;
typedef struct Tnode214790 Tnode214790;
typedef struct Tloc214804 Tloc214804;
typedef struct Ropeobj169006 Ropeobj169006;
typedef struct Tlib214808 Tlib214808;
typedef struct Rstgenerator326010 Rstgenerator326010;
typedef struct TY326029 TY326029;
typedef struct Table326047 Table326047;
typedef struct Keyvaluepairseq326050 Keyvaluepairseq326050;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct Basechunk29637 Basechunk29637;
typedef struct Freecell29629 Freecell29629;
typedef struct Keyvaluepairseq140207 Keyvaluepairseq140207;
typedef struct Tnodeseq214784 Tnodeseq214784;
typedef struct Tinstantiation214812 Tinstantiation214812;
typedef struct Tlistentry135010 Tlistentry135010;
typedef struct Tocentry326006 Tocentry326006;
typedef struct Rstnode313008 Rstnode313008;
typedef struct Keyvaluepair326053 Keyvaluepair326053;
typedef struct Keyvaluepair140205 Keyvaluepair140205;
typedef struct TY214913 TY214913;
typedef struct Rstnodeseq313006 Rstnodeseq313006;
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
struct  Tpasscontext261002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tgen515004  {
  Tpasscontext261002 Sup;
Tdocumentor359004* doc;
Tsym214822* module;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Cell47505  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47521  {
NI len;
NI cap;
Cell47505** d;
};
struct  Cellset47517  {
NI counter;
NI max;
Pagedesc47513* head;
Pagedesc47513** data;
};
typedef Smallchunk29639* TY29702[512];
typedef Trunk29610* Trunkbuckets29612[256];
struct  Intset29614  {
Trunkbuckets29612 data;
};
struct  Memregion29687  {
NI minlargeobj;
NI maxlargeobj;
TY29702 freesmallchunks;
Llchunk29681* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29641* freechunkslist;
Intset29614 chunkstarts;
Avlnode29685* root;
Avlnode29685* deleted;
Avlnode29685* last;
Avlnode29685* freeavlnodes;
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
Cellseq47521 zct;
Cellseq47521 decstack;
Cellset47517 cycleroots;
Cellseq47521 tempstack;
NI recgclock;
Memregion29687 region;
Gcstat49814 stat;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tidobj189006  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable214794  {
NI counter;
Tsymseq214792* data;
};
struct  Tlineinfo182337  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tloc214804  {
NU8 k;
NU8 s;
NU16 flags;
Ttype214828* t;
Ropeobj169006* r;
Ropeobj169006* heaproot;
};
struct  Tsym214822  {
  Tidobj189006 Sup;
NU8 kind;
union{
struct {Ttypeseq214824* typeinstcache;
Tscope214816* typscope;
} S1;
struct {TY214925* procinstcache;
Tsym214822* gcunsafetyreason;
} S2;
struct {TY214925* usedgenerics;
Tstrtable214794 tab;
} S3;
struct {Tsym214822* guard;
NI bitsize;
} S4;
} kindU;
NU8 magic;
Ttype214828* typ;
Tident189012* name;
Tlineinfo182337 info;
Tsym214822* owner;
NU32 flags;
Tnode214790* ast;
NU32 options;
NI position;
NI offset;
Tloc214804 loc;
Tlib214808* annex;
Tnode214790* constraint;
};
typedef N_NIMCALL_PTR(NimStringDesc*, Findfilehandler314014) (NimStringDesc* filename);
typedef N_NIMCALL_PTR(void, Msghandler314012) (NimStringDesc* filename, NI line, NI col, NU8 msgkind, NimStringDesc* arg);
typedef NimStringDesc* TY326039[5];
struct  Table326047  {
Keyvaluepairseq326050* data;
NI counter;
};
struct  Rstgenerator326010  {
  TNimObject Sup;
NU8 target;
Stringtableobj140209* config;
NI splitafter;
NI listingcounter;
TY326029* tocpart;
NIM_BOOL hastoc;
NimStringDesc* theindex;
NU8 options;
Findfilehandler314014 findfile;
Msghandler314012 msghandler;
NimStringDesc* filename;
TY326039 meta;
NimStringDesc* currentsection;
Table326047 seenindexterms;
};
typedef Ropeobj169006* Tsections359002[25];
struct  Tdocumentor359004  {
  Rstgenerator326010 Sup;
Ropeobj169006* moddesc;
NI id;
Tsections359002 toc;
Tsections359002 section;
NimStringDesc* indexvalfilename;
NimStringDesc* analytics;
Stringtableobj140209* seensymbols;
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
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY29618[16];
struct  Pagedesc47513  {
Pagedesc47513* next;
NI key;
TY29618 bits;
};
struct  Basechunk29637  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29639  {
  Basechunk29637 Sup;
Smallchunk29639* next;
Smallchunk29639* prev;
Freecell29629* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29681  {
NI size;
NI acc;
Llchunk29681* next;
};
struct  Bigchunk29641  {
  Basechunk29637 Sup;
Bigchunk29641* next;
Bigchunk29641* prev;
NI align;
NF data;
};
struct  Trunk29610  {
Trunk29610* next;
NI key;
TY29618 bits;
};
typedef Avlnode29685* TY29692[2];
struct  Avlnode29685  {
TY29692 link;
NI key;
NI upperbound;
NI level;
};
struct  Stringtableobj140209  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq140207* data;
NU8 mode;
};
struct  Tscope214816  {
NI depthlevel;
Tstrtable214794 symbols;
Tnodeseq214784* usingsyms;
Tscope214816* parent;
};
struct  Ttype214828  {
  Tidobj189006 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq214824* sons;
Tnode214790* n;
Tsym214822* owner;
Tsym214822* sym;
Tsym214822* destructor;
Tsym214822* deepcopy;
Tsym214822* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc214804 loc;
};
struct  Tident189012  {
  Tidobj189006 Sup;
NimStringDesc* s;
Tident189012* next;
NI h;
};
struct  Tnode214790  {
Ttype214828* typ;
Tlineinfo182337 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym214822* sym;
} S4;
struct {Tident189012* ident;
} S5;
struct {Tnodeseq214784* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Ropeobj169006  {
  TNimObject Sup;
Ropeobj169006* left;
Ropeobj169006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry135010  {
  TNimObject Sup;
Tlistentry135010* prev;
Tlistentry135010* next;
};
struct  Tlib214808  {
  Tlistentry135010 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj169006* name;
Tnode214790* path;
};
struct  Tocentry326006  {
Rstnode313008* n;
NimStringDesc* refname;
NimStringDesc* header;
};
struct Keyvaluepair326053 {
NI Field0;
NimStringDesc* Field1;
NI Field2;
};
struct  Freecell29629  {
Freecell29629* next;
NI zerofield;
};
struct Keyvaluepair140205 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  Tinstantiation214812  {
Tsym214822* sym;
Ttypeseq214824* concretetypes;
TY214913* usedby;
NI compilesid;
};
struct  Rstnode313008  {
NU8 kind;
NimStringDesc* text;
NI level;
Rstnodeseq313006* sons;
};
struct Ttypeseq214824 {
  TGenericSeq Sup;
  Ttype214828* data[SEQ_DECL_SIZE];
};
struct TY214925 {
  TGenericSeq Sup;
  Tinstantiation214812* data[SEQ_DECL_SIZE];
};
struct Tsymseq214792 {
  TGenericSeq Sup;
  Tsym214822* data[SEQ_DECL_SIZE];
};
struct TY326029 {
  TGenericSeq Sup;
  Tocentry326006 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq326050 {
  TGenericSeq Sup;
  Keyvaluepair326053 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq140207 {
  TGenericSeq Sup;
  Keyvaluepair140205 data[SEQ_DECL_SIZE];
};
struct Tnodeseq214784 {
  TGenericSeq Sup;
  Tnode214790* data[SEQ_DECL_SIZE];
};
struct TY214913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct Rstnodeseq313006 {
  TGenericSeq Sup;
  Rstnode313008* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP5161)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell47505*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_53001)(Cell47505* c);
N_NOINLINE(void, addzct_51417)(Cellseq47521* s, Cell47505* c);
N_NIMCALL(Tdocumentor359004*, newdocumentor_359041)(NimStringDesc* filename, Stringtableobj140209* config);
N_NIMCALL(NimStringDesc*, tofilename_183265)(NI32 fileidx);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_53819)(Cell47505* c);
static N_INLINE(NIM_BOOL, canbecycleroot_51458)(Cell47505* c);
static N_INLINE(void, rtladdcycleroot_52220)(Cell47505* c);
N_NOINLINE(void, incl_48247)(Cellset47517* s, Cell47505* cell);
static N_INLINE(void, decref_53401)(Cell47505* c);
N_NIMCALL(void, generatedoc_359976)(Tdocumentor359004* d, Tnode214790* n);
N_NIMCALL(void, writeoutput_361697)(Tdocumentor359004* d, NimStringDesc* filename, NimStringDesc* outext, NIM_BOOL usewarning);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(void, generateindex_361684)(Tdocumentor359004* d);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
static N_INLINE(void, popCurrentException)(void);
N_NIMCALL(void, reraiseException)(void);
STRING_LITERAL(TMP5162, "html", 4);
extern TNimType NTI261002; /* TPassContext */
TNimType NTI515004; /* TGen */
extern TNimType NTI359006; /* PDoc */
extern TNimType NTI214788; /* PSym */
TNimType NTI515006; /* PGen */
extern Gcheap49818 gch_49859;
extern Stringtableobj140209* gconfigvars_160195;
extern NIM_BOOL gwholeproject_160132;
extern TSafePoint* exchandler_19437;
extern TNimType NTI3628; /* IOError */
extern Exception* currexception_19439;
N_NIMCALL(void, TMP5161)(void* p, NI op) {
	Tgen515004* a;
	a = (Tgen515004*)p;
	nimGCvisit((void*)(*a).doc, op);
	nimGCvisit((void*)(*a).module, op);
}

static N_INLINE(Cell47505*, usrtocell_51440)(void* usr) {
	Cell47505* result;
	result = 0;
	result = ((Cell47505*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Cell47505))))));
	return result;
}

static N_INLINE(void, rtladdzct_53001)(Cell47505* c) {
	addzct_51417((&gch_49859.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell47505* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_51440(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47505* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_51440((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_53001(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(NIM_BOOL, canbecycleroot_51458)(Cell47505* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).typ).flags &(1U<<((NU)(((NU8) 1))&7U)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_52220)(Cell47505* c) {
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		incl_48247((&gch_49859.cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_53819)(Cell47505* c) {
	(*c).refcount = (NI)((NU32)((*c).refcount) + (NU32)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_51458(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_52220(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_53401)(Cell47505* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_53001(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_51458(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_52220(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Cell47505* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_51440(src);
		incref_53819(LOC5);
	}
	LA3: ;
	{
		Cell47505* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_51440((*dest));
		decref_53401(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(Tpasscontext261002*, myopen_515048)(Tsym214822* module) {
	Tpasscontext261002* result;
	Tgen515004* g;
	Tdocumentor359004* d;
	NimStringDesc* LOC1;
	result = 0;
	g = 0;
	g = (Tgen515004*) newObj((&NTI515006), sizeof(Tgen515004));
	(*g).Sup.Sup.m_type = (&NTI515004);
	asgnRefNoCycle((void**) (&(*g).module), module);
	LOC1 = 0;
	LOC1 = tofilename_183265(((NI32) ((*module).position)));
	d = newdocumentor_359041(LOC1, gconfigvars_160195);
	(*d).Sup.hastoc = NIM_TRUE;
	asgnRef((void**) (&(*g).doc), d);
	result = &g->Sup;
	return result;
}

N_NIMCALL(Tnode214790*, processnode_515042)(Tpasscontext261002* c, Tnode214790* n) {
	Tnode214790* result;
	Tgen515004* g;
	result = 0;
	result = n;
	g = ((Tgen515004*) (c));
	generatedoc_359976((*g).doc, n);
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

N_NIMCALL(Tnode214790*, close_515009)(Tpasscontext261002* p, Tnode214790* n) {
	Tnode214790* result;
	Tgen515004* g;
	NIM_BOOL usewarning;
	result = 0;
	g = ((Tgen515004*) (p));
	usewarning = !((((*(*g).module).flags &(1U<<((NU)(((NU8) 12))&31U)))!=0));
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC7;
		TSafePoint TMP5163;
		LOC3 = 0;
		LOC3 = gwholeproject_160132;
		if (LOC3) goto LA4;
		LOC3 = (((*(*g).module).flags &(1U<<((NU)(((NU8) 12))&31U)))!=0);
		LA4: ;
		if (!LOC3) goto LA5;
		LOC7 = 0;
		LOC7 = tofilename_183265(((NI32) ((*(*g).module).position)));
		writeoutput_361697((*g).doc, LOC7, ((NimStringDesc*) &TMP5162), usewarning);
		pushSafePoint(&TMP5163);
		TMP5163.status = setjmp(TMP5163.context);
		if (TMP5163.status == 0) {
			generateindex_361684((*g).doc);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI3628))) {
				TMP5163.status = 0;
				popCurrentException();
			}
		}
		if (TMP5163.status != 0) reraiseException();
	}
	LA5: ;
	return result;
}

N_NIMCALL(void, finishdoc2pass_515069)(NimStringDesc* project) {
}
NIM_EXTERNC N_NOINLINE(void, compiler_docgen2Init000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_docgen2DatInit000)(void) {
static TNimNode* TMP5160[2];
static TNimNode TMP1185[3];
NTI515004.size = sizeof(Tgen515004);
NTI515004.kind = 17;
NTI515004.base = (&NTI261002);
TMP5160[0] = &TMP1185[1];
TMP1185[1].kind = 1;
TMP1185[1].offset = offsetof(Tgen515004, doc);
TMP1185[1].typ = (&NTI359006);
TMP1185[1].name = "doc";
TMP5160[1] = &TMP1185[2];
TMP1185[2].kind = 1;
TMP1185[2].offset = offsetof(Tgen515004, module);
TMP1185[2].typ = (&NTI214788);
TMP1185[2].name = "module";
TMP1185[0].len = 2; TMP1185[0].kind = 2; TMP1185[0].sons = &TMP5160[0];
NTI515004.node = &TMP1185[0];
NTI515006.size = sizeof(Tgen515004*);
NTI515006.kind = 22;
NTI515006.base = (&NTI515004);
NTI515006.marker = TMP5161;
}

