/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Intset211035 Intset211035;
typedef struct Trunk211031 Trunk211031;
typedef struct Trunkseq211033 Trunkseq211033;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell47505 Cell47505;
typedef struct Cellset47517 Cellset47517;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Cellseq47521 Cellseq47521;
typedef struct Pagedesc47513 Pagedesc47513;
typedef struct Memregion29687 Memregion29687;
typedef struct Smallchunk29639 Smallchunk29639;
typedef struct Llchunk29681 Llchunk29681;
typedef struct Bigchunk29641 Bigchunk29641;
typedef struct Intset29614 Intset29614;
typedef struct Trunk29610 Trunk29610;
typedef struct Avlnode29685 Avlnode29685;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Basechunk29637 Basechunk29637;
typedef struct Freecell29629 Freecell29629;
struct  Intset211035  {
NI counter;
NI max;
Trunk211031* head;
Trunkseq211033* data;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
typedef NI TY29618[16];
struct  Trunk211031  {
Trunk211031* next;
NI key;
TY29618 bits;
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
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
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
struct  Freecell29629  {
Freecell29629* next;
NI zerofield;
};
struct Trunkseq211033 {
  TGenericSeq Sup;
  Trunk211031* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1122)(void* p, NI op);
N_NIMCALL(void, TMP1123)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(Trunk211031*, intsetput_211661)(Intset211035* t, NI key);
static N_INLINE(NI, nexttry_211201)(NI h, NI maxhash);
static N_INLINE(NIM_BOOL, mustrehash_211048)(NI length, NI counter);
N_NIMCALL(void, intsetenlarge_211602)(Intset211035* t);
N_NIMCALL(void, intsetrawinsert_211225)(Intset211035 t, Trunkseq211033** data, Trunk211031* desc);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_53819)(Cell47505* c);
static N_INLINE(NIM_BOOL, canbecycleroot_51458)(Cell47505* c);
static N_INLINE(void, rtladdcycleroot_52220)(Cell47505* c);
N_NOINLINE(void, incl_48247)(Cellset47517* s, Cell47505* cell);
static N_INLINE(Cell47505*, usrtocell_51440)(void* usr);
static N_INLINE(void, decref_53401)(Cell47505* c);
static N_INLINE(void, rtladdzct_53001)(Cell47505* c);
N_NOINLINE(void, addzct_51417)(Cellseq47521* s, Cell47505* c);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(Trunk211031*, intsetget_211206)(Intset211035 t, NI key);
N_NIMCALL(void, incl_211832)(Intset211035* s, NI key);
TNimType NTI211031; /* Trunk */
extern TNimType NTI104; /* int */
extern TNimType NTI29618; /* array[0..15, int] */
TNimType NTI211029; /* PTrunk */
TNimType NTI211033; /* TrunkSeq */
extern Gcheap49818 gch_49859;
TNimType NTI211035; /* IntSet */
N_NIMCALL(void, TMP1122)(void* p, NI op) {
	Trunk211031* a;
	NI LOC1;
	a = (Trunk211031*)p;
	nimGCvisit((void*)(*a).next, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 16; LOC1++) {
	}
}
N_NIMCALL(void, TMP1123)(void* p, NI op) {
	Trunkseq211033* a;
	NI LOC1;
	a = (Trunkseq211033*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

N_NIMCALL(void, initintset_211885)(Intset211035* Result) {
	unsureAsgnRef((void**) (&(*Result).data), (Trunkseq211033*) newSeq((&NTI211033), ((NI) 8)));
	(*Result).max = ((NI) 7);
	(*Result).counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*Result).head), NIM_NIL);
}

static N_INLINE(NI, nexttry_211201)(NI h, NI maxhash) {
	NI result;
	result = 0;
	result = (NI)((NI)((NI)(((NI) 5) * h) + ((NI) 1)) & maxhash);
	return result;
}

static N_INLINE(NIM_BOOL, mustrehash_211048)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = ((NI)(length * ((NI) 2)) < (NI)(counter * ((NI) 3)));
	if (LOC1) goto LA2;
	LOC1 = ((NI)(length - counter) < ((NI) 4));
	LA2: ;
	result = LOC1;
	return result;
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

static N_INLINE(Cell47505*, usrtocell_51440)(void* usr) {
	Cell47505* result;
	result = 0;
	result = ((Cell47505*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Cell47505))))));
	return result;
}

static N_INLINE(void, rtladdzct_53001)(Cell47505* c) {
	addzct_51417((&gch_49859.zct), c);
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

N_NIMCALL(void, intsetrawinsert_211225)(Intset211035 t, Trunkseq211033** data, Trunk211031* desc) {
	NI h;
	h = (NI)((*desc).key & t.max);
	{
		while (1) {
			if (!!(((*data)->data[h] == NIM_NIL))) goto LA2;
			h = nexttry_211201(h, t.max);
		} LA2: ;
	}
	asgnRef((void**) (&(*data)->data[h]), desc);
}

N_NIMCALL(void, intsetenlarge_211602)(Intset211035* t) {
	Trunkseq211033* n;
	NI oldmax;
	Trunkseq211033* LOC8;
	n = 0;
	oldmax = (*t).max;
	(*t).max = (NI)((NI)((NI)((*t).max + ((NI) 1)) * ((NI) 2)) - ((NI) 1));
	n = (Trunkseq211033*) newSeq((&NTI211033), ((NI) ((NI)((*t).max + ((NI) 1)))));
	{
		NI i_211629;
		NI res_211657;
		i_211629 = 0;
		res_211657 = ((NI) 0);
		{
			while (1) {
				if (!(res_211657 <= oldmax)) goto LA3;
				i_211629 = res_211657;
				{
					if (!!(((*t).data->data[i_211629] == NIM_NIL))) goto LA6;
					intsetrawinsert_211225((*t), (&n), (*t).data->data[i_211629]);
				}
				LA6: ;
				res_211657 += ((NI) 1);
			} LA3: ;
		}
	}
	LOC8 = 0;
	LOC8 = (*t).data;
	unsureAsgnRef((void**) (&(*t).data), n);
	n = LOC8;
}

N_NIMCALL(Trunk211031*, intsetput_211661)(Intset211035* t, NI key) {
	Trunk211031* result;
	NI h;
{	result = 0;
	h = (NI)(key & (*t).max);
	{
		while (1) {
			if (!!(((*t).data->data[h] == NIM_NIL))) goto LA2;
			{
				if (!((*(*t).data->data[h]).key == key)) goto LA5;
				result = (*t).data->data[h];
				goto BeforeRet;
			}
			LA5: ;
			h = nexttry_211201(h, (*t).max);
		} LA2: ;
	}
	{
		NIM_BOOL LOC9;
		LOC9 = 0;
		LOC9 = mustrehash_211048((NI)((*t).max + ((NI) 1)), (*t).counter);
		if (!LOC9) goto LA10;
		intsetenlarge_211602(t);
	}
	LA10: ;
	(*t).counter += ((NI) 1);
	h = (NI)(key & (*t).max);
	{
		while (1) {
			if (!!(((*t).data->data[h] == NIM_NIL))) goto LA13;
			h = nexttry_211201(h, (*t).max);
		} LA13: ;
	}
	result = (Trunk211031*) newObj((&NTI211029), sizeof(Trunk211031));
	asgnRef((void**) (&(*result).next), (*t).head);
	(*result).key = key;
	unsureAsgnRef((void**) (&(*t).head), result);
	asgnRef((void**) (&(*t).data->data[h]), result);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, incl_211832)(Intset211035* s, NI key) {
	Trunk211031* t;
	NI u;
	t = intsetput_211661(s, (NI)((NU32)(key) >> (NU32)(((NI) 9))));
	u = (NI)(key & ((NI) 511));
	(*t).bits[((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5))))- 0] = (NI)((*t).bits[((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5))))- 0] | (NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI)(((NI) (u)) & ((NI) 31)))))));
}

N_NIMCALL(Trunk211031*, intsetget_211206)(Intset211035 t, NI key) {
	Trunk211031* result;
	NI h;
{	result = 0;
	h = (NI)(key & t.max);
	{
		while (1) {
			if (!!((t.data->data[h] == NIM_NIL))) goto LA2;
			{
				if (!((*t.data->data[h]).key == key)) goto LA5;
				result = t.data->data[h];
				goto BeforeRet;
			}
			LA5: ;
			h = nexttry_211201(h, t.max);
		} LA2: ;
	}
	result = NIM_NIL;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, containsorincl_211862)(Intset211035* s, NI key) {
	NIM_BOOL result;
	Trunk211031* t;
	result = 0;
	t = intsetget_211206((*s), (NI)((NU32)(key) >> (NU32)(((NI) 9))));
	{
		NI u;
		if (!!((t == NIM_NIL))) goto LA3;
		u = (NI)(key & ((NI) 511));
		result = !(((NI)((*t).bits[((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5))))- 0] & (NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI)(((NI) (u)) & ((NI) 31))))))) == ((NI) 0)));
		{
			if (!!(result)) goto LA7;
			(*t).bits[((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5))))- 0] = (NI)((*t).bits[((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5))))- 0] | (NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI)(((NI) (u)) & ((NI) 31)))))));
		}
		LA7: ;
	}
	goto LA1;
	LA3: ;
	{
		incl_211832(s, key);
		result = NIM_FALSE;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, contains_211811)(Intset211035 s, NI key) {
	NIM_BOOL result;
	Trunk211031* t;
	result = 0;
	t = intsetget_211206(s, (NI)((NU32)(key) >> (NU32)(((NI) 9))));
	{
		NI u;
		if (!!((t == NIM_NIL))) goto LA3;
		u = (NI)(key & ((NI) 511));
		result = !(((NI)((*t).bits[((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5))))- 0] & (NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI)(((NI) (u)) & ((NI) 31))))))) == ((NI) 0)));
	}
	goto LA1;
	LA3: ;
	{
		result = NIM_FALSE;
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, assign_211910)(Intset211035* dest, Intset211035 src) {
	Trunk211031* it;
	(*dest).counter = src.counter;
	(*dest).max = src.max;
	unsureAsgnRef((void**) (&(*dest).data), (Trunkseq211033*) newSeq((&NTI211033), ((NI) ((src.data ? src.data->Sup.len : 0)))));
	it = src.head;
	{
		while (1) {
			NI h;
			Trunk211031* n;
			if (!!((it == NIM_NIL))) goto LA2;
			h = (NI)((*it).key & (*dest).max);
			{
				while (1) {
					if (!!(((*dest).data->data[h] == NIM_NIL))) goto LA4;
					h = nexttry_211201(h, (*dest).max);
				} LA4: ;
			}
			n = 0;
			n = (Trunk211031*) newObj((&NTI211029), sizeof(Trunk211031));
			asgnRef((void**) (&(*n).next), (*dest).head);
			(*n).key = (*it).key;
			memcpy((void*)(*n).bits, (NIM_CONST void*)(*it).bits, sizeof(TY29618));
			unsureAsgnRef((void**) (&(*dest).head), n);
			asgnRef((void**) (&(*dest).data->data[h]), n);
			it = (*it).next;
		} LA2: ;
	}
}

N_NIMCALL(void, excl_211841)(Intset211035* s, NI key) {
	Trunk211031* t;
	t = intsetget_211206((*s), (NI)((NU32)(key) >> (NU32)(((NI) 9))));
	{
		NI u;
		if (!!((t == NIM_NIL))) goto LA3;
		u = (NI)(key & ((NI) 511));
		(*t).bits[((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5))))- 0] = (NI)((*t).bits[((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5))))- 0] & (NI)((NU32) ~((NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI)(((NI) (u)) & ((NI) 31)))))))));
	}
	LA3: ;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsDatInit000)(void) {
static TNimNode* TMP1121[3];
static TNimNode* TMP1165[4];
static TNimNode TMP805[9];
NTI211031.size = sizeof(Trunk211031);
NTI211031.kind = 18;
NTI211031.base = 0;
TMP1121[0] = &TMP805[1];
TMP805[1].kind = 1;
TMP805[1].offset = offsetof(Trunk211031, next);
TMP805[1].typ = (&NTI211029);
TMP805[1].name = "next";
TMP1121[1] = &TMP805[2];
TMP805[2].kind = 1;
TMP805[2].offset = offsetof(Trunk211031, key);
TMP805[2].typ = (&NTI104);
TMP805[2].name = "key";
TMP1121[2] = &TMP805[3];
TMP805[3].kind = 1;
TMP805[3].offset = offsetof(Trunk211031, bits);
TMP805[3].typ = (&NTI29618);
TMP805[3].name = "bits";
TMP805[0].len = 3; TMP805[0].kind = 2; TMP805[0].sons = &TMP1121[0];
NTI211031.node = &TMP805[0];
NTI211029.size = sizeof(Trunk211031*);
NTI211029.kind = 22;
NTI211029.base = (&NTI211031);
NTI211029.marker = TMP1122;
NTI211033.size = sizeof(Trunkseq211033*);
NTI211033.kind = 24;
NTI211033.base = (&NTI211029);
NTI211033.flags = 2;
NTI211033.marker = TMP1123;
NTI211035.size = sizeof(Intset211035);
NTI211035.kind = 18;
NTI211035.base = 0;
NTI211035.flags = 2;
TMP1165[0] = &TMP805[5];
TMP805[5].kind = 1;
TMP805[5].offset = offsetof(Intset211035, counter);
TMP805[5].typ = (&NTI104);
TMP805[5].name = "counter";
TMP1165[1] = &TMP805[6];
TMP805[6].kind = 1;
TMP805[6].offset = offsetof(Intset211035, max);
TMP805[6].typ = (&NTI104);
TMP805[6].name = "max";
TMP1165[2] = &TMP805[7];
TMP805[7].kind = 1;
TMP805[7].offset = offsetof(Intset211035, head);
TMP805[7].typ = (&NTI211029);
TMP805[7].name = "head";
TMP1165[3] = &TMP805[8];
TMP805[8].kind = 1;
TMP805[8].offset = offsetof(Intset211035, data);
TMP805[8].typ = (&NTI211033);
TMP805[8].name = "data";
TMP805[4].len = 4; TMP805[4].kind = 2; TMP805[4].sons = &TMP1165[0];
NTI211035.node = &TMP805[4];
}

