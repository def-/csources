/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
typedef struct Tpasscontext263002 Tpasscontext263002;
typedef struct Tsym216822 Tsym216822;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tidobj191006 Tidobj191006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct Tnodeseq216784 Tnodeseq216784;
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
typedef struct Tinstantiation216812 Tinstantiation216812;
typedef struct Tlistentry138010 Tlistentry138010;
typedef struct Basechunk29438 Basechunk29438;
typedef struct Freecell29430 Freecell29430;
typedef struct TY216913 TY216913;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  Tpasscontext263002  {
  TNimObject Sup;
NIM_BOOL fromcache;
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
struct  Tinstantiation216812  {
Tsym216822* sym;
Ttypeseq216824* concretetypes;
TY216913* usedby;
NI compilesid;
};
struct  Freecell29430  {
Freecell29430* next;
NI zerofield;
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
struct Tnodeseq216784 {
  TGenericSeq Sup;
  Tnode216790* data[SEQ_DECL_SIZE];
};
struct TY216913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, rawmessage_187612)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, internalerror_189113)(NimStringDesc* errmsg);
N_NIMCALL(void, message_189095)(Tlineinfo184337 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NI, sonslen_219351)(Tnode216790* n);
N_NIMCALL(Tnode216790*, cleanup_515036)(Tpasscontext263002* c, Tnode216790* n);
N_NIMCALL(Tsym216822*, getmodule_223144)(Tsym216822* s);
N_NIMCALL(NIM_BOOL, astneeded_263069)(Tsym216822* s);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell47304*, usrtocell_51240)(void* usr);
static N_INLINE(void, rtladdzct_52801)(Cell47304* c);
N_NOINLINE(void, addzct_51217)(Cellseq47320* s, Cell47304* c);
STRING_LITERAL(TMP3754, "logpass: context is not nil", 27);
extern NI gverbosity_163130;
extern NU64 gnotes_185077;
extern NI gbackendid_215004;
extern NU32 gglobaloptions_163121;
extern Tnode216790* emptynode_217801;
extern Gcheap49618 gch_49659;

N_NIMCALL(Tpasscontext263002*, verboseopen_515003)(Tsym216822* s) {
	Tpasscontext263002* result;
	result = 0;
	result = NIM_NIL;
	rawmessage_187612(((NU16) 276), (*(*s).name).s);
	return result;
}

N_NIMCALL(Tnode216790*, verboseprocess_515008)(Tpasscontext263002* context, Tnode216790* n) {
	Tnode216790* result;
	result = 0;
	result = n;
	{
		if (!!((context == NIM_NIL))) goto LA3;
		internalerror_189113(((NimStringDesc*) &TMP3754));
	}
	LA3: ;
	{
		NimStringDesc* LOC9;
		if (!(gverbosity_163130 == ((NI) 3))) goto LA7;
		gnotes_185077 |= ((NU64)1)<<(((((NU16) 276)- 237))%(sizeof(NU64)*8));
		LOC9 = 0;
		LOC9 = nimIntToStr(gbackendid_215004);
		message_189095((*n).info, ((NU16) 276), LOC9);
	}
	LA7: ;
	return result;
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

N_NIMCALL(Tnode216790*, cleanup_515036)(Tpasscontext263002* c, Tnode216790* n) {
	Tnode216790* result;
{	result = 0;
	result = n;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((gglobaloptions_163121 &(1U<<((NU)(((NU8) 2))&31U)))!=0);
		if (LOC3) goto LA4;
		LOC3 = (n == NIM_NIL);
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	switch ((*n).kind) {
	case ((NU8) 115):
	{
		{
			NI i_515074;
			NI HEX3Atmp_515103;
			NI LOC9;
			NI res_515106;
			i_515074 = 0;
			HEX3Atmp_515103 = 0;
			LOC9 = 0;
			LOC9 = sonslen_219351(n);
			HEX3Atmp_515103 = (NI)(LOC9 - ((NI) 1));
			res_515106 = ((NI) 0);
			{
				while (1) {
					Tnode216790* LOC12;
					if (!(res_515106 <= HEX3Atmp_515103)) goto LA11;
					i_515074 = res_515106;
					LOC12 = 0;
					LOC12 = cleanup_515036(c, (*n).kindU.S6.sons->data[i_515074]);
					res_515106 += ((NI) 1);
				} LA11: ;
			}
		}
	}
	break;
	case ((NU8) 79):
	case ((NU8) 80):
	{
		{
			Tsym216822* s;
			if (!((*(*n).kindU.S6.sons->data[((NI) 0)]).kind == ((NU8) 3))) goto LA16;
			s = (*(*n).kindU.S6.sons->data[((NI) 0)]).kindU.S4.sym;
			{
				NIM_BOOL LOC20;
				Tsym216822* LOC21;
				NIM_BOOL LOC23;
				LOC20 = 0;
				LOC21 = 0;
				LOC21 = getmodule_223144(s);
				LOC20 = !((((*LOC21).flags &(1U<<((NU)(((NU8) 25))&31U)))!=0));
				if (!(LOC20)) goto LA22;
				LOC23 = 0;
				LOC23 = astneeded_263069(s);
				LOC20 = !(LOC23);
				LA22: ;
				if (!LOC20) goto LA24;
				asgnRefNoCycle((void**) (&(*(*s).ast).kindU.S6.sons->data[((NI) 6)]), emptynode_217801);
			}
			LA24: ;
		}
		LA16: ;
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
NIM_EXTERNC N_NOINLINE(void, compiler_passauxInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_passauxDatInit000)(void) {
}

