/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
typedef struct Tnode216790 Tnode216790;
typedef struct Ttype216828 Ttype216828;
typedef struct Tlineinfo184337 Tlineinfo184337;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym216822 Tsym216822;
typedef struct Tident191012 Tident191012;
typedef struct Tnodeseq216784 Tnodeseq216784;
typedef struct Tbitset261006 Tbitset261006;
typedef struct Tidobj191006 Tidobj191006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq216824 Ttypeseq216824;
typedef struct Tloc216804 Tloc216804;
typedef struct Ropeobj172006 Ropeobj172006;
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
typedef struct Tscope216816 Tscope216816;
typedef struct TY216925 TY216925;
typedef struct Tstrtable216794 Tstrtable216794;
typedef struct Tsymseq216792 Tsymseq216792;
typedef struct Tlib216808 Tlib216808;
typedef struct Basechunk29437 Basechunk29437;
typedef struct Freecell29429 Freecell29429;
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
struct  Ropeobj172006  {
  TNimObject Sup;
Ropeobj172006* left;
Ropeobj172006* right;
NI length;
NimStringDesc* data;
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
struct Tbitset261006 {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
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
N_NIMCALL(void, internalerror_189100)(Tlineinfo184337 info, NimStringDesc* errmsg);
N_NIMCALL(NI, sonslen_219351)(Tnode216790* n);
N_NIMCALL(NIM_BOOL, levalue_223233)(Tnode216790* a, Tnode216790* b);
N_NIMCALL(NIM_BOOL, samevalue_223189)(Tnode216790* a, Tnode216790* b);
N_NIMCALL(void, tobitset_262001)(Tnode216790* s, Tbitset261006** b);
N_NIMCALL(NI64, firstord_242001)(Ttype216828* t);
N_NIMCALL(void, bitsetinit_261009)(Tbitset261006** b, NI length);
N_NIMCALL(NI64, getsize_242124)(Ttype216828* typ);
N_NIMCALL(NI64, getordvalue_242118)(Tnode216790* n);
N_NIMCALL(void, bitsetincl_261034)(Tbitset261006** x, NI64 elem);
N_NIMCALL(void, bitsetdiff_261019)(Tbitset261006** x, Tbitset261006* y);
N_NIMCALL(Tnode216790*, totreeset_262251)(Tbitset261006* s, Ttype216828* settype, Tlineinfo184337 info);
N_NIMCALL(Tnode216790*, newnodei_218248)(NU8 kind, Tlineinfo184337 info);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell47304*, usrtocell_51240)(void* usr);
static N_INLINE(void, rtladdzct_52801)(Cell47304* c);
N_NOINLINE(void, addzct_51217)(Cellseq47320* s, Cell47304* c);
N_NIMCALL(NIM_BOOL, bitsetin_261044)(Tbitset261006* x, NI64 e);
N_NIMCALL(Tnode216790*, newinttypenode_217666)(NU8 kind, NI64 intval, Ttype216828* typ);
N_NIMCALL(void, addson_218807)(Tnode216790* father, Tnode216790* son);
N_NIMCALL(NIM_BOOL, bitsetcontains_261052)(Tbitset261006* x, Tbitset261006* y);
N_NIMCALL(NIM_BOOL, bitsetequals_261048)(Tbitset261006* x, Tbitset261006* y);
N_NIMCALL(void, bitsetintersect_261029)(Tbitset261006** x, Tbitset261006* y);
N_NIMCALL(void, bitsetunion_261014)(Tbitset261006** x, Tbitset261006* y);
N_NIMCALL(void, bitsetsymdiff_261024)(Tbitset261006** x, Tbitset261006* y);
STRING_LITERAL(TMP2971, "inSet", 5);
extern Gcheap49618 gch_49659;

N_NIMCALL(NIM_BOOL, inset_262010)(Tnode216790* s, Tnode216790* elem) {
	NIM_BOOL result;
{	result = 0;
	{
		if (!!(((*s).kind == ((NU8) 39)))) goto LA3;
		internalerror_189100((*s).info, ((NimStringDesc*) &TMP2971));
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI i_262078;
		NI HEX3Atmp_262095;
		NI LOC6;
		NI res_262098;
		i_262078 = 0;
		HEX3Atmp_262095 = 0;
		LOC6 = 0;
		LOC6 = sonslen_219351(s);
		HEX3Atmp_262095 = (NI)(LOC6 - ((NI) 1));
		res_262098 = ((NI) 0);
		{
			while (1) {
				if (!(res_262098 <= HEX3Atmp_262095)) goto LA8;
				i_262078 = res_262098;
				{
					if (!((*(*s).kindU.S6.sons->data[i_262078]).kind == ((NU8) 44))) goto LA11;
					{
						NIM_BOOL LOC15;
						LOC15 = 0;
						LOC15 = levalue_223233((*(*s).kindU.S6.sons->data[i_262078]).kindU.S6.sons->data[((NI) 0)], elem);
						if (!(LOC15)) goto LA16;
						LOC15 = levalue_223233(elem, (*(*s).kindU.S6.sons->data[i_262078]).kindU.S6.sons->data[((NI) 1)]);
						LA16: ;
						if (!LOC15) goto LA17;
						result = NIM_TRUE;
						goto BeforeRet;
					}
					LA17: ;
				}
				goto LA9;
				LA11: ;
				{
					{
						NIM_BOOL LOC22;
						LOC22 = 0;
						LOC22 = samevalue_223189((*s).kindU.S6.sons->data[i_262078], elem);
						if (!LOC22) goto LA23;
						result = NIM_TRUE;
						goto BeforeRet;
					}
					LA23: ;
				}
				LA9: ;
				res_262098 += ((NI) 1);
			} LA8: ;
		}
	}
	result = NIM_FALSE;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, tobitset_262001)(Tnode216790* s, Tbitset261006** b) {
	NI64 first;
	NI64 j;
	NI64 LOC1;
	first = 0;
	j = 0;
	first = firstord_242001((*(*s).typ).sons->data[((NI) 0)]);
	LOC1 = 0;
	LOC1 = getsize_242124((*s).typ);
	bitsetinit_261009(b, ((NI) (LOC1)));
	{
		NI i_262215;
		NI HEX3Atmp_262244;
		NI LOC3;
		NI res_262247;
		i_262215 = 0;
		HEX3Atmp_262244 = 0;
		LOC3 = 0;
		LOC3 = sonslen_219351(s);
		HEX3Atmp_262244 = (NI)(LOC3 - ((NI) 1));
		res_262247 = ((NI) 0);
		{
			while (1) {
				if (!(res_262247 <= HEX3Atmp_262244)) goto LA5;
				i_262215 = res_262247;
				{
					if (!((*(*s).kindU.S6.sons->data[i_262215]).kind == ((NU8) 44))) goto LA8;
					j = getordvalue_242118((*(*s).kindU.S6.sons->data[i_262215]).kindU.S6.sons->data[((NI) 0)]);
					{
						while (1) {
							NI64 LOC12;
							LOC12 = 0;
							LOC12 = getordvalue_242118((*(*s).kindU.S6.sons->data[i_262215]).kindU.S6.sons->data[((NI) 1)]);
							if (!(j <= LOC12)) goto LA11;
							bitsetincl_261034(b, (NI64)(j - first));
							j += ((NI) 1);
						} LA11: ;
					}
				}
				goto LA6;
				LA8: ;
				{
					NI64 LOC14;
					LOC14 = 0;
					LOC14 = getordvalue_242118((*s).kindU.S6.sons->data[i_262215]);
					bitsetincl_261034(b, (NI64)(LOC14 - first));
				}
				LA6: ;
				res_262247 += ((NI) 1);
			} LA5: ;
		}
	}
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

N_NIMCALL(Tnode216790*, totreeset_262251)(Tbitset261006* s, Ttype216828* settype, Tlineinfo184337 info) {
	Tnode216790* result;
	NI64 a;
	NI64 b;
	NI64 e;
	NI64 first;
	Ttype216828* elemtype;
	Tnode216790* n;
	result = 0;
	a = 0;
	b = 0;
	e = 0;
	first = 0;
	elemtype = 0;
	n = 0;
	elemtype = (*settype).sons->data[((NI) 0)];
	first = firstord_242001(elemtype);
	result = newnodei_218248(((NU8) 39), info);
	asgnRefNoCycle((void**) (&(*result).typ), settype);
	(*result).info = info;
	e = IL64(0);
	{
		while (1) {
			if (!(e < ((NI64) ((NI)((s ? s->Sup.len : 0) * ((NI) 8)))))) goto LA2;
			{
				NIM_BOOL LOC5;
				Tnode216790* aa;
				LOC5 = 0;
				LOC5 = bitsetin_261044(s, e);
				if (!LOC5) goto LA6;
				a = e;
				b = e;
				{
					while (1) {
						b += ((NI) 1);
						{
							NIM_BOOL LOC12;
							NIM_BOOL LOC14;
							LOC12 = 0;
							LOC12 = (((NI64) ((NI)((s ? s->Sup.len : 0) * ((NI) 8)))) <= b);
							if (LOC12) goto LA13;
							LOC14 = 0;
							LOC14 = bitsetin_261044(s, b);
							LOC12 = !(LOC14);
							LA13: ;
							if (!LOC12) goto LA15;
							goto LA8;
						}
						LA15: ;
					}
				} LA8: ;
				b -= ((NI) 1);
				aa = newinttypenode_217666(((NU8) 6), (NI64)(a + first), elemtype);
				(*aa).info = info;
				{
					if (!(a == b)) goto LA19;
					addson_218807(result, aa);
				}
				goto LA17;
				LA19: ;
				{
					Tnode216790* bb;
					n = newnodei_218248(((NU8) 44), info);
					asgnRefNoCycle((void**) (&(*n).typ), elemtype);
					addson_218807(n, aa);
					bb = newinttypenode_217666(((NU8) 6), (NI64)(b + first), elemtype);
					(*bb).info = info;
					addson_218807(n, bb);
					addson_218807(result, n);
				}
				LA17: ;
				e = b;
			}
			LA6: ;
			e += ((NI) 1);
		} LA2: ;
	}
	return result;
}

N_NIMCALL(Tnode216790*, diffsets_262030)(Tnode216790* a, Tnode216790* b) {
	Tnode216790* result;
	Tbitset261006* x;
	Tbitset261006* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_262001(a, (&x));
	tobitset_262001(b, (&y));
	bitsetdiff_261019((&x), y);
	result = totreeset_262251(x, (*a).typ, (*a).info);
	return result;
}

N_NIMCALL(NI64, cardset_262050)(Tnode216790* s) {
	NI64 result;
	result = 0;
	result = IL64(0);
	{
		NI i_262434;
		NI HEX3Atmp_262459;
		NI LOC2;
		NI res_262462;
		i_262434 = 0;
		HEX3Atmp_262459 = 0;
		LOC2 = 0;
		LOC2 = sonslen_219351(s);
		HEX3Atmp_262459 = (NI)(LOC2 - ((NI) 1));
		res_262462 = ((NI) 0);
		{
			while (1) {
				if (!(res_262462 <= HEX3Atmp_262459)) goto LA4;
				i_262434 = res_262462;
				{
					NI64 LOC9;
					NI64 LOC10;
					if (!((*(*s).kindU.S6.sons->data[i_262434]).kind == ((NU8) 44))) goto LA7;
					LOC9 = 0;
					LOC9 = getordvalue_242118((*(*s).kindU.S6.sons->data[i_262434]).kindU.S6.sons->data[((NI) 1)]);
					LOC10 = 0;
					LOC10 = getordvalue_242118((*(*s).kindU.S6.sons->data[i_262434]).kindU.S6.sons->data[((NI) 0)]);
					result = (NI64)((NI64)((NI64)(result + LOC9) - LOC10) + IL64(1));
				}
				goto LA5;
				LA7: ;
				{
					result += ((NI) 1);
				}
				LA5: ;
				res_262462 += ((NI) 1);
			} LA4: ;
		}
	}
	return result;
}

N_NIMCALL(NIM_BOOL, containssets_262042)(Tnode216790* a, Tnode216790* b) {
	NIM_BOOL result;
	Tbitset261006* x;
	Tbitset261006* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_262001(a, (&x));
	tobitset_262001(b, (&y));
	result = bitsetcontains_261052(x, y);
	return result;
}

N_NIMCALL(NIM_BOOL, equalsets_262046)(Tnode216790* a, Tnode216790* b) {
	NIM_BOOL result;
	Tbitset261006* x;
	Tbitset261006* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_262001(a, (&x));
	tobitset_262001(b, (&y));
	result = bitsetequals_261048(x, y);
	return result;
}

N_NIMCALL(Tnode216790*, intersectsets_262034)(Tnode216790* a, Tnode216790* b) {
	Tnode216790* result;
	Tbitset261006* x;
	Tbitset261006* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_262001(a, (&x));
	tobitset_262001(b, (&y));
	bitsetintersect_261029((&x), y);
	result = totreeset_262251(x, (*a).typ, (*a).info);
	return result;
}

N_NIMCALL(Tnode216790*, unionsets_262026)(Tnode216790* a, Tnode216790* b) {
	Tnode216790* result;
	Tbitset261006* x;
	Tbitset261006* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_262001(a, (&x));
	tobitset_262001(b, (&y));
	bitsetunion_261014((&x), y);
	result = totreeset_262251(x, (*a).typ, (*a).info);
	return result;
}

N_NIMCALL(Tnode216790*, symdiffsets_262038)(Tnode216790* a, Tnode216790* b) {
	Tnode216790* result;
	Tbitset261006* x;
	Tbitset261006* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_262001(a, (&x));
	tobitset_262001(b, (&y));
	bitsetsymdiff_261024((&x), y);
	result = totreeset_262251(x, (*a).typ, (*a).info);
	return result;
}

N_NIMCALL(NIM_BOOL, overlap_262006)(Tnode216790* a, Tnode216790* b) {
	NIM_BOOL result;
	result = 0;
	{
		if (!((*a).kind == ((NU8) 44))) goto LA3;
		{
			NIM_BOOL LOC9;
			if (!((*b).kind == ((NU8) 44))) goto LA7;
			LOC9 = 0;
			LOC9 = levalue_223233((*a).kindU.S6.sons->data[((NI) 0)], (*b).kindU.S6.sons->data[((NI) 1)]);
			if (!(LOC9)) goto LA10;
			LOC9 = levalue_223233((*b).kindU.S6.sons->data[((NI) 0)], (*a).kindU.S6.sons->data[((NI) 1)]);
			LA10: ;
			result = LOC9;
		}
		goto LA5;
		LA7: ;
		{
			NIM_BOOL LOC12;
			LOC12 = 0;
			LOC12 = levalue_223233((*a).kindU.S6.sons->data[((NI) 0)], b);
			if (!(LOC12)) goto LA13;
			LOC12 = levalue_223233(b, (*a).kindU.S6.sons->data[((NI) 1)]);
			LA13: ;
			result = LOC12;
		}
		LA5: ;
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC19;
			if (!((*b).kind == ((NU8) 44))) goto LA17;
			LOC19 = 0;
			LOC19 = levalue_223233((*b).kindU.S6.sons->data[((NI) 0)], a);
			if (!(LOC19)) goto LA20;
			LOC19 = levalue_223233(a, (*b).kindU.S6.sons->data[((NI) 1)]);
			LA20: ;
			result = LOC19;
		}
		goto LA15;
		LA17: ;
		{
			result = samevalue_223189(a, b);
		}
		LA15: ;
	}
	LA1: ;
	return result;
}

N_NIMCALL(Tnode216790*, complement_262392)(Tnode216790* a) {
	Tnode216790* result;
	Tbitset261006* x;
	result = 0;
	x = 0;
	tobitset_262001(a, (&x));
	{
		NI i_262409;
		NI HEX3Atmp_262412;
		NI res_262415;
		i_262409 = 0;
		HEX3Atmp_262412 = 0;
		HEX3Atmp_262412 = (x ? (x->Sup.len-1) : -1);
		res_262415 = ((NI) 0);
		{
			while (1) {
				if (!(res_262415 <= HEX3Atmp_262412)) goto LA3;
				i_262409 = res_262415;
				x->data[i_262409] = (NI8)((NU8) ~(x->data[i_262409]));
				res_262415 += ((NI) 1);
			} LA3: ;
		}
	}
	result = totreeset_262251(x, (*a).typ, (*a).info);
	return result;
}

N_NIMCALL(NIM_BOOL, emptyrange_262019)(Tnode216790* a, Tnode216790* b) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = levalue_223233(a, b);
	result = !(LOC1);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimsetsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimsetsDatInit000)(void) {
}

