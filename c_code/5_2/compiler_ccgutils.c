/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Tidtable214840 Tidtable214840;
typedef struct Tidpairseq214838 Tidpairseq214838;
typedef struct Ttype214828 Ttype214828;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tidobj189006 Tidobj189006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq214824 Ttypeseq214824;
typedef struct Tnode214790 Tnode214790;
typedef struct Tsym214822 Tsym214822;
typedef struct Tloc214804 Tloc214804;
typedef struct Ropeobj169006 Ropeobj169006;
typedef struct Cell47505 Cell47505;
typedef struct Cellseq47521 Cellseq47521;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Cellset47517 Cellset47517;
typedef struct Pagedesc47513 Pagedesc47513;
typedef struct Memregion29688 Memregion29688;
typedef struct Smallchunk29640 Smallchunk29640;
typedef struct Llchunk29682 Llchunk29682;
typedef struct Bigchunk29642 Bigchunk29642;
typedef struct Intset29614 Intset29614;
typedef struct Trunk29610 Trunk29610;
typedef struct Avlnode29686 Avlnode29686;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Tlineinfo182337 Tlineinfo182337;
typedef struct Tscope214816 Tscope214816;
typedef struct TY214925 TY214925;
typedef struct Tstrtable214794 Tstrtable214794;
typedef struct Tsymseq214792 Tsymseq214792;
typedef struct Tident189012 Tident189012;
typedef struct Tlib214808 Tlib214808;
typedef struct Tidpair214836 Tidpair214836;
typedef struct Tnodeseq214784 Tnodeseq214784;
typedef struct Tinfocpu167462 Tinfocpu167462;
typedef struct Basechunk29638 Basechunk29638;
typedef struct Freecell29630 Freecell29630;
typedef struct Tinstantiation214812 Tinstantiation214812;
typedef struct Tlistentry135010 Tlistentry135010;
typedef struct TY214913 TY214913;
struct  Tidtable214840  {
NI counter;
Tidpairseq214838* data;
};
typedef Tidtable214840 TY468204[62];
typedef Ttype214828* TY258011[62];
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
struct  Tidobj189006  {
  TNimObject Sup;
NI id;
};
struct  Tloc214804  {
NU8 k;
NU8 s;
NU16 flags;
Ttype214828* t;
Ropeobj169006* r;
Ropeobj169006* heaproot;
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
Cellseq47521 zct;
Cellseq47521 decstack;
Cellset47517 cycleroots;
Cellseq47521 tempstack;
NI recgclock;
Memregion29688 region;
Gcstat49814 stat;
};
struct  Tlineinfo182337  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tstrtable214794  {
NI counter;
Tsymseq214792* data;
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
struct  Tidpair214836  {
Tidobj189006* key;
TNimObject* val;
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
struct Tinfocpu167462 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef Tinfocpu167462 TY167490[18];
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Ropeobj169006  {
  TNimObject Sup;
Ropeobj169006* left;
Ropeobj169006* right;
NI length;
NimStringDesc* data;
};
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY29619[8];
struct  Pagedesc47513  {
Pagedesc47513* next;
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
struct  Tscope214816  {
NI depthlevel;
Tstrtable214794 symbols;
Tnodeseq214784* usingsyms;
Tscope214816* parent;
};
struct  Tident189012  {
  Tidobj189006 Sup;
NimStringDesc* s;
Tident189012* next;
NI h;
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
struct  Freecell29630  {
Freecell29630* next;
NI zerofield;
};
struct  Tinstantiation214812  {
Tsym214822* sym;
Ttypeseq214824* concretetypes;
TY214913* usedby;
NI compilesid;
};
struct Tidpairseq214838 {
  TGenericSeq Sup;
  Tidpair214836 data[SEQ_DECL_SIZE];
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
struct Tnodeseq214784 {
  TGenericSeq Sup;
  Tnode214790* data[SEQ_DECL_SIZE];
};
struct TY214913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, inittypetables_468212)(void);
N_NIMCALL(void, initidtable_218033)(Tidtable214840* x);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
N_NIMCALL(NIM_CHAR, nsuToLowerChar)(NIM_CHAR c);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell47505*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_53001)(Cell47505* c);
N_NOINLINE(void, addzct_51417)(Cellseq47521* s, Cell47505* c);
N_NIMCALL(void, internalerror_187100)(Tlineinfo182337 info, NimStringDesc* errmsg);
N_NIMCALL(void, internalerror_187113)(NimStringDesc* errmsg);
N_NIMCALL(Ttype214828*, getuniquetype_468640)(Ttype214828* key);
N_NIMCALL(Ttype214828*, lastson_217377)(Ttype214828* n);
N_NIMCALL(Ttype214828*, slowsearch_468601)(Ttype214828* key, NU8 k);
N_NIMCALL(NIM_BOOL, idtablehasobjectaskey_221121)(Tidtable214840 t, Tidobj189006* key);
N_NIMCALL(NIM_BOOL, samebackendtype_246387)(Ttype214828* x, Ttype214828* y);
N_NIMCALL(void, idtableput_221115)(Tidtable214840* t, Tidobj189006* key, TNimObject* val);
N_NIMCALL(TNimObject*, idtableget_221107)(Tidtable214840 t, Tidobj189006* key);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, tocchar_182633)(NIM_CHAR c);
N_NIMCALL(Tnode214790*, getpragmastmt_468005)(Tnode214790* n, NU16 w);
static N_INLINE(NI, len_215059)(Tnode214790* n);
static N_INLINE(Tnode214790*, HEX5BHEX5D_215238)(Tnode214790* n, NI i);
N_NIMCALL(NU16, whichpragma_239525)(Tnode214790* n);
STRING_LITERAL(TMP3757, "N", 1);
STRING_LITERAL(TMP3758, "HEX", 3);
STRING_LITERAL(TMP3766, "metatype not eliminated", 23);
STRING_LITERAL(TMP3856, "\"", 1);
extern NIM_CONST TY167490 Cpu_167476;
TY468204 gtypetable_468205;
TY258011 gcanonicaltypes_468209;
extern Gcheap49818 gch_49859;
extern NU8 targetcpu_167601;

N_NIMCALL(void, inittypetables_468212)(void) {
	{
		NU8 i_468414;
		NI res_468421;
		i_468414 = 0;
		res_468421 = ((NI) 0);
		{
			while (1) {
				if (!(res_468421 <= ((NI) 61))) goto LA3;
				i_468414 = ((NU8) (res_468421));
				initidtable_218033((&gtypetable_468205[(i_468414)- 0]));
				res_468421 += ((NI) 1);
			} LA3: ;
		}
	}
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_NIMCALL(NimStringDesc*, mangle_468847)(NimStringDesc* name) {
	NimStringDesc* result;
	result = 0;
	result = rawNewString(((NI) ((name ? name->Sup.len : 0))));
	switch (((NU8)(name->data[((NI) 0)]))) {
	case 65 ... 90:
	case 97 ... 122:
	{
		result = addChar(result, name->data[((NI) 0)]);
	}
	break;
	case 48 ... 57:
	{
		NimStringDesc* LOC3;
		LOC3 = 0;
		LOC3 = rawNewString(2);
appendString(LOC3, ((NimStringDesc*) &TMP3757));
appendChar(LOC3, name->data[((NI) 0)]);
		result = resizeString(result, LOC3->Sup.len + 0);
appendString(result, LOC3);
	}
	break;
	default:
	{
		NimStringDesc* LOC5;
		NimStringDesc* LOC6;
		LOC5 = 0;
		LOC6 = 0;
		LOC6 = nsuToHex(((NI64) (((NU8)(name->data[((NI) 0)])))), ((NI) 2));
		LOC5 = rawNewString(LOC6->Sup.len + 3);
appendString(LOC5, ((NimStringDesc*) &TMP3758));
appendString(LOC5, LOC6);
		result = LOC5;
	}
	break;
	}
	{
		NI i_468868;
		NI HEX3Atmp_468879;
		NI res_468882;
		i_468868 = 0;
		HEX3Atmp_468879 = 0;
		HEX3Atmp_468879 = (NI)((name ? name->Sup.len : 0) - ((NI) 1));
		res_468882 = ((NI) 1);
		{
			while (1) {
				NIM_CHAR c;
				if (!(res_468882 <= HEX3Atmp_468879)) goto LA9;
				i_468868 = res_468882;
				c = name->data[i_468868];
				switch (((NU8)(c))) {
				case 65 ... 90:
				{
					NIM_CHAR LOC11;
					LOC11 = 0;
					LOC11 = nsuToLowerChar(c);
					result = addChar(result, LOC11);
				}
				break;
				case 95:
				{
				}
				break;
				case 97 ... 122:
				case 48 ... 57:
				{
					result = addChar(result, c);
				}
				break;
				default:
				{
					NimStringDesc* LOC15;
					NimStringDesc* LOC16;
					LOC15 = 0;
					LOC16 = 0;
					LOC16 = nsuToHex(((NI64) (((NU8)(c)))), ((NI) 2));
					LOC15 = rawNewString(LOC16->Sup.len + 3);
appendString(LOC15, ((NimStringDesc*) &TMP3758));
appendString(LOC15, LOC16);
					result = resizeString(result, LOC15->Sup.len + 0);
appendString(result, LOC15);
				}
				break;
				}
				res_468882 += ((NI) 1);
			} LA9: ;
		}
	}
	return result;
}

static N_INLINE(Cell47505*, usrtocell_51440)(void* usr) {
	Cell47505* result;
	result = 0;
	result = ((Cell47505*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell47505))))));
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
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_53001(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(Ttype214828*, slowsearch_468601)(Ttype214828* key, NU8 k) {
	Ttype214828* result;
	Tidobj189006* LOC16;
	TNimObject* LOC17;
{	result = 0;
	{
		Tidobj189006* LOC3;
		NIM_BOOL LOC4;
		LOC3 = 0;
		LOC3 = &key->Sup;
		LOC4 = 0;
		LOC4 = idtablehasobjectaskey_221121(gtypetable_468205[(k)- 0], LOC3);
		if (!LOC4) goto LA5;
		result = key;
		goto BeforeRet;
	}
	LA5: ;
	{
		NI h_468617;
		NI HEX3Atmp_468633;
		NI res_468636;
		h_468617 = 0;
		HEX3Atmp_468633 = 0;
		HEX3Atmp_468633 = (gtypetable_468205[(k)- 0].data ? (gtypetable_468205[(k)- 0].data->Sup.len-1) : -1);
		res_468636 = ((NI) 0);
		{
			while (1) {
				Ttype214828* t;
				if (!(res_468636 <= HEX3Atmp_468633)) goto LA9;
				h_468617 = res_468636;
				t = ((Ttype214828*) (gtypetable_468205[(k)- 0].data->data[h_468617].key));
				{
					NIM_BOOL LOC12;
					LOC12 = 0;
					LOC12 = !((t == NIM_NIL));
					if (!(LOC12)) goto LA13;
					LOC12 = samebackendtype_246387(t, key);
					LA13: ;
					if (!LOC12) goto LA14;
					result = t;
					goto BeforeRet;
				}
				LA14: ;
				res_468636 += ((NI) 1);
			} LA9: ;
		}
	}
	LOC16 = 0;
	LOC16 = &key->Sup;
	LOC17 = 0;
	LOC17 = &key->Sup.Sup;
	idtableput_221115((&gtypetable_468205[(k)- 0]), LOC16, LOC17);
	result = key;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Ttype214828*, getuniquetype_468640)(Ttype214828* key) {
	Ttype214828* result;
	NU8 k;
{	result = 0;
	{
		if (!(key == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	k = (*key).kind;
	switch (k) {
	case ((NU8) 1):
	case ((NU8) 2):
	case ((NU8) 31) ... ((NU8) 44):
	{
		result = key;
	}
	break;
	case ((NU8) 3):
	case ((NU8) 5):
	case ((NU8) 6):
	case ((NU8) 7):
	case ((NU8) 26):
	case ((NU8) 28):
	case ((NU8) 29):
	case ((NU8) 0):
	case ((NU8) 45):
	{
		result = gcanonicaltypes_468209[(k)- 0];
		{
			if (!(result == NIM_NIL)) goto LA9;
			asgnRefNoCycle((void**) (&gcanonicaltypes_468209[(k)- 0]), key);
			result = key;
		}
		LA9: ;
	}
	break;
	case ((NU8) 8):
	case ((NU8) 51):
	case ((NU8) 12):
	case ((NU8) 60):
	case ((NU8) 61):
	case ((NU8) 54):
	case ((NU8) 52):
	case ((NU8) 53):
	case ((NU8) 55):
	case ((NU8) 56):
	case ((NU8) 57):
	case ((NU8) 58):
	{
		{
			if (!!(((*key).sym == NIM_NIL))) goto LA14;
			internalerror_187100((*(*key).sym).info, ((NimStringDesc*) &TMP3766));
		}
		goto LA12;
		LA14: ;
		{
			internalerror_187113(((NimStringDesc*) &TMP3766));
		}
		LA12: ;
	}
	break;
	case ((NU8) 13):
	{
		{
			if (!!(((*key).deepcopy == NIM_NIL))) goto LA20;
			result = key;
		}
		goto LA18;
		LA20: ;
		{
			Ttype214828* LOC23;
			LOC23 = 0;
			LOC23 = lastson_217377(key);
			result = getuniquetype_468640(LOC23);
		}
		LA18: ;
	}
	break;
	case ((NU8) 11):
	case ((NU8) 15):
	case ((NU8) 47):
	case ((NU8) 46):
	case ((NU8) 49):
	case ((NU8) 59):
	{
		Ttype214828* LOC25;
		LOC25 = 0;
		LOC25 = lastson_217377(key);
		result = getuniquetype_468640(LOC25);
	}
	break;
	case ((NU8) 21):
	case ((NU8) 22):
	case ((NU8) 23):
	{
		Ttype214828* elemtype;
		elemtype = lastson_217377(key);
		{
			if (!((IL64(35182224605190) &((NU64)1<<((NU)((*elemtype).kind)&63U)))!=0)) goto LA29;
			result = key;
		}
		goto LA27;
		LA29: ;
		{
			result = slowsearch_468601(key, k);
		}
		LA27: ;
	}
	break;
	case ((NU8) 4):
	case ((NU8) 9):
	case ((NU8) 10):
	case ((NU8) 27):
	case ((NU8) 16):
	case ((NU8) 19):
	case ((NU8) 20):
	case ((NU8) 18):
	case ((NU8) 24):
	case ((NU8) 30):
	case ((NU8) 48):
	case ((NU8) 50):
	{
		result = slowsearch_468601(key, k);
	}
	break;
	case ((NU8) 17):
	{
		{
			Tidobj189006* LOC38;
			TNimObject* LOC39;
			if (!!((((*key).flags &(1U<<((NU)(((NU8) 8))&31U)))!=0))) goto LA36;
			LOC38 = 0;
			LOC38 = &key->Sup;
			LOC39 = 0;
			LOC39 = idtableget_221107(gtypetable_468205[(k)- 0], LOC38);
			result = ((Ttype214828*) (LOC39));
			{
				Tidobj189006* LOC44;
				TNimObject* LOC45;
				if (!(result == NIM_NIL)) goto LA42;
				LOC44 = 0;
				LOC44 = &key->Sup;
				LOC45 = 0;
				LOC45 = &key->Sup.Sup;
				idtableput_221115((&gtypetable_468205[(k)- 0]), LOC44, LOC45);
				result = key;
			}
			LA42: ;
		}
		goto LA34;
		LA36: ;
		{
			Tidobj189006* LOC62;
			TNimObject* LOC63;
			{
				Tidobj189006* LOC49;
				NIM_BOOL LOC50;
				LOC49 = 0;
				LOC49 = &key->Sup;
				LOC50 = 0;
				LOC50 = idtablehasobjectaskey_221121(gtypetable_468205[(k)- 0], LOC49);
				if (!LOC50) goto LA51;
				result = key;
				goto BeforeRet;
			}
			LA51: ;
			{
				NI h_468740;
				NI HEX3Atmp_468778;
				NI res_468781;
				h_468740 = 0;
				HEX3Atmp_468778 = 0;
				HEX3Atmp_468778 = (gtypetable_468205[(k)- 0].data ? (gtypetable_468205[(k)- 0].data->Sup.len-1) : -1);
				res_468781 = ((NI) 0);
				{
					while (1) {
						Ttype214828* t;
						if (!(res_468781 <= HEX3Atmp_468778)) goto LA55;
						h_468740 = res_468781;
						t = ((Ttype214828*) (gtypetable_468205[(k)- 0].data->data[h_468740].key));
						{
							NIM_BOOL LOC58;
							LOC58 = 0;
							LOC58 = !((t == NIM_NIL));
							if (!(LOC58)) goto LA59;
							LOC58 = samebackendtype_246387(t, key);
							LA59: ;
							if (!LOC58) goto LA60;
							result = t;
							goto BeforeRet;
						}
						LA60: ;
						res_468781 += ((NI) 1);
					} LA55: ;
				}
			}
			LOC62 = 0;
			LOC62 = &key->Sup;
			LOC63 = 0;
			LOC63 = &key->Sup.Sup;
			idtableput_221115((&gtypetable_468205[(k)- 0]), LOC62, LOC63);
			result = key;
		}
		LA34: ;
	}
	break;
	case ((NU8) 14):
	{
		Tidobj189006* LOC65;
		TNimObject* LOC66;
		LOC65 = 0;
		LOC65 = &key->Sup;
		LOC66 = 0;
		LOC66 = idtableget_221107(gtypetable_468205[(k)- 0], LOC65);
		result = ((Ttype214828*) (LOC66));
		{
			Tidobj189006* LOC71;
			TNimObject* LOC72;
			if (!(result == NIM_NIL)) goto LA69;
			LOC71 = 0;
			LOC71 = &key->Sup;
			LOC72 = 0;
			LOC72 = &key->Sup.Sup;
			idtableput_221115((&gtypetable_468205[(k)- 0]), LOC71, LOC72);
			result = key;
		}
		LA69: ;
	}
	break;
	case ((NU8) 25):
	{
		{
			if (!!(((*key).callconv == ((NU8) 8)))) goto LA76;
			result = key;
		}
		goto LA74;
		LA76: ;
		{
			result = slowsearch_468601(key, k);
		}
		LA74: ;
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, makesinglelinecstring_468835)(NimStringDesc* s) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP3856));
	{
		NIM_CHAR c_468840;
		NI i_468844;
		NI L_468846;
		c_468840 = 0;
		i_468844 = ((NI) 0);
		L_468846 = (s ? s->Sup.len : 0);
		{
			while (1) {
				NimStringDesc* LOC4;
				if (!(i_468844 < L_468846)) goto LA3;
				c_468840 = s->data[i_468844];
				LOC4 = 0;
				LOC4 = tocchar_182633(c_468840);
				result = resizeString(result, LOC4->Sup.len + 0);
appendString(result, LOC4);
				i_468844 += ((NI) 1);
			} LA3: ;
		}
	}
	result = addChar(result, 34);
	return result;
}

static N_INLINE(NI, len_215059)(Tnode214790* n) {
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

static N_INLINE(Tnode214790*, HEX5BHEX5D_215238)(Tnode214790* n, NI i) {
	Tnode214790* result;
	result = 0;
	result = (*n).kindU.S6.sons->data[i];
	return result;
}

N_NIMCALL(Tnode214790*, getpragmastmt_468005)(Tnode214790* n, NU16 w) {
	Tnode214790* result;
{	result = 0;
	switch ((*n).kind) {
	case ((NU8) 115):
	{
		{
			NI i_468028;
			NI HEX3Atmp_468070;
			NI LOC3;
			NI res_468073;
			i_468028 = 0;
			HEX3Atmp_468070 = 0;
			LOC3 = 0;
			LOC3 = len_215059(n);
			HEX3Atmp_468070 = (LOC3 - 1);
			res_468073 = ((NI) 0);
			{
				while (1) {
					Tnode214790* LOC6;
					if (!(res_468073 <= HEX3Atmp_468070)) goto LA5;
					i_468028 = res_468073;
					LOC6 = 0;
					LOC6 = HEX5BHEX5D_215238(n, i_468028);
					result = getpragmastmt_468005(LOC6, w);
					{
						if (!!((result == NIM_NIL))) goto LA9;
						goto LA2;
					}
					LA9: ;
					res_468073 += ((NI) 1);
				} LA5: ;
			}
		} LA2: ;
	}
	break;
	case ((NU8) 90):
	{
		{
			NI i_468059;
			NI HEX3Atmp_468078;
			NI LOC13;
			NI res_468081;
			i_468059 = 0;
			HEX3Atmp_468078 = 0;
			LOC13 = 0;
			LOC13 = len_215059(n);
			HEX3Atmp_468078 = (LOC13 - 1);
			res_468081 = ((NI) 0);
			{
				while (1) {
					if (!(res_468081 <= HEX3Atmp_468078)) goto LA15;
					i_468059 = res_468081;
					{
						Tnode214790* LOC18;
						NU16 LOC19;
						LOC18 = 0;
						LOC18 = HEX5BHEX5D_215238(n, i_468059);
						LOC19 = 0;
						LOC19 = whichpragma_239525(LOC18);
						if (!(LOC19 == w)) goto LA20;
						result = HEX5BHEX5D_215238(n, i_468059);
						goto BeforeRet;
					}
					LA20: ;
					res_468081 += ((NI) 1);
				} LA15: ;
			}
		}
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

N_NIMCALL(NIM_BOOL, stmtscontainpragma_468085)(Tnode214790* n, NU16 w) {
	NIM_BOOL result;
	Tnode214790* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = getpragmastmt_468005(n, w);
	result = !((LOC1 == NIM_NIL));
	return result;
}

N_NIMCALL(NI64, hashstring_468102)(NimStringDesc* s) {
	NI64 result;
	result = 0;
	{
		NI64 b;
		if (!(Cpu_167476[(targetcpu_167601)- 1].Field4 == ((NI) 64))) goto LA3;
		b = IL64(0);
		{
			NI i_468118;
			NI HEX3Atmp_468186;
			NI res_468189;
			i_468118 = 0;
			HEX3Atmp_468186 = 0;
			HEX3Atmp_468186 = (NI)((s ? s->Sup.len : 0) - ((NI) 1));
			res_468189 = ((NI) 0);
			{
				while (1) {
					if (!(res_468189 <= HEX3Atmp_468186)) goto LA7;
					i_468118 = res_468189;
					b = (NI64)((NU64)(b) + (NU64)(((NI64) (((NU8)(s->data[i_468118]))))));
					b = (NI64)((NU64)(b) + (NU64)((NI64)((NU64)(b) << (NU64)(IL64(10)))));
					b = (NI64)(b ^ (NI64)((NU64)(b) >> (NU64)(IL64(6))));
					res_468189 += ((NI) 1);
				} LA7: ;
			}
		}
		b = (NI64)((NU64)(b) + (NU64)((NI64)((NU64)(b) << (NU64)(IL64(3)))));
		b = (NI64)(b ^ (NI64)((NU64)(b) >> (NU64)(IL64(11))));
		b = (NI64)((NU64)(b) + (NU64)((NI64)((NU64)(b) << (NU64)(IL64(15)))));
		result = b;
	}
	goto LA1;
	LA3: ;
	{
		NI32 a;
		a = ((NI32) 0);
		{
			NI i_468139;
			NI HEX3Atmp_468195;
			NI res_468198;
			i_468139 = 0;
			HEX3Atmp_468195 = 0;
			HEX3Atmp_468195 = (NI)((s ? s->Sup.len : 0) - ((NI) 1));
			res_468198 = ((NI) 0);
			{
				while (1) {
					if (!(res_468198 <= HEX3Atmp_468195)) goto LA11;
					i_468139 = res_468198;
					a = (NI32)((NU32)(a) + (NU32)(((NI32) (((NU8)(s->data[i_468139]))))));
					a = (NI32)((NU32)(a) + (NU32)((NI32)((NU32)(a) << (NU32)(((NI32) 10)))));
					a = (NI32)(a ^ (NI32)((NU32)(a) >> (NU32)(((NI32) 6))));
					res_468198 += ((NI) 1);
				} LA11: ;
			}
		}
		a = (NI32)((NU32)(a) + (NU32)((NI32)((NU32)(a) << (NU32)(((NI32) 3)))));
		a = (NI32)(a ^ (NI32)((NU32)(a) >> (NU32)(((NI32) 11))));
		a = (NI32)((NU32)(a) + (NU32)((NI32)((NU32)(a) << (NU32)(((NI32) 15)))));
		result = ((NI64) (a));
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, resetcaches_468424)(void) {
	inittypetables_468212();
	{
		NU8 i_468435;
		NI res_468439;
		i_468435 = 0;
		res_468439 = ((NI) 0);
		{
			while (1) {
				if (!(res_468439 <= ((NI) 61))) goto LA3;
				i_468435 = ((NU8) (res_468439));
				asgnRefNoCycle((void**) (&gcanonicaltypes_468209[(i_468435)- 0]), NIM_NIL);
				res_468439 += ((NI) 1);
			} LA3: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, compiler_ccgutilsInit000)(void) {
	inittypetables_468212();
}

NIM_EXTERNC N_NOINLINE(void, compiler_ccgutilsDatInit000)(void) {
}

