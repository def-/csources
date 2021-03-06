/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Tnodetable215852 Tnodetable215852;
typedef struct Tnode215790 Tnode215790;
typedef struct Tnodepairseq215850 Tnodepairseq215850;
typedef struct Tnodepair215848 Tnodepair215848;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype215828 Ttype215828;
typedef struct Tlineinfo183337 Tlineinfo183337;
typedef struct NimStringDesc NimStringDesc;
typedef struct Tsym215822 Tsym215822;
typedef struct Tident190012 Tident190012;
typedef struct Tnodeseq215784 Tnodeseq215784;
typedef struct Tidobj190006 Tidobj190006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq215824 Ttypeseq215824;
typedef struct Tscope215816 Tscope215816;
typedef struct TY215925 TY215925;
typedef struct Tstrtable215794 Tstrtable215794;
typedef struct Tsymseq215792 Tsymseq215792;
typedef struct Tloc215804 Tloc215804;
typedef struct Ropeobj170006 Ropeobj170006;
typedef struct Tlib215808 Tlib215808;
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
typedef struct Tinstantiation215812 Tinstantiation215812;
typedef struct Tlistentry135010 Tlistentry135010;
typedef struct Basechunk29637 Basechunk29637;
typedef struct Freecell29629 Freecell29629;
typedef struct TY215913 TY215913;
struct  Tnodepair215848  {
NI h;
Tnode215790* key;
NI val;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  Tlineinfo183337  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  Tstrtable215794  {
NI counter;
Tsymseq215792* data;
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
struct  Tnodetable215852  {
NI counter;
Tnodepairseq215850* data;
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
struct  Tinstantiation215812  {
Tsym215822* sym;
Ttypeseq215824* concretetypes;
TY215913* usedby;
NI compilesid;
};
struct  Freecell29629  {
Freecell29629* next;
NI zerofield;
};
struct Tnodepairseq215850 {
  TGenericSeq Sup;
  Tnodepair215848 data[SEQ_DECL_SIZE];
};
struct Tnodeseq215784 {
  TGenericSeq Sup;
  Tnode215790* data[SEQ_DECL_SIZE];
};
struct Ttypeseq215824 {
  TGenericSeq Sup;
  Ttype215828* data[SEQ_DECL_SIZE];
};
struct TY215925 {
  TGenericSeq Sup;
  Tinstantiation215812* data[SEQ_DECL_SIZE];
};
struct Tsymseq215792 {
  TGenericSeq Sup;
  Tsym215822* data[SEQ_DECL_SIZE];
};
struct TY215913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, hashtree_263009)(Tnode215790* n);
static N_INLINE(NI, HEX21HEX26_137004)(NI h, NI val);
N_NIMCALL(NI, hash_137827)(NimStringDesc* x);
N_NIMCALL(NI, sonslen_218351)(Tnode215790* n);
N_NIMCALL(NI, nodetablerawget_263159)(Tnodetable215852 t, NI k, Tnode215790* key);
N_NIMCALL(NIM_BOOL, treesequivalent_263076)(Tnode215790* a, Tnode215790* b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NIM_BOOL, sametypeornil_245638)(Ttype215828* a, Ttype215828* b, NU8 flags);
static N_INLINE(NI, nexttry_222151)(NI h, NI maxhash);
N_NIMCALL(NIM_BOOL, mustrehash_222147)(NI length, NI counter);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, nodetablerawinsert_263189)(Tnodepairseq215850** data, NI k, Tnode215790* key, NI val);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell47505*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_53001)(Cell47505* c);
N_NOINLINE(void, addzct_51417)(Cellseq47521* s, Cell47505* c);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
extern TNimType NTI215850; /* TNodePairSeq */
extern Gcheap49818 gch_49859;

static N_INLINE(NI, HEX21HEX26_137004)(NI h, NI val) {
	NI result;
	result = 0;
	result = (NI)((NU32)(h) + (NU32)(val));
	result = (NI)((NU32)(result) + (NU32)((NI)((NU32)(result) << (NU32)(((NI) 10)))));
	result = (NI)(result ^ (NI)((NU32)(result) >> (NU32)(((NI) 6))));
	return result;
}

N_NIMCALL(NI, hashtree_263009)(Tnode215790* n) {
	NI result;
{	result = 0;
	{
		if (!(n == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	result = ((NI) ((*n).kind));
	switch ((*n).kind) {
	case ((NU8) 1):
	case ((NU8) 23):
	case ((NU8) 4):
	{
	}
	break;
	case ((NU8) 2):
	{
		result = HEX21HEX26_137004(result, (*(*n).kindU.S5.ident).h);
	}
	break;
	case ((NU8) 3):
	{
		result = HEX21HEX26_137004(result, (*(*(*n).kindU.S4.sym).name).h);
	}
	break;
	case ((NU8) 5) ... ((NU8) 15):
	{
		{
			NIM_BOOL LOC11;
			LOC11 = 0;
			LOC11 = (IL64(-2147483648) <= (*n).kindU.S1.intval);
			if (!(LOC11)) goto LA12;
			LOC11 = ((*n).kindU.S1.intval <= IL64(2147483647));
			LA12: ;
			if (!LOC11) goto LA13;
			result = HEX21HEX26_137004(result, ((NI) ((*n).kindU.S1.intval)));
		}
		LA13: ;
	}
	break;
	case ((NU8) 16) ... ((NU8) 18):
	{
		{
			NIM_BOOL LOC18;
			LOC18 = 0;
			LOC18 = (-1.0000000000000000e+06 <= (*n).kindU.S2.floatval);
			if (!(LOC18)) goto LA19;
			LOC18 = ((*n).kindU.S2.floatval <= 1.0000000000000000e+06);
			LA19: ;
			if (!LOC18) goto LA20;
			result = HEX21HEX26_137004(result, float64ToInt32((*n).kindU.S2.floatval));
		}
		LA20: ;
	}
	break;
	case ((NU8) 20) ... ((NU8) 22):
	{
		{
			NI LOC27;
			if (!!((*n).kindU.S3.strval == 0)) goto LA25;
			LOC27 = 0;
			LOC27 = hash_137827((*n).kindU.S3.strval);
			result = HEX21HEX26_137004(result, LOC27);
		}
		LA25: ;
	}
	break;
	default:
	{
		{
			NI i_263062;
			NI HEX3Atmp_263069;
			NI LOC30;
			NI res_263072;
			i_263062 = 0;
			HEX3Atmp_263069 = 0;
			LOC30 = 0;
			LOC30 = sonslen_218351(n);
			HEX3Atmp_263069 = (NI)(LOC30 - ((NI) 1));
			res_263072 = ((NI) 0);
			{
				while (1) {
					NI LOC33;
					if (!(res_263072 <= HEX3Atmp_263069)) goto LA32;
					i_263062 = res_263072;
					LOC33 = 0;
					LOC33 = hashtree_263009((*n).kindU.S6.sons->data[i_263062]);
					result = HEX21HEX26_137004(result, LOC33);
					res_263072 += ((NI) 1);
				} LA32: ;
			}
		}
	}
	break;
	}
	}BeforeRet: ;
	return result;
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

N_NIMCALL(NIM_BOOL, treesequivalent_263076)(Tnode215790* a, Tnode215790* b) {
	NIM_BOOL result;
{	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		NIM_BOOL LOC7;
		LOC6 = 0;
		LOC7 = 0;
		LOC7 = !((a == NIM_NIL));
		if (!(LOC7)) goto LA8;
		LOC7 = !((b == NIM_NIL));
		LA8: ;
		LOC6 = LOC7;
		if (!(LOC6)) goto LA9;
		LOC6 = ((*a).kind == (*b).kind);
		LA9: ;
		if (!LOC6) goto LA10;
		switch ((*a).kind) {
		case ((NU8) 1):
		case ((NU8) 23):
		case ((NU8) 4):
		{
			result = NIM_TRUE;
		}
		break;
		case ((NU8) 3):
		{
			result = ((*(*a).kindU.S4.sym).Sup.id == (*(*b).kindU.S4.sym).Sup.id);
		}
		break;
		case ((NU8) 2):
		{
			result = ((*(*a).kindU.S5.ident).Sup.id == (*(*b).kindU.S5.ident).Sup.id);
		}
		break;
		case ((NU8) 5) ... ((NU8) 15):
		{
			result = ((*a).kindU.S1.intval == (*b).kindU.S1.intval);
		}
		break;
		case ((NU8) 16) ... ((NU8) 18):
		{
			result = ((*a).kindU.S2.floatval == (*b).kindU.S2.floatval);
		}
		break;
		case ((NU8) 20) ... ((NU8) 22):
		{
			result = eqStrings((*a).kindU.S3.strval, (*b).kindU.S3.strval);
		}
		break;
		default:
		{
			{
				NI LOC21;
				NI LOC22;
				LOC21 = 0;
				LOC21 = sonslen_218351(a);
				LOC22 = 0;
				LOC22 = sonslen_218351(b);
				if (!(LOC21 == LOC22)) goto LA23;
				{
					NI i_263148;
					NI HEX3Atmp_263152;
					NI LOC26;
					NI res_263155;
					i_263148 = 0;
					HEX3Atmp_263152 = 0;
					LOC26 = 0;
					LOC26 = sonslen_218351(a);
					HEX3Atmp_263152 = (NI)(LOC26 - ((NI) 1));
					res_263155 = ((NI) 0);
					{
						while (1) {
							if (!(res_263155 <= HEX3Atmp_263152)) goto LA28;
							i_263148 = res_263155;
							{
								NIM_BOOL LOC31;
								LOC31 = 0;
								LOC31 = treesequivalent_263076((*a).kindU.S6.sons->data[i_263148], (*b).kindU.S6.sons->data[i_263148]);
								if (!!(LOC31)) goto LA32;
								goto BeforeRet;
							}
							LA32: ;
							res_263155 += ((NI) 1);
						} LA28: ;
					}
				}
				result = NIM_TRUE;
			}
			LA23: ;
		}
		break;
		}
		{
			if (!result) goto LA36;
			result = sametypeornil_245638((*a).typ, (*b).typ, 0);
		}
		LA36: ;
	}
	goto LA1;
	LA10: ;
	LA1: ;
	}BeforeRet: ;
	return result;
}

static N_INLINE(NI, nexttry_222151)(NI h, NI maxhash) {
	NI result;
	result = 0;
	result = (NI)((NI)((NI)(((NI) 5) * h) + ((NI) 1)) & maxhash);
	return result;
}

N_NIMCALL(NI, nodetablerawget_263159)(Tnodetable215852 t, NI k, Tnode215790* key) {
	NI result;
	NI h;
{	result = 0;
	h = (NI)(k & (t.data ? (t.data->Sup.len-1) : -1));
	{
		while (1) {
			if (!!((t.data->data[h].key == NIM_NIL))) goto LA2;
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = (t.data->data[h].h == k);
				if (!(LOC5)) goto LA6;
				LOC5 = treesequivalent_263076(t.data->data[h].key, key);
				LA6: ;
				if (!LOC5) goto LA7;
				result = h;
				goto BeforeRet;
			}
			LA7: ;
			h = nexttry_222151(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA2: ;
	}
	result = ((NI) -1);
	}BeforeRet: ;
	return result;
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

N_NIMCALL(void, nodetablerawinsert_263189)(Tnodepairseq215850** data, NI k, Tnode215790* key, NI val) {
	NI h;
	h = (NI)(k & ((*data) ? ((*data)->Sup.len-1) : -1));
	{
		while (1) {
			if (!!(((*data)->data[h].key == NIM_NIL))) goto LA2;
			h = nexttry_222151(h, ((*data) ? ((*data)->Sup.len-1) : -1));
		} LA2: ;
	}
	(*data)->data[h].h = k;
	asgnRefNoCycle((void**) (&(*data)->data[h].key), key);
	(*data)->data[h].val = val;
}

N_NIMCALL(NI, nodetabletestorset_263682)(Tnodetable215852* t, Tnode215790* key, NI val) {
	NI result;
	Tnodepairseq215850* n;
	NI k;
	NI index;
	result = 0;
	n = 0;
	k = hashtree_263009(key);
	index = nodetablerawget_263159((*t), k, key);
	{
		if (!(((NI) 0) <= index)) goto LA3;
		result = (*t).data->data[index].val;
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			Tnodepairseq215850* LOC18;
			LOC8 = 0;
			LOC8 = mustrehash_222147(((*t).data ? (*t).data->Sup.len : 0), (*t).counter);
			if (!LOC8) goto LA9;
			n = (Tnodepairseq215850*) newSeq((&NTI215850), ((NI) ((NI)(((*t).data ? (*t).data->Sup.len : 0) * ((NI) 2)))));
			{
				NI i_263838;
				NI HEX3Atmp_263875;
				NI res_263878;
				i_263838 = 0;
				HEX3Atmp_263875 = 0;
				HEX3Atmp_263875 = ((*t).data ? ((*t).data->Sup.len-1) : -1);
				res_263878 = ((NI) 0);
				{
					while (1) {
						if (!(res_263878 <= HEX3Atmp_263875)) goto LA13;
						i_263838 = res_263878;
						{
							if (!!(((*t).data->data[i_263838].key == NIM_NIL))) goto LA16;
							nodetablerawinsert_263189((&n), (*t).data->data[i_263838].h, (*t).data->data[i_263838].key, (*t).data->data[i_263838].val);
						}
						LA16: ;
						res_263878 += ((NI) 1);
					} LA13: ;
				}
			}
			LOC18 = 0;
			LOC18 = (*t).data;
			unsureAsgnRef((void**) (&(*t).data), n);
			n = LOC18;
		}
		LA9: ;
		nodetablerawinsert_263189((&(*t).data), k, key, val);
		result = val;
		(*t).counter += ((NI) 1);
	}
	LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_treetabInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_treetabDatInit000)(void) {
}

