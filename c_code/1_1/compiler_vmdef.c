/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tctx265036 Tctx265036;
typedef struct Tpasscontext263002 Tpasscontext263002;
typedef struct TNimObject TNimObject;
typedef struct TY265242 TY265242;
typedef struct TY185093 TY185093;
typedef struct Tnode216790 Tnode216790;
typedef struct Ttypeseq216824 Ttypeseq216824;
typedef struct PprocHEX3Aobjecttype265221 PprocHEX3Aobjecttype265221;
typedef struct Tsym216822 Tsym216822;
typedef struct Tlineinfo184337 Tlineinfo184337;
typedef struct TY265261 TY265261;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY265222 TY265222;
typedef struct TY265227 TY265227;
typedef struct Tblock265018 Tblock265018;
typedef struct TY265202 TY265202;
typedef struct TY265262 TY265262;
typedef struct Vmargs265030 Vmargs265030;
typedef struct TY533873 TY533873;
typedef struct TY533876 TY533876;
typedef struct Cell47304 Cell47304;
typedef struct Cellseq47320 Cellseq47320;
typedef struct Gcheap49618 Gcheap49618;
typedef struct Gcstack49616 Gcstack49616;
typedef struct Cellset47316 Cellset47316;
typedef struct Pagedesc47312 Pagedesc47312;
typedef struct Memregion29487 Memregion29487;
typedef struct Smallchunk29439 Smallchunk29439;
typedef struct Llchunk29481 Llchunk29481;
typedef struct Bigchunk29441 Bigchunk29441;
typedef struct Intset29414 Intset29414;
typedef struct Trunk29410 Trunk29410;
typedef struct Avlnode29485 Avlnode29485;
typedef struct Gcstat49614 Gcstat49614;
typedef struct Ttype216828 Ttype216828;
typedef struct Tident191012 Tident191012;
typedef struct Tnodeseq216784 Tnodeseq216784;
typedef struct Tidobj191006 Tidobj191006;
typedef struct Tscope216816 Tscope216816;
typedef struct TY216925 TY216925;
typedef struct Tstrtable216794 Tstrtable216794;
typedef struct Tsymseq216792 Tsymseq216792;
typedef struct Tloc216804 Tloc216804;
typedef struct Ropeobj172006 Ropeobj172006;
typedef struct Tlib216808 Tlib216808;
typedef struct Basechunk29437 Basechunk29437;
typedef struct Freecell29429 Freecell29429;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tpasscontext263002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
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
struct  Tctx265036  {
  Tpasscontext263002 Sup;
TY265242* code;
TY185093* debug;
Tnode216790* globals;
Tnode216790* constants;
Ttypeseq216824* types;
Tnode216790* currentexceptiona;
Tnode216790* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype265221* prc;
Tsym216822* module;
Tnode216790* callsite;
NU8 mode;
NU8 features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo184337 comesfromheuristic;
TY265261* callbacks;
NimStringDesc* errorflag;
};
struct TY265227 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY265227 TY265230[256];
struct  PprocHEX3Aobjecttype265221  {
TY265222* blocks;
Tsym216822* sym;
TY265230 slots;
NI maxslots;
};
struct  Tblock265018  {
Tsym216822* label;
TY265202* fixups;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs265030* args, void* ClEnv);
void* ClEnv;
} Vmcallback265032;
struct TY265262 {
NimStringDesc* Field0;
Vmcallback265032 Field1;
};
struct TY533873 {
void* Field0;
TY533876* Field1;
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
typedef Smallchunk29439* TY29502[512];
typedef Trunk29410* Trunkbuckets29412[256];
struct  Intset29414  {
Trunkbuckets29412 data;
};
struct  Memregion29487  {
NI minlargeobj;
NI maxlargeobj;
TY29502 freesmallchunks;
Llchunk29481* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29441* freechunkslist;
Intset29414 chunkstarts;
Avlnode29485* root;
Avlnode29485* deleted;
Avlnode29485* last;
Avlnode29485* freeavlnodes;
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
Memregion29487 region;
Gcstat49614 stat;
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
struct  Vmargs265030  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode216790* currentexception;
};
struct TY533876 {
char dummy;
};
struct  Gcstack49616  {
Gcstack49616* prev;
Gcstack49616* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY29418[16];
struct  Pagedesc47312  {
Pagedesc47312* next;
NI key;
TY29418 bits;
};
struct  Basechunk29437  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29439  {
  Basechunk29437 Sup;
Smallchunk29439* next;
Smallchunk29439* prev;
Freecell29429* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29481  {
NI size;
NI acc;
Llchunk29481* next;
};
struct  Bigchunk29441  {
  Basechunk29437 Sup;
Bigchunk29441* next;
Bigchunk29441* prev;
NI align;
NF data;
};
struct  Trunk29410  {
Trunk29410* next;
NI key;
TY29418 bits;
};
typedef Avlnode29485* TY29492[2];
struct  Avlnode29485  {
TY29492 link;
NI key;
NI upperbound;
NI level;
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
struct  Freecell29429  {
Freecell29429* next;
NI zerofield;
};
struct  Tinstantiation216812  {
Tsym216822* sym;
Ttypeseq216824* concretetypes;
TY216913* usedby;
NI compilesid;
};
struct TY265242 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY265202 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY265222 {
  TGenericSeq Sup;
  Tblock265018 data[SEQ_DECL_SIZE];
};
struct TY265261 {
  TGenericSeq Sup;
  TY265262 data[SEQ_DECL_SIZE];
};
struct TY185093 {
  TGenericSeq Sup;
  Tlineinfo184337 data[SEQ_DECL_SIZE];
};
struct Ttypeseq216824 {
  TGenericSeq Sup;
  Ttype216828* data[SEQ_DECL_SIZE];
};
struct Tnodeseq216784 {
  TGenericSeq Sup;
  Tnode216790* data[SEQ_DECL_SIZE];
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
N_NIMCALL(void, TMP2075)(void* p, NI op);
N_NIMCALL(void, TMP2078)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP2079)(void* p, NI op);
N_NIMCALL(void, TMP2084)(void* p, NI op);
N_NIMCALL(void, TMP2093)(void* p, NI op);
N_NIMCALL(void, TMP2094)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell47304*, usrtocell_51240)(void* usr);
static N_INLINE(void, rtladdzct_52801)(Cell47304* c);
N_NOINLINE(void, addzct_51217)(Cellseq47320* s, Cell47304* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(Tnode216790*, newnode_217401)(NU8 kind);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(Tlineinfo184337, unknownlineinfo_185090)(void);
static N_INLINE(void, nimGCunref)(void* p);
static N_INLINE(void, decref_53201)(Cell47304* c);
static N_INLINE(NIM_BOOL, canbecycleroot_51258)(Cell47304* c);
static N_INLINE(void, rtladdcycleroot_52020)(Cell47304* c);
N_NOINLINE(void, incl_48047)(Cellset47316* s, Cell47304* cell);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_53619)(Cell47304* c);
STRING_LITERAL(TMP2850, "", 0);
extern TNimType NTI263002; /* TPassContext */
TNimType NTI265036; /* TCtx */
extern TNimType NTI120; /* uint32 */
TNimType NTI265242; /* seq[TInstr] */
extern TNimType NTI185093; /* seq[TLineInfo] */
extern TNimType NTI216782; /* PNode */
extern TNimType NTI216824; /* TTypeSeq */
extern TNimType NTI104; /* int */
TNimType NTI265221; /* PProc:ObjectType */
TNimType NTI265018; /* TBlock */
extern TNimType NTI216788; /* PSym */
TNimType NTI265202; /* seq[TPosition] */
TNimType NTI265222; /* seq[TBlock] */
TNimType NTI265227; /* tuple[inUse: bool, kind: TSlotKind] */
extern TNimType NTI130; /* bool */
TNimType NTI265026; /* TSlotKind */
TNimType NTI265230; /* array[0..255, tuple[inUse: bool, kind: TSlotKind]] */
TNimType NTI265028; /* PProc */
TNimType NTI265020; /* TEvalMode */
TNimType NTI265022; /* TSandboxFlag */
TNimType NTI265024; /* TSandboxFlags */
extern TNimType NTI184337; /* TLineInfo */
TNimType NTI265262; /* tuple[key: string, value: VmCallback] */
extern TNimType NTI138; /* string */
TNimType NTI265032; /* (pointer, ref tuple[]) */
extern TNimType NTI142; /* pointer */
extern TNimType NTI533875; /* ref tuple[] */
TNimType NTI265261; /* seq[tuple[key: string, value: VmCallback]] */
TNimType NTI265034; /* PCtx */
extern Gcheap49618 gch_49659;
N_NIMCALL(void, TMP2075)(void* p, NI op) {
	TY265242* a;
	NI LOC1;
	a = (TY265242*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP2078)(void* p, NI op) {
	TY265202* a;
	NI LOC1;
	a = (TY265202*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP2079)(void* p, NI op) {
	TY265222* a;
	NI LOC1;
	a = (TY265222*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].label, op);
	nimGCvisit((void*)a->data[LOC1].fixups, op);
	}
}
N_NIMCALL(void, TMP2084)(void* p, NI op) {
	PprocHEX3Aobjecttype265221* a;
	NI LOC1;
	a = (PprocHEX3Aobjecttype265221*)p;
	nimGCvisit((void*)(*a).blocks, op);
	nimGCvisit((void*)(*a).sym, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 256; LOC1++) {
	}
}
N_NIMCALL(void, TMP2093)(void* p, NI op) {
	TY265261* a;
	NI LOC1;
	a = (TY265261*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1.ClEnv, op);
	}
}
N_NIMCALL(void, TMP2094)(void* p, NI op) {
	Tctx265036* a;
	a = (Tctx265036*)p;
	nimGCvisit((void*)(*a).code, op);
	nimGCvisit((void*)(*a).debug, op);
	nimGCvisit((void*)(*a).globals, op);
	nimGCvisit((void*)(*a).constants, op);
	nimGCvisit((void*)(*a).types, op);
	nimGCvisit((void*)(*a).currentexceptiona, op);
	nimGCvisit((void*)(*a).currentexceptionb, op);
	nimGCvisit((void*)(*a).prc, op);
	nimGCvisit((void*)(*a).module, op);
	nimGCvisit((void*)(*a).callsite, op);
	nimGCvisit((void*)(*a).callbacks, op);
	nimGCvisit((void*)(*a).errorflag, op);
}

static N_INLINE(Cell47304*, usrtocell_51240)(void* usr) {
	Cell47304* result;
	result = 0;
	result = ((Cell47304*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Cell47304))))));
	return result;
}

static N_INLINE(void, rtladdzct_52801)(Cell47304* c) {
	addzct_51217((&gch_49659.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell47304* c;
	c = usrtocell_51240(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_52801(c);
	}
	LA3: ;
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
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
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

static N_INLINE(void, decref_53201)(Cell47304* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
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

static N_INLINE(void, nimGCunref)(void* p) {
	Cell47304* LOC1;
	LOC1 = 0;
	LOC1 = usrtocell_51240(p);
	decref_53201(LOC1);
}

N_NIMCALL(Tctx265036*, newctx_265267)(Tsym216822* module) {
	Tctx265036* result;
	Tctx265036* LOC1;
	PprocHEX3Aobjecttype265221* LOC2;
	NimStringDesc* LOC3;
	result = 0;
	LOC1 = 0;
	LOC1 = (Tctx265036*) newObj((&NTI265034), sizeof(Tctx265036));
	(*LOC1).Sup.Sup.m_type = (&NTI265036);
	if ((*LOC1).code) nimGCunrefNoCycle((*LOC1).code);
	(*LOC1).code = (TY265242*) newSeqRC1((&NTI265242), 0);
	if ((*LOC1).debug) nimGCunrefNoCycle((*LOC1).debug);
	(*LOC1).debug = (TY185093*) newSeqRC1((&NTI185093), 0);
	asgnRefNoCycle((void**) (&(*LOC1).globals), newnode_217401(((NU8) 126)));
	asgnRefNoCycle((void**) (&(*LOC1).constants), newnode_217401(((NU8) 115)));
	if ((*LOC1).types) nimGCunrefNoCycle((*LOC1).types);
	(*LOC1).types = (Ttypeseq216824*) newSeqRC1((&NTI216824), 0);
	LOC2 = 0;
	LOC2 = (PprocHEX3Aobjecttype265221*) newObj((&NTI265028), sizeof(PprocHEX3Aobjecttype265221));
	if ((*LOC2).blocks) nimGCunrefNoCycle((*LOC2).blocks);
	(*LOC2).blocks = (TY265222*) newSeqRC1((&NTI265222), 0);
	asgnRefNoCycle((void**) (&(*LOC1).prc), LOC2);
	asgnRefNoCycle((void**) (&(*LOC1).module), module);
	(*LOC1).loopiterations = ((NI) 1500000);
	(*LOC1).comesfromheuristic = unknownlineinfo_185090();
	if ((*LOC1).callbacks) nimGCunref((*LOC1).callbacks);
	(*LOC1).callbacks = (TY265261*) newSeqRC1((&NTI265261), 0);
	LOC3 = 0;
	LOC3 = (*LOC1).errorflag; (*LOC1).errorflag = copyStringRC1(((NimStringDesc*) &TMP2850));
	if (LOC3) nimGCunrefNoCycle(LOC3);
	result = LOC1;
	return result;
}

static N_INLINE(void, incref_53619)(Cell47304* c) {
	(*c).refcount = (NI)((NU32)((*c).refcount) + (NU32)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_51258(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_52020(c);
	}
	LA4: ;
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

N_NIMCALL(void, registercallback_265374)(Tctx265036* c, NimStringDesc* name, Vmcallback265032 callback) {
	TY265262 LOC1;
	NimStringDesc* LOC2;
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.Field0 = copyString(name);
	LOC1.Field1.ClEnv = callback.ClEnv;
	LOC1.Field1.ClPrc = callback.ClPrc;
	(*c).callbacks = (TY265261*) incrSeqV2(&((*c).callbacks)->Sup, sizeof(TY265262));
	LOC2 = 0;
	LOC2 = (*c).callbacks->data[(*c).callbacks->Sup.len].Field0; (*c).callbacks->data[(*c).callbacks->Sup.len].Field0 = copyStringRC1(LOC1.Field0);
	if (LOC2) nimGCunrefNoCycle(LOC2);
	asgnRef((void**) (&(*c).callbacks->data[(*c).callbacks->Sup.len].Field1.ClEnv), LOC1.Field1.ClEnv);
	(*c).callbacks->data[(*c).callbacks->Sup.len].Field1.ClPrc = LOC1.Field1.ClPrc;
	++(*c).callbacks->Sup.len;
}

N_NIMCALL(void, refresh_265353)(Tctx265036* c, Tsym216822* module) {
	PprocHEX3Aobjecttype265221* LOC1;
	asgnRefNoCycle((void**) (&(*c).module), module);
	LOC1 = 0;
	LOC1 = (PprocHEX3Aobjecttype265221*) newObj((&NTI265028), sizeof(PprocHEX3Aobjecttype265221));
	if ((*LOC1).blocks) nimGCunrefNoCycle((*LOC1).blocks);
	(*LOC1).blocks = (TY265222*) newSeqRC1((&NTI265222), 0);
	asgnRefNoCycle((void**) (&(*c).prc), LOC1);
	(*c).loopiterations = ((NI) 1500000);
}
NIM_EXTERNC N_NOINLINE(void, compiler_vmdefInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_vmdefDatInit000)(void) {
static TNimNode* TMP2074[18];
static TNimNode* TMP2076[4];
static TNimNode* TMP2077[2];
static TNimNode* TMP2080[2];
static TNimNode* TMP2081[9];
NI TMP2083;
static char* NIM_CONST TMP2082[9] = {
"slotEmpty", 
"slotFixedVar", 
"slotFixedLet", 
"slotTempUnknown", 
"slotTempInt", 
"slotTempFloat", 
"slotTempStr", 
"slotTempComplex", 
"slotTempPerm"};
static TNimNode* TMP2085[5];
NI TMP2087;
static char* NIM_CONST TMP2086[5] = {
"emRepl", 
"emConst", 
"emOptimize", 
"emStaticExpr", 
"emStaticStmt"};
static TNimNode* TMP2088[3];
NI TMP2090;
static char* NIM_CONST TMP2089[3] = {
"allowCast", 
"allowFFI", 
"allowInfiniteLoops"};
static TNimNode* TMP2091[2];
static TNimNode* TMP2092[2];
static TNimNode TMP947[57];
NTI265036.size = sizeof(Tctx265036);
NTI265036.kind = 17;
NTI265036.base = (&NTI263002);
TMP2074[0] = &TMP947[1];
NTI265242.size = sizeof(TY265242*);
NTI265242.kind = 24;
NTI265242.base = (&NTI120);
NTI265242.flags = 2;
NTI265242.marker = TMP2075;
TMP947[1].kind = 1;
TMP947[1].offset = offsetof(Tctx265036, code);
TMP947[1].typ = (&NTI265242);
TMP947[1].name = "code";
TMP2074[1] = &TMP947[2];
TMP947[2].kind = 1;
TMP947[2].offset = offsetof(Tctx265036, debug);
TMP947[2].typ = (&NTI185093);
TMP947[2].name = "debug";
TMP2074[2] = &TMP947[3];
TMP947[3].kind = 1;
TMP947[3].offset = offsetof(Tctx265036, globals);
TMP947[3].typ = (&NTI216782);
TMP947[3].name = "globals";
TMP2074[3] = &TMP947[4];
TMP947[4].kind = 1;
TMP947[4].offset = offsetof(Tctx265036, constants);
TMP947[4].typ = (&NTI216782);
TMP947[4].name = "constants";
TMP2074[4] = &TMP947[5];
TMP947[5].kind = 1;
TMP947[5].offset = offsetof(Tctx265036, types);
TMP947[5].typ = (&NTI216824);
TMP947[5].name = "types";
TMP2074[5] = &TMP947[6];
TMP947[6].kind = 1;
TMP947[6].offset = offsetof(Tctx265036, currentexceptiona);
TMP947[6].typ = (&NTI216782);
TMP947[6].name = "currentExceptionA";
TMP2074[6] = &TMP947[7];
TMP947[7].kind = 1;
TMP947[7].offset = offsetof(Tctx265036, currentexceptionb);
TMP947[7].typ = (&NTI216782);
TMP947[7].name = "currentExceptionB";
TMP2074[7] = &TMP947[8];
TMP947[8].kind = 1;
TMP947[8].offset = offsetof(Tctx265036, exceptioninstr);
TMP947[8].typ = (&NTI104);
TMP947[8].name = "exceptionInstr";
TMP2074[8] = &TMP947[9];
NTI265221.size = sizeof(PprocHEX3Aobjecttype265221);
NTI265221.kind = 18;
NTI265221.base = 0;
NTI265221.flags = 2;
TMP2076[0] = &TMP947[11];
NTI265018.size = sizeof(Tblock265018);
NTI265018.kind = 18;
NTI265018.base = 0;
NTI265018.flags = 2;
TMP2077[0] = &TMP947[13];
TMP947[13].kind = 1;
TMP947[13].offset = offsetof(Tblock265018, label);
TMP947[13].typ = (&NTI216788);
TMP947[13].name = "label";
TMP2077[1] = &TMP947[14];
NTI265202.size = sizeof(TY265202*);
NTI265202.kind = 24;
NTI265202.base = (&NTI104);
NTI265202.flags = 2;
NTI265202.marker = TMP2078;
TMP947[14].kind = 1;
TMP947[14].offset = offsetof(Tblock265018, fixups);
TMP947[14].typ = (&NTI265202);
TMP947[14].name = "fixups";
TMP947[12].len = 2; TMP947[12].kind = 2; TMP947[12].sons = &TMP2077[0];
NTI265018.node = &TMP947[12];
NTI265222.size = sizeof(TY265222*);
NTI265222.kind = 24;
NTI265222.base = (&NTI265018);
NTI265222.flags = 2;
NTI265222.marker = TMP2079;
TMP947[11].kind = 1;
TMP947[11].offset = offsetof(PprocHEX3Aobjecttype265221, blocks);
TMP947[11].typ = (&NTI265222);
TMP947[11].name = "blocks";
TMP2076[1] = &TMP947[15];
TMP947[15].kind = 1;
TMP947[15].offset = offsetof(PprocHEX3Aobjecttype265221, sym);
TMP947[15].typ = (&NTI216788);
TMP947[15].name = "sym";
TMP2076[2] = &TMP947[16];
NTI265227.size = sizeof(TY265227);
NTI265227.kind = 18;
NTI265227.base = 0;
NTI265227.flags = 3;
TMP2080[0] = &TMP947[18];
TMP947[18].kind = 1;
TMP947[18].offset = offsetof(TY265227, Field0);
TMP947[18].typ = (&NTI130);
TMP947[18].name = "Field0";
TMP2080[1] = &TMP947[19];
NTI265026.size = sizeof(NU8);
NTI265026.kind = 14;
NTI265026.base = 0;
NTI265026.flags = 3;
for (TMP2083 = 0; TMP2083 < 9; TMP2083++) {
TMP947[TMP2083+20].kind = 1;
TMP947[TMP2083+20].offset = TMP2083;
TMP947[TMP2083+20].name = TMP2082[TMP2083];
TMP2081[TMP2083] = &TMP947[TMP2083+20];
}
TMP947[29].len = 9; TMP947[29].kind = 2; TMP947[29].sons = &TMP2081[0];
NTI265026.node = &TMP947[29];
TMP947[19].kind = 1;
TMP947[19].offset = offsetof(TY265227, Field1);
TMP947[19].typ = (&NTI265026);
TMP947[19].name = "Field1";
TMP947[17].len = 2; TMP947[17].kind = 2; TMP947[17].sons = &TMP2080[0];
NTI265227.node = &TMP947[17];
NTI265230.size = sizeof(TY265230);
NTI265230.kind = 16;
NTI265230.base = (&NTI265227);
NTI265230.flags = 3;
TMP947[16].kind = 1;
TMP947[16].offset = offsetof(PprocHEX3Aobjecttype265221, slots);
TMP947[16].typ = (&NTI265230);
TMP947[16].name = "slots";
TMP2076[3] = &TMP947[30];
TMP947[30].kind = 1;
TMP947[30].offset = offsetof(PprocHEX3Aobjecttype265221, maxslots);
TMP947[30].typ = (&NTI104);
TMP947[30].name = "maxSlots";
TMP947[10].len = 4; TMP947[10].kind = 2; TMP947[10].sons = &TMP2076[0];
NTI265221.node = &TMP947[10];
NTI265028.size = sizeof(PprocHEX3Aobjecttype265221*);
NTI265028.kind = 22;
NTI265028.base = (&NTI265221);
NTI265028.flags = 2;
NTI265028.marker = TMP2084;
TMP947[9].kind = 1;
TMP947[9].offset = offsetof(Tctx265036, prc);
TMP947[9].typ = (&NTI265028);
TMP947[9].name = "prc";
TMP2074[9] = &TMP947[31];
TMP947[31].kind = 1;
TMP947[31].offset = offsetof(Tctx265036, module);
TMP947[31].typ = (&NTI216788);
TMP947[31].name = "module";
TMP2074[10] = &TMP947[32];
TMP947[32].kind = 1;
TMP947[32].offset = offsetof(Tctx265036, callsite);
TMP947[32].typ = (&NTI216782);
TMP947[32].name = "callsite";
TMP2074[11] = &TMP947[33];
NTI265020.size = sizeof(NU8);
NTI265020.kind = 14;
NTI265020.base = 0;
NTI265020.flags = 3;
for (TMP2087 = 0; TMP2087 < 5; TMP2087++) {
TMP947[TMP2087+34].kind = 1;
TMP947[TMP2087+34].offset = TMP2087;
TMP947[TMP2087+34].name = TMP2086[TMP2087];
TMP2085[TMP2087] = &TMP947[TMP2087+34];
}
TMP947[39].len = 5; TMP947[39].kind = 2; TMP947[39].sons = &TMP2085[0];
NTI265020.node = &TMP947[39];
TMP947[33].kind = 1;
TMP947[33].offset = offsetof(Tctx265036, mode);
TMP947[33].typ = (&NTI265020);
TMP947[33].name = "mode";
TMP2074[12] = &TMP947[40];
NTI265022.size = sizeof(NU8);
NTI265022.kind = 14;
NTI265022.base = 0;
NTI265022.flags = 3;
for (TMP2090 = 0; TMP2090 < 3; TMP2090++) {
TMP947[TMP2090+41].kind = 1;
TMP947[TMP2090+41].offset = TMP2090;
TMP947[TMP2090+41].name = TMP2089[TMP2090];
TMP2088[TMP2090] = &TMP947[TMP2090+41];
}
TMP947[44].len = 3; TMP947[44].kind = 2; TMP947[44].sons = &TMP2088[0];
NTI265022.node = &TMP947[44];
NTI265024.size = sizeof(NU8);
NTI265024.kind = 19;
NTI265024.base = (&NTI265022);
NTI265024.flags = 3;
TMP947[45].len = 0; TMP947[45].kind = 0;
NTI265024.node = &TMP947[45];
TMP947[40].kind = 1;
TMP947[40].offset = offsetof(Tctx265036, features);
TMP947[40].typ = (&NTI265024);
TMP947[40].name = "features";
TMP2074[13] = &TMP947[46];
TMP947[46].kind = 1;
TMP947[46].offset = offsetof(Tctx265036, traceactive);
TMP947[46].typ = (&NTI130);
TMP947[46].name = "traceActive";
TMP2074[14] = &TMP947[47];
TMP947[47].kind = 1;
TMP947[47].offset = offsetof(Tctx265036, loopiterations);
TMP947[47].typ = (&NTI104);
TMP947[47].name = "loopIterations";
TMP2074[15] = &TMP947[48];
TMP947[48].kind = 1;
TMP947[48].offset = offsetof(Tctx265036, comesfromheuristic);
TMP947[48].typ = (&NTI184337);
TMP947[48].name = "comesFromHeuristic";
TMP2074[16] = &TMP947[49];
NTI265262.size = sizeof(TY265262);
NTI265262.kind = 18;
NTI265262.base = 0;
TMP2091[0] = &TMP947[51];
TMP947[51].kind = 1;
TMP947[51].offset = offsetof(TY265262, Field0);
TMP947[51].typ = (&NTI138);
TMP947[51].name = "Field0";
TMP2091[1] = &TMP947[52];
NTI265032.size = sizeof(TY533873);
NTI265032.kind = 18;
NTI265032.base = 0;
NTI265032.flags = 2;
TMP2092[0] = &TMP947[54];
TMP947[54].kind = 1;
TMP947[54].offset = offsetof(TY533873, Field0);
TMP947[54].typ = (&NTI142);
TMP947[54].name = "Field0";
TMP2092[1] = &TMP947[55];
TMP947[55].kind = 1;
TMP947[55].offset = offsetof(TY533873, Field1);
TMP947[55].typ = (&NTI533875);
TMP947[55].name = "Field1";
TMP947[53].len = 2; TMP947[53].kind = 2; TMP947[53].sons = &TMP2092[0];
NTI265032.node = &TMP947[53];
TMP947[52].kind = 1;
TMP947[52].offset = offsetof(TY265262, Field1);
TMP947[52].typ = (&NTI265032);
TMP947[52].name = "Field1";
TMP947[50].len = 2; TMP947[50].kind = 2; TMP947[50].sons = &TMP2091[0];
NTI265262.node = &TMP947[50];
NTI265261.size = sizeof(TY265261*);
NTI265261.kind = 24;
NTI265261.base = (&NTI265262);
NTI265261.marker = TMP2093;
TMP947[49].kind = 1;
TMP947[49].offset = offsetof(Tctx265036, callbacks);
TMP947[49].typ = (&NTI265261);
TMP947[49].name = "callbacks";
TMP2074[17] = &TMP947[56];
TMP947[56].kind = 1;
TMP947[56].offset = offsetof(Tctx265036, errorflag);
TMP947[56].typ = (&NTI138);
TMP947[56].name = "errorFlag";
TMP947[0].len = 18; TMP947[0].kind = 2; TMP947[0].sons = &TMP2074[0];
NTI265036.node = &TMP947[0];
NTI265034.size = sizeof(Tctx265036*);
NTI265034.kind = 22;
NTI265034.base = (&NTI265036);
NTI265034.marker = TMP2094;
}

