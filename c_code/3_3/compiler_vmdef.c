/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tctx262036 Tctx262036;
typedef struct Tpasscontext260002 Tpasscontext260002;
typedef struct TNimObject TNimObject;
typedef struct TY262242 TY262242;
typedef struct TY182090 TY182090;
typedef struct Tnode213790 Tnode213790;
typedef struct Ttypeseq213824 Ttypeseq213824;
typedef struct PprocHEX3Aobjecttype262221 PprocHEX3Aobjecttype262221;
typedef struct Tsym213822 Tsym213822;
typedef struct Tlineinfo181337 Tlineinfo181337;
typedef struct TY262261 TY262261;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY262222 TY262222;
typedef struct TY262227 TY262227;
typedef struct Tblock262018 Tblock262018;
typedef struct TY262202 TY262202;
typedef struct TY262262 TY262262;
typedef struct Vmargs262030 Vmargs262030;
typedef struct TY530873 TY530873;
typedef struct TY530876 TY530876;
typedef struct Cell47704 Cell47704;
typedef struct Cellseq47720 Cellseq47720;
typedef struct Gcheap50018 Gcheap50018;
typedef struct Gcstack50016 Gcstack50016;
typedef struct Cellset47716 Cellset47716;
typedef struct Pagedesc47712 Pagedesc47712;
typedef struct Memregion29888 Memregion29888;
typedef struct Smallchunk29840 Smallchunk29840;
typedef struct Llchunk29882 Llchunk29882;
typedef struct Bigchunk29842 Bigchunk29842;
typedef struct Intset29814 Intset29814;
typedef struct Trunk29810 Trunk29810;
typedef struct Avlnode29886 Avlnode29886;
typedef struct Gcstat50014 Gcstat50014;
typedef struct Ttype213828 Ttype213828;
typedef struct Tident188012 Tident188012;
typedef struct Tnodeseq213784 Tnodeseq213784;
typedef struct Tidobj188006 Tidobj188006;
typedef struct Tscope213816 Tscope213816;
typedef struct TY213925 TY213925;
typedef struct Tstrtable213794 Tstrtable213794;
typedef struct Tsymseq213792 Tsymseq213792;
typedef struct Tloc213804 Tloc213804;
typedef struct Ropeobj168006 Ropeobj168006;
typedef struct Tlib213808 Tlib213808;
typedef struct Basechunk29838 Basechunk29838;
typedef struct Freecell29830 Freecell29830;
typedef struct Tinstantiation213812 Tinstantiation213812;
typedef struct Tlistentry135010 Tlistentry135010;
typedef struct TY213913 TY213913;
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
struct  Tpasscontext260002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tlineinfo181337  {
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
struct  Tctx262036  {
  Tpasscontext260002 Sup;
TY262242* code;
TY182090* debug;
Tnode213790* globals;
Tnode213790* constants;
Ttypeseq213824* types;
Tnode213790* currentexceptiona;
Tnode213790* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype262221* prc;
Tsym213822* module;
Tnode213790* callsite;
NU8 mode;
NU8 features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo181337 comesfromheuristic;
TY262261* callbacks;
NimStringDesc* errorflag;
};
struct TY262227 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY262227 TY262230[256];
struct  PprocHEX3Aobjecttype262221  {
TY262222* blocks;
Tsym213822* sym;
TY262230 slots;
NI maxslots;
};
struct  Tblock262018  {
Tsym213822* label;
TY262202* fixups;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs262030* args, void* ClEnv);
void* ClEnv;
} Vmcallback262032;
struct TY262262 {
NimStringDesc* Field0;
Vmcallback262032 Field1;
};
struct TY530873 {
void* Field0;
TY530876* Field1;
};
struct  Cell47704  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47720  {
NI len;
NI cap;
Cell47704** d;
};
struct  Cellset47716  {
NI counter;
NI max;
Pagedesc47712* head;
Pagedesc47712** data;
};
typedef Smallchunk29840* TY29903[512];
typedef Trunk29810* Trunkbuckets29812[256];
struct  Intset29814  {
Trunkbuckets29812 data;
};
struct  Memregion29888  {
NI minlargeobj;
NI maxlargeobj;
TY29903 freesmallchunks;
Llchunk29882* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29842* freechunkslist;
Intset29814 chunkstarts;
Avlnode29886* root;
Avlnode29886* deleted;
Avlnode29886* last;
Avlnode29886* freeavlnodes;
};
struct  Gcstat50014  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Gcheap50018  {
Gcstack50016* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47720 zct;
Cellseq47720 decstack;
Cellset47716 cycleroots;
Cellseq47720 tempstack;
NI recgclock;
Memregion29888 region;
Gcstat50014 stat;
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
struct  Tidobj188006  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable213794  {
NI counter;
Tsymseq213792* data;
};
struct  Tloc213804  {
NU8 k;
NU8 s;
NU16 flags;
Ttype213828* t;
Ropeobj168006* r;
Ropeobj168006* heaproot;
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
struct  Vmargs262030  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode213790* currentexception;
};
struct TY530876 {
char dummy;
};
struct  Gcstack50016  {
Gcstack50016* prev;
Gcstack50016* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY29819[8];
struct  Pagedesc47712  {
Pagedesc47712* next;
NI key;
TY29819 bits;
};
struct  Basechunk29838  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29840  {
  Basechunk29838 Sup;
Smallchunk29840* next;
Smallchunk29840* prev;
Freecell29830* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29882  {
NI size;
NI acc;
Llchunk29882* next;
};
struct  Bigchunk29842  {
  Basechunk29838 Sup;
Bigchunk29842* next;
Bigchunk29842* prev;
NI align;
NF data;
};
struct  Trunk29810  {
Trunk29810* next;
NI key;
TY29819 bits;
};
typedef Avlnode29886* TY29893[2];
struct  Avlnode29886  {
TY29893 link;
NI key;
NI upperbound;
NI level;
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
struct  Tident188012  {
  Tidobj188006 Sup;
NimStringDesc* s;
Tident188012* next;
NI h;
};
struct  Tscope213816  {
NI depthlevel;
Tstrtable213794 symbols;
Tnodeseq213784* usingsyms;
Tscope213816* parent;
};
struct  Ropeobj168006  {
  TNimObject Sup;
Ropeobj168006* left;
Ropeobj168006* right;
NI length;
NimStringDesc* data;
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
struct  Freecell29830  {
Freecell29830* next;
NI zerofield;
};
struct  Tinstantiation213812  {
Tsym213822* sym;
Ttypeseq213824* concretetypes;
TY213913* usedby;
NI compilesid;
};
struct TY262242 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY262202 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY262222 {
  TGenericSeq Sup;
  Tblock262018 data[SEQ_DECL_SIZE];
};
struct TY262261 {
  TGenericSeq Sup;
  TY262262 data[SEQ_DECL_SIZE];
};
struct TY182090 {
  TGenericSeq Sup;
  Tlineinfo181337 data[SEQ_DECL_SIZE];
};
struct Ttypeseq213824 {
  TGenericSeq Sup;
  Ttype213828* data[SEQ_DECL_SIZE];
};
struct Tnodeseq213784 {
  TGenericSeq Sup;
  Tnode213790* data[SEQ_DECL_SIZE];
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
N_NIMCALL(void, TMP2066)(void* p, NI op);
N_NIMCALL(void, TMP2069)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP2070)(void* p, NI op);
N_NIMCALL(void, TMP2075)(void* p, NI op);
N_NIMCALL(void, TMP2084)(void* p, NI op);
N_NIMCALL(void, TMP2085)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell47704*, usrtocell_51640)(void* usr);
static N_INLINE(void, rtladdzct_53201)(Cell47704* c);
N_NOINLINE(void, addzct_51617)(Cellseq47720* s, Cell47704* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(Tnode213790*, newnode_214401)(NU8 kind);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(Tlineinfo181337, unknownlineinfo_182087)(void);
static N_INLINE(void, nimGCunref)(void* p);
static N_INLINE(void, decref_53601)(Cell47704* c);
static N_INLINE(NIM_BOOL, canbecycleroot_51658)(Cell47704* c);
static N_INLINE(void, rtladdcycleroot_52420)(Cell47704* c);
N_NOINLINE(void, incl_48447)(Cellset47716* s, Cell47704* cell);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_54019)(Cell47704* c);
STRING_LITERAL(TMP2841, "", 0);
extern TNimType NTI260002; /* TPassContext */
TNimType NTI262036; /* TCtx */
extern TNimType NTI120; /* uint32 */
TNimType NTI262242; /* seq[TInstr] */
extern TNimType NTI182090; /* seq[TLineInfo] */
extern TNimType NTI213782; /* PNode */
extern TNimType NTI213824; /* TTypeSeq */
extern TNimType NTI104; /* int */
TNimType NTI262221; /* PProc:ObjectType */
TNimType NTI262018; /* TBlock */
extern TNimType NTI213788; /* PSym */
TNimType NTI262202; /* seq[TPosition] */
TNimType NTI262222; /* seq[TBlock] */
TNimType NTI262227; /* tuple[inUse: bool, kind: TSlotKind] */
extern TNimType NTI130; /* bool */
TNimType NTI262026; /* TSlotKind */
TNimType NTI262230; /* array[0..255, tuple[inUse: bool, kind: TSlotKind]] */
TNimType NTI262028; /* PProc */
TNimType NTI262020; /* TEvalMode */
TNimType NTI262022; /* TSandboxFlag */
TNimType NTI262024; /* TSandboxFlags */
extern TNimType NTI181337; /* TLineInfo */
TNimType NTI262262; /* tuple[key: string, value: VmCallback] */
extern TNimType NTI138; /* string */
TNimType NTI262032; /* (pointer, ref tuple[]) */
extern TNimType NTI142; /* pointer */
extern TNimType NTI530875; /* ref tuple[] */
TNimType NTI262261; /* seq[tuple[key: string, value: VmCallback]] */
TNimType NTI262034; /* PCtx */
extern Gcheap50018 gch_50059;
N_NIMCALL(void, TMP2066)(void* p, NI op) {
	TY262242* a;
	NI LOC1;
	a = (TY262242*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP2069)(void* p, NI op) {
	TY262202* a;
	NI LOC1;
	a = (TY262202*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP2070)(void* p, NI op) {
	TY262222* a;
	NI LOC1;
	a = (TY262222*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].label, op);
	nimGCvisit((void*)a->data[LOC1].fixups, op);
	}
}
N_NIMCALL(void, TMP2075)(void* p, NI op) {
	PprocHEX3Aobjecttype262221* a;
	NI LOC1;
	a = (PprocHEX3Aobjecttype262221*)p;
	nimGCvisit((void*)(*a).blocks, op);
	nimGCvisit((void*)(*a).sym, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 256; LOC1++) {
	}
}
N_NIMCALL(void, TMP2084)(void* p, NI op) {
	TY262261* a;
	NI LOC1;
	a = (TY262261*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1.ClEnv, op);
	}
}
N_NIMCALL(void, TMP2085)(void* p, NI op) {
	Tctx262036* a;
	a = (Tctx262036*)p;
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

static N_INLINE(Cell47704*, usrtocell_51640)(void* usr) {
	Cell47704* result;
	result = 0;
	result = ((Cell47704*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell47704))))));
	return result;
}

static N_INLINE(void, rtladdzct_53201)(Cell47704* c) {
	addzct_51617((&gch_50059.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell47704* c;
	c = usrtocell_51640(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_53201(c);
	}
	LA3: ;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell47704* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_51640(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47704* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_51640((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_53201(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(NIM_BOOL, canbecycleroot_51658)(Cell47704* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).typ).flags &(1U<<((NU)(((NU8) 1))&7U)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_52420)(Cell47704* c) {
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		incl_48447((&gch_50059.cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, decref_53601)(Cell47704* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_53201(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_51658(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_52420(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, nimGCunref)(void* p) {
	Cell47704* LOC1;
	LOC1 = 0;
	LOC1 = usrtocell_51640(p);
	decref_53601(LOC1);
}

N_NIMCALL(Tctx262036*, newctx_262267)(Tsym213822* module) {
	Tctx262036* result;
	Tctx262036* LOC1;
	PprocHEX3Aobjecttype262221* LOC2;
	NimStringDesc* LOC3;
	result = 0;
	LOC1 = 0;
	LOC1 = (Tctx262036*) newObj((&NTI262034), sizeof(Tctx262036));
	(*LOC1).Sup.Sup.m_type = (&NTI262036);
	if ((*LOC1).code) nimGCunrefNoCycle((*LOC1).code);
	(*LOC1).code = (TY262242*) newSeqRC1((&NTI262242), 0);
	if ((*LOC1).debug) nimGCunrefNoCycle((*LOC1).debug);
	(*LOC1).debug = (TY182090*) newSeqRC1((&NTI182090), 0);
	asgnRefNoCycle((void**) (&(*LOC1).globals), newnode_214401(((NU8) 126)));
	asgnRefNoCycle((void**) (&(*LOC1).constants), newnode_214401(((NU8) 115)));
	if ((*LOC1).types) nimGCunrefNoCycle((*LOC1).types);
	(*LOC1).types = (Ttypeseq213824*) newSeqRC1((&NTI213824), 0);
	LOC2 = 0;
	LOC2 = (PprocHEX3Aobjecttype262221*) newObj((&NTI262028), sizeof(PprocHEX3Aobjecttype262221));
	if ((*LOC2).blocks) nimGCunrefNoCycle((*LOC2).blocks);
	(*LOC2).blocks = (TY262222*) newSeqRC1((&NTI262222), 0);
	asgnRefNoCycle((void**) (&(*LOC1).prc), LOC2);
	asgnRefNoCycle((void**) (&(*LOC1).module), module);
	(*LOC1).loopiterations = ((NI) 1500000);
	(*LOC1).comesfromheuristic = unknownlineinfo_182087();
	if ((*LOC1).callbacks) nimGCunref((*LOC1).callbacks);
	(*LOC1).callbacks = (TY262261*) newSeqRC1((&NTI262261), 0);
	LOC3 = 0;
	LOC3 = (*LOC1).errorflag; (*LOC1).errorflag = copyStringRC1(((NimStringDesc*) &TMP2841));
	if (LOC3) nimGCunrefNoCycle(LOC3);
	result = LOC1;
	return result;
}

static N_INLINE(void, incref_54019)(Cell47704* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_51658(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_52420(c);
	}
	LA4: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Cell47704* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_51640(src);
		incref_54019(LOC5);
	}
	LA3: ;
	{
		Cell47704* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_51640((*dest));
		decref_53601(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(void, registercallback_262374)(Tctx262036* c, NimStringDesc* name, Vmcallback262032 callback) {
	TY262262 LOC1;
	NimStringDesc* LOC2;
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.Field0 = copyString(name);
	LOC1.Field1.ClEnv = callback.ClEnv;
	LOC1.Field1.ClPrc = callback.ClPrc;
	(*c).callbacks = (TY262261*) incrSeqV2(&((*c).callbacks)->Sup, sizeof(TY262262));
	LOC2 = 0;
	LOC2 = (*c).callbacks->data[(*c).callbacks->Sup.len].Field0; (*c).callbacks->data[(*c).callbacks->Sup.len].Field0 = copyStringRC1(LOC1.Field0);
	if (LOC2) nimGCunrefNoCycle(LOC2);
	asgnRef((void**) (&(*c).callbacks->data[(*c).callbacks->Sup.len].Field1.ClEnv), LOC1.Field1.ClEnv);
	(*c).callbacks->data[(*c).callbacks->Sup.len].Field1.ClPrc = LOC1.Field1.ClPrc;
	++(*c).callbacks->Sup.len;
}

N_NIMCALL(void, refresh_262353)(Tctx262036* c, Tsym213822* module) {
	PprocHEX3Aobjecttype262221* LOC1;
	asgnRefNoCycle((void**) (&(*c).module), module);
	LOC1 = 0;
	LOC1 = (PprocHEX3Aobjecttype262221*) newObj((&NTI262028), sizeof(PprocHEX3Aobjecttype262221));
	if ((*LOC1).blocks) nimGCunrefNoCycle((*LOC1).blocks);
	(*LOC1).blocks = (TY262222*) newSeqRC1((&NTI262222), 0);
	asgnRefNoCycle((void**) (&(*c).prc), LOC1);
	(*c).loopiterations = ((NI) 1500000);
}
NIM_EXTERNC N_NOINLINE(void, compiler_vmdefInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_vmdefDatInit000)(void) {
static TNimNode* TMP2065[18];
static TNimNode* TMP2067[4];
static TNimNode* TMP2068[2];
static TNimNode* TMP2071[2];
static TNimNode* TMP2072[9];
NI TMP2074;
static char* NIM_CONST TMP2073[9] = {
"slotEmpty", 
"slotFixedVar", 
"slotFixedLet", 
"slotTempUnknown", 
"slotTempInt", 
"slotTempFloat", 
"slotTempStr", 
"slotTempComplex", 
"slotTempPerm"};
static TNimNode* TMP2076[5];
NI TMP2078;
static char* NIM_CONST TMP2077[5] = {
"emRepl", 
"emConst", 
"emOptimize", 
"emStaticExpr", 
"emStaticStmt"};
static TNimNode* TMP2079[3];
NI TMP2081;
static char* NIM_CONST TMP2080[3] = {
"allowCast", 
"allowFFI", 
"allowInfiniteLoops"};
static TNimNode* TMP2082[2];
static TNimNode* TMP2083[2];
static TNimNode TMP937[57];
NTI262036.size = sizeof(Tctx262036);
NTI262036.kind = 17;
NTI262036.base = (&NTI260002);
TMP2065[0] = &TMP937[1];
NTI262242.size = sizeof(TY262242*);
NTI262242.kind = 24;
NTI262242.base = (&NTI120);
NTI262242.flags = 2;
NTI262242.marker = TMP2066;
TMP937[1].kind = 1;
TMP937[1].offset = offsetof(Tctx262036, code);
TMP937[1].typ = (&NTI262242);
TMP937[1].name = "code";
TMP2065[1] = &TMP937[2];
TMP937[2].kind = 1;
TMP937[2].offset = offsetof(Tctx262036, debug);
TMP937[2].typ = (&NTI182090);
TMP937[2].name = "debug";
TMP2065[2] = &TMP937[3];
TMP937[3].kind = 1;
TMP937[3].offset = offsetof(Tctx262036, globals);
TMP937[3].typ = (&NTI213782);
TMP937[3].name = "globals";
TMP2065[3] = &TMP937[4];
TMP937[4].kind = 1;
TMP937[4].offset = offsetof(Tctx262036, constants);
TMP937[4].typ = (&NTI213782);
TMP937[4].name = "constants";
TMP2065[4] = &TMP937[5];
TMP937[5].kind = 1;
TMP937[5].offset = offsetof(Tctx262036, types);
TMP937[5].typ = (&NTI213824);
TMP937[5].name = "types";
TMP2065[5] = &TMP937[6];
TMP937[6].kind = 1;
TMP937[6].offset = offsetof(Tctx262036, currentexceptiona);
TMP937[6].typ = (&NTI213782);
TMP937[6].name = "currentExceptionA";
TMP2065[6] = &TMP937[7];
TMP937[7].kind = 1;
TMP937[7].offset = offsetof(Tctx262036, currentexceptionb);
TMP937[7].typ = (&NTI213782);
TMP937[7].name = "currentExceptionB";
TMP2065[7] = &TMP937[8];
TMP937[8].kind = 1;
TMP937[8].offset = offsetof(Tctx262036, exceptioninstr);
TMP937[8].typ = (&NTI104);
TMP937[8].name = "exceptionInstr";
TMP2065[8] = &TMP937[9];
NTI262221.size = sizeof(PprocHEX3Aobjecttype262221);
NTI262221.kind = 18;
NTI262221.base = 0;
NTI262221.flags = 2;
TMP2067[0] = &TMP937[11];
NTI262018.size = sizeof(Tblock262018);
NTI262018.kind = 18;
NTI262018.base = 0;
NTI262018.flags = 2;
TMP2068[0] = &TMP937[13];
TMP937[13].kind = 1;
TMP937[13].offset = offsetof(Tblock262018, label);
TMP937[13].typ = (&NTI213788);
TMP937[13].name = "label";
TMP2068[1] = &TMP937[14];
NTI262202.size = sizeof(TY262202*);
NTI262202.kind = 24;
NTI262202.base = (&NTI104);
NTI262202.flags = 2;
NTI262202.marker = TMP2069;
TMP937[14].kind = 1;
TMP937[14].offset = offsetof(Tblock262018, fixups);
TMP937[14].typ = (&NTI262202);
TMP937[14].name = "fixups";
TMP937[12].len = 2; TMP937[12].kind = 2; TMP937[12].sons = &TMP2068[0];
NTI262018.node = &TMP937[12];
NTI262222.size = sizeof(TY262222*);
NTI262222.kind = 24;
NTI262222.base = (&NTI262018);
NTI262222.flags = 2;
NTI262222.marker = TMP2070;
TMP937[11].kind = 1;
TMP937[11].offset = offsetof(PprocHEX3Aobjecttype262221, blocks);
TMP937[11].typ = (&NTI262222);
TMP937[11].name = "blocks";
TMP2067[1] = &TMP937[15];
TMP937[15].kind = 1;
TMP937[15].offset = offsetof(PprocHEX3Aobjecttype262221, sym);
TMP937[15].typ = (&NTI213788);
TMP937[15].name = "sym";
TMP2067[2] = &TMP937[16];
NTI262227.size = sizeof(TY262227);
NTI262227.kind = 18;
NTI262227.base = 0;
NTI262227.flags = 3;
TMP2071[0] = &TMP937[18];
TMP937[18].kind = 1;
TMP937[18].offset = offsetof(TY262227, Field0);
TMP937[18].typ = (&NTI130);
TMP937[18].name = "Field0";
TMP2071[1] = &TMP937[19];
NTI262026.size = sizeof(NU8);
NTI262026.kind = 14;
NTI262026.base = 0;
NTI262026.flags = 3;
for (TMP2074 = 0; TMP2074 < 9; TMP2074++) {
TMP937[TMP2074+20].kind = 1;
TMP937[TMP2074+20].offset = TMP2074;
TMP937[TMP2074+20].name = TMP2073[TMP2074];
TMP2072[TMP2074] = &TMP937[TMP2074+20];
}
TMP937[29].len = 9; TMP937[29].kind = 2; TMP937[29].sons = &TMP2072[0];
NTI262026.node = &TMP937[29];
TMP937[19].kind = 1;
TMP937[19].offset = offsetof(TY262227, Field1);
TMP937[19].typ = (&NTI262026);
TMP937[19].name = "Field1";
TMP937[17].len = 2; TMP937[17].kind = 2; TMP937[17].sons = &TMP2071[0];
NTI262227.node = &TMP937[17];
NTI262230.size = sizeof(TY262230);
NTI262230.kind = 16;
NTI262230.base = (&NTI262227);
NTI262230.flags = 3;
TMP937[16].kind = 1;
TMP937[16].offset = offsetof(PprocHEX3Aobjecttype262221, slots);
TMP937[16].typ = (&NTI262230);
TMP937[16].name = "slots";
TMP2067[3] = &TMP937[30];
TMP937[30].kind = 1;
TMP937[30].offset = offsetof(PprocHEX3Aobjecttype262221, maxslots);
TMP937[30].typ = (&NTI104);
TMP937[30].name = "maxSlots";
TMP937[10].len = 4; TMP937[10].kind = 2; TMP937[10].sons = &TMP2067[0];
NTI262221.node = &TMP937[10];
NTI262028.size = sizeof(PprocHEX3Aobjecttype262221*);
NTI262028.kind = 22;
NTI262028.base = (&NTI262221);
NTI262028.flags = 2;
NTI262028.marker = TMP2075;
TMP937[9].kind = 1;
TMP937[9].offset = offsetof(Tctx262036, prc);
TMP937[9].typ = (&NTI262028);
TMP937[9].name = "prc";
TMP2065[9] = &TMP937[31];
TMP937[31].kind = 1;
TMP937[31].offset = offsetof(Tctx262036, module);
TMP937[31].typ = (&NTI213788);
TMP937[31].name = "module";
TMP2065[10] = &TMP937[32];
TMP937[32].kind = 1;
TMP937[32].offset = offsetof(Tctx262036, callsite);
TMP937[32].typ = (&NTI213782);
TMP937[32].name = "callsite";
TMP2065[11] = &TMP937[33];
NTI262020.size = sizeof(NU8);
NTI262020.kind = 14;
NTI262020.base = 0;
NTI262020.flags = 3;
for (TMP2078 = 0; TMP2078 < 5; TMP2078++) {
TMP937[TMP2078+34].kind = 1;
TMP937[TMP2078+34].offset = TMP2078;
TMP937[TMP2078+34].name = TMP2077[TMP2078];
TMP2076[TMP2078] = &TMP937[TMP2078+34];
}
TMP937[39].len = 5; TMP937[39].kind = 2; TMP937[39].sons = &TMP2076[0];
NTI262020.node = &TMP937[39];
TMP937[33].kind = 1;
TMP937[33].offset = offsetof(Tctx262036, mode);
TMP937[33].typ = (&NTI262020);
TMP937[33].name = "mode";
TMP2065[12] = &TMP937[40];
NTI262022.size = sizeof(NU8);
NTI262022.kind = 14;
NTI262022.base = 0;
NTI262022.flags = 3;
for (TMP2081 = 0; TMP2081 < 3; TMP2081++) {
TMP937[TMP2081+41].kind = 1;
TMP937[TMP2081+41].offset = TMP2081;
TMP937[TMP2081+41].name = TMP2080[TMP2081];
TMP2079[TMP2081] = &TMP937[TMP2081+41];
}
TMP937[44].len = 3; TMP937[44].kind = 2; TMP937[44].sons = &TMP2079[0];
NTI262022.node = &TMP937[44];
NTI262024.size = sizeof(NU8);
NTI262024.kind = 19;
NTI262024.base = (&NTI262022);
NTI262024.flags = 3;
TMP937[45].len = 0; TMP937[45].kind = 0;
NTI262024.node = &TMP937[45];
TMP937[40].kind = 1;
TMP937[40].offset = offsetof(Tctx262036, features);
TMP937[40].typ = (&NTI262024);
TMP937[40].name = "features";
TMP2065[13] = &TMP937[46];
TMP937[46].kind = 1;
TMP937[46].offset = offsetof(Tctx262036, traceactive);
TMP937[46].typ = (&NTI130);
TMP937[46].name = "traceActive";
TMP2065[14] = &TMP937[47];
TMP937[47].kind = 1;
TMP937[47].offset = offsetof(Tctx262036, loopiterations);
TMP937[47].typ = (&NTI104);
TMP937[47].name = "loopIterations";
TMP2065[15] = &TMP937[48];
TMP937[48].kind = 1;
TMP937[48].offset = offsetof(Tctx262036, comesfromheuristic);
TMP937[48].typ = (&NTI181337);
TMP937[48].name = "comesFromHeuristic";
TMP2065[16] = &TMP937[49];
NTI262262.size = sizeof(TY262262);
NTI262262.kind = 18;
NTI262262.base = 0;
TMP2082[0] = &TMP937[51];
TMP937[51].kind = 1;
TMP937[51].offset = offsetof(TY262262, Field0);
TMP937[51].typ = (&NTI138);
TMP937[51].name = "Field0";
TMP2082[1] = &TMP937[52];
NTI262032.size = sizeof(TY530873);
NTI262032.kind = 18;
NTI262032.base = 0;
NTI262032.flags = 2;
TMP2083[0] = &TMP937[54];
TMP937[54].kind = 1;
TMP937[54].offset = offsetof(TY530873, Field0);
TMP937[54].typ = (&NTI142);
TMP937[54].name = "Field0";
TMP2083[1] = &TMP937[55];
TMP937[55].kind = 1;
TMP937[55].offset = offsetof(TY530873, Field1);
TMP937[55].typ = (&NTI530875);
TMP937[55].name = "Field1";
TMP937[53].len = 2; TMP937[53].kind = 2; TMP937[53].sons = &TMP2083[0];
NTI262032.node = &TMP937[53];
TMP937[52].kind = 1;
TMP937[52].offset = offsetof(TY262262, Field1);
TMP937[52].typ = (&NTI262032);
TMP937[52].name = "Field1";
TMP937[50].len = 2; TMP937[50].kind = 2; TMP937[50].sons = &TMP2082[0];
NTI262262.node = &TMP937[50];
NTI262261.size = sizeof(TY262261*);
NTI262261.kind = 24;
NTI262261.base = (&NTI262262);
NTI262261.marker = TMP2084;
TMP937[49].kind = 1;
TMP937[49].offset = offsetof(Tctx262036, callbacks);
TMP937[49].typ = (&NTI262261);
TMP937[49].name = "callbacks";
TMP2065[17] = &TMP937[56];
TMP937[56].kind = 1;
TMP937[56].offset = offsetof(Tctx262036, errorflag);
TMP937[56].typ = (&NTI138);
TMP937[56].name = "errorFlag";
TMP937[0].len = 18; TMP937[0].kind = 2; TMP937[0].sons = &TMP2065[0];
NTI262036.node = &TMP937[0];
NTI262034.size = sizeof(Tctx262036*);
NTI262034.kind = 22;
NTI262034.base = (&NTI262036);
NTI262034.marker = TMP2085;
}

