/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Tidtable213840 Tidtable213840;
typedef struct Tidpairseq213838 Tidpairseq213838;
typedef struct Ttype213828 Ttype213828;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tidobj188006 Tidobj188006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq213824 Ttypeseq213824;
typedef struct Tnode213790 Tnode213790;
typedef struct Tsym213822 Tsym213822;
typedef struct Tloc213804 Tloc213804;
typedef struct Ropeobj168006 Ropeobj168006;
typedef struct Cell47705 Cell47705;
typedef struct Cellseq47721 Cellseq47721;
typedef struct Gcheap50018 Gcheap50018;
typedef struct Gcstack50016 Gcstack50016;
typedef struct Cellset47717 Cellset47717;
typedef struct Pagedesc47713 Pagedesc47713;
typedef struct Memregion29887 Memregion29887;
typedef struct Smallchunk29839 Smallchunk29839;
typedef struct Llchunk29881 Llchunk29881;
typedef struct Bigchunk29841 Bigchunk29841;
typedef struct Intset29814 Intset29814;
typedef struct Trunk29810 Trunk29810;
typedef struct Avlnode29885 Avlnode29885;
typedef struct Gcstat50014 Gcstat50014;
typedef struct Tlineinfo181337 Tlineinfo181337;
typedef struct Tscope213816 Tscope213816;
typedef struct TY213925 TY213925;
typedef struct Tstrtable213794 Tstrtable213794;
typedef struct Tsymseq213792 Tsymseq213792;
typedef struct Tident188012 Tident188012;
typedef struct Tlib213808 Tlib213808;
typedef struct Tidpair213836 Tidpair213836;
typedef struct Tnodeseq213784 Tnodeseq213784;
typedef struct Tinfocpu166462 Tinfocpu166462;
typedef struct Basechunk29837 Basechunk29837;
typedef struct Freecell29829 Freecell29829;
typedef struct Tinstantiation213812 Tinstantiation213812;
typedef struct Tlistentry135010 Tlistentry135010;
typedef struct TY213913 TY213913;
struct  Tidtable213840  {
NI counter;
Tidpairseq213838* data;
};
typedef Tidtable213840 TY467204[62];
typedef Ttype213828* TY257011[62];
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
struct  Tidobj188006  {
  TNimObject Sup;
NI id;
};
struct  Tloc213804  {
NU8 k;
NU8 s;
NU16 flags;
Ttype213828* t;
Ropeobj168006* r;
Ropeobj168006* heaproot;
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
struct  Cell47705  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47721  {
NI len;
NI cap;
Cell47705** d;
};
struct  Cellset47717  {
NI counter;
NI max;
Pagedesc47713* head;
Pagedesc47713** data;
};
typedef Smallchunk29839* TY29902[512];
typedef Trunk29810* Trunkbuckets29812[256];
struct  Intset29814  {
Trunkbuckets29812 data;
};
struct  Memregion29887  {
NI minlargeobj;
NI maxlargeobj;
TY29902 freesmallchunks;
Llchunk29881* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29841* freechunkslist;
Intset29814 chunkstarts;
Avlnode29885* root;
Avlnode29885* deleted;
Avlnode29885* last;
Avlnode29885* freeavlnodes;
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
Cellseq47721 zct;
Cellseq47721 decstack;
Cellset47717 cycleroots;
Cellseq47721 tempstack;
NI recgclock;
Memregion29887 region;
Gcstat50014 stat;
};
struct  Tlineinfo181337  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tstrtable213794  {
NI counter;
Tsymseq213792* data;
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
struct  Tidpair213836  {
Tidobj188006* key;
TNimObject* val;
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
struct Tinfocpu166462 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef Tinfocpu166462 TY166490[18];
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Ropeobj168006  {
  TNimObject Sup;
Ropeobj168006* left;
Ropeobj168006* right;
NI length;
NimStringDesc* data;
};
struct  Gcstack50016  {
Gcstack50016* prev;
Gcstack50016* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY29818[16];
struct  Pagedesc47713  {
Pagedesc47713* next;
NI key;
TY29818 bits;
};
struct  Basechunk29837  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29839  {
  Basechunk29837 Sup;
Smallchunk29839* next;
Smallchunk29839* prev;
Freecell29829* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29881  {
NI size;
NI acc;
Llchunk29881* next;
};
struct  Bigchunk29841  {
  Basechunk29837 Sup;
Bigchunk29841* next;
Bigchunk29841* prev;
NI align;
NF data;
};
struct  Trunk29810  {
Trunk29810* next;
NI key;
TY29818 bits;
};
typedef Avlnode29885* TY29892[2];
struct  Avlnode29885  {
TY29892 link;
NI key;
NI upperbound;
NI level;
};
struct  Tscope213816  {
NI depthlevel;
Tstrtable213794 symbols;
Tnodeseq213784* usingsyms;
Tscope213816* parent;
};
struct  Tident188012  {
  Tidobj188006 Sup;
NimStringDesc* s;
Tident188012* next;
NI h;
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
struct  Freecell29829  {
Freecell29829* next;
NI zerofield;
};
struct  Tinstantiation213812  {
Tsym213822* sym;
Ttypeseq213824* concretetypes;
TY213913* usedby;
NI compilesid;
};
struct Tidpairseq213838 {
  TGenericSeq Sup;
  Tidpair213836 data[SEQ_DECL_SIZE];
};
struct Ttypeseq213824 {
  TGenericSeq Sup;
  Ttype213828* data[SEQ_DECL_SIZE];
};
struct TY213925 {
  TGenericSeq Sup;
  Tinstantiation213812* data[SEQ_DECL_SIZE];
};
struct Tsymseq213792 {
  TGenericSeq Sup;
  Tsym213822* data[SEQ_DECL_SIZE];
};
struct Tnodeseq213784 {
  TGenericSeq Sup;
  Tnode213790* data[SEQ_DECL_SIZE];
};
struct TY213913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, inittypetables_467212)(void);
N_NIMCALL(void, initidtable_217033)(Tidtable213840* x);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
N_NIMCALL(NIM_CHAR, nsuToLowerChar)(NIM_CHAR c);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell47705*, usrtocell_51640)(void* usr);
static N_INLINE(void, rtladdzct_53201)(Cell47705* c);
N_NOINLINE(void, addzct_51617)(Cellseq47721* s, Cell47705* c);
N_NIMCALL(void, internalerror_186100)(Tlineinfo181337 info, NimStringDesc* errmsg);
N_NIMCALL(void, internalerror_186113)(NimStringDesc* errmsg);
N_NIMCALL(Ttype213828*, getuniquetype_467640)(Ttype213828* key);
N_NIMCALL(Ttype213828*, lastson_216377)(Ttype213828* n);
N_NIMCALL(Ttype213828*, slowsearch_467601)(Ttype213828* key, NU8 k);
N_NIMCALL(NIM_BOOL, idtablehasobjectaskey_220121)(Tidtable213840 t, Tidobj188006* key);
N_NIMCALL(NIM_BOOL, samebackendtype_245387)(Ttype213828* x, Ttype213828* y);
N_NIMCALL(void, idtableput_220115)(Tidtable213840* t, Tidobj188006* key, TNimObject* val);
N_NIMCALL(TNimObject*, idtableget_220107)(Tidtable213840 t, Tidobj188006* key);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, tocchar_181633)(NIM_CHAR c);
N_NIMCALL(Tnode213790*, getpragmastmt_467005)(Tnode213790* n, NU16 w);
static N_INLINE(NI, len_214059)(Tnode213790* n);
static N_INLINE(Tnode213790*, HEX5BHEX5D_214238)(Tnode213790* n, NI i);
N_NIMCALL(NU16, whichpragma_238525)(Tnode213790* n);
STRING_LITERAL(TMP3753, "N", 1);
STRING_LITERAL(TMP3754, "HEX", 3);
STRING_LITERAL(TMP3762, "metatype not eliminated", 23);
STRING_LITERAL(TMP3852, "\"", 1);
extern NIM_CONST TY166490 Cpu_166476;
TY467204 gtypetable_467205;
TY257011 gcanonicaltypes_467209;
extern Gcheap50018 gch_50059;
extern NU8 targetcpu_166601;

N_NIMCALL(void, inittypetables_467212)(void) {
	{
		NU8 i_467414;
		NI res_467421;
		i_467414 = 0;
		res_467421 = ((NI) 0);
		{
			while (1) {
				if (!(res_467421 <= ((NI) 61))) goto LA3;
				i_467414 = ((NU8) (res_467421));
				initidtable_217033((&gtypetable_467205[(i_467414)- 0]));
				res_467421 += ((NI) 1);
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

N_NIMCALL(NimStringDesc*, mangle_467847)(NimStringDesc* name) {
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
appendString(LOC3, ((NimStringDesc*) &TMP3753));
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
appendString(LOC5, ((NimStringDesc*) &TMP3754));
appendString(LOC5, LOC6);
		result = LOC5;
	}
	break;
	}
	{
		NI i_467868;
		NI HEX3Atmp_467879;
		NI res_467882;
		i_467868 = 0;
		HEX3Atmp_467879 = 0;
		HEX3Atmp_467879 = (NI)((name ? name->Sup.len : 0) - ((NI) 1));
		res_467882 = ((NI) 1);
		{
			while (1) {
				NIM_CHAR c;
				if (!(res_467882 <= HEX3Atmp_467879)) goto LA9;
				i_467868 = res_467882;
				c = name->data[i_467868];
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
appendString(LOC15, ((NimStringDesc*) &TMP3754));
appendString(LOC15, LOC16);
					result = resizeString(result, LOC15->Sup.len + 0);
appendString(result, LOC15);
				}
				break;
				}
				res_467882 += ((NI) 1);
			} LA9: ;
		}
	}
	return result;
}

static N_INLINE(Cell47705*, usrtocell_51640)(void* usr) {
	Cell47705* result;
	result = 0;
	result = ((Cell47705*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Cell47705))))));
	return result;
}

static N_INLINE(void, rtladdzct_53201)(Cell47705* c) {
	addzct_51617((&gch_50059.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell47705* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_51640(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47705* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_51640((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_53201(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(Ttype213828*, slowsearch_467601)(Ttype213828* key, NU8 k) {
	Ttype213828* result;
	Tidobj188006* LOC16;
	TNimObject* LOC17;
{	result = 0;
	{
		Tidobj188006* LOC3;
		NIM_BOOL LOC4;
		LOC3 = 0;
		LOC3 = &key->Sup;
		LOC4 = 0;
		LOC4 = idtablehasobjectaskey_220121(gtypetable_467205[(k)- 0], LOC3);
		if (!LOC4) goto LA5;
		result = key;
		goto BeforeRet;
	}
	LA5: ;
	{
		NI h_467617;
		NI HEX3Atmp_467633;
		NI res_467636;
		h_467617 = 0;
		HEX3Atmp_467633 = 0;
		HEX3Atmp_467633 = (gtypetable_467205[(k)- 0].data ? (gtypetable_467205[(k)- 0].data->Sup.len-1) : -1);
		res_467636 = ((NI) 0);
		{
			while (1) {
				Ttype213828* t;
				if (!(res_467636 <= HEX3Atmp_467633)) goto LA9;
				h_467617 = res_467636;
				t = ((Ttype213828*) (gtypetable_467205[(k)- 0].data->data[h_467617].key));
				{
					NIM_BOOL LOC12;
					LOC12 = 0;
					LOC12 = !((t == NIM_NIL));
					if (!(LOC12)) goto LA13;
					LOC12 = samebackendtype_245387(t, key);
					LA13: ;
					if (!LOC12) goto LA14;
					result = t;
					goto BeforeRet;
				}
				LA14: ;
				res_467636 += ((NI) 1);
			} LA9: ;
		}
	}
	LOC16 = 0;
	LOC16 = &key->Sup;
	LOC17 = 0;
	LOC17 = &key->Sup.Sup;
	idtableput_220115((&gtypetable_467205[(k)- 0]), LOC16, LOC17);
	result = key;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Ttype213828*, getuniquetype_467640)(Ttype213828* key) {
	Ttype213828* result;
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
		result = gcanonicaltypes_467209[(k)- 0];
		{
			if (!(result == NIM_NIL)) goto LA9;
			asgnRefNoCycle((void**) (&gcanonicaltypes_467209[(k)- 0]), key);
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
			internalerror_186100((*(*key).sym).info, ((NimStringDesc*) &TMP3762));
		}
		goto LA12;
		LA14: ;
		{
			internalerror_186113(((NimStringDesc*) &TMP3762));
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
			Ttype213828* LOC23;
			LOC23 = 0;
			LOC23 = lastson_216377(key);
			result = getuniquetype_467640(LOC23);
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
		Ttype213828* LOC25;
		LOC25 = 0;
		LOC25 = lastson_216377(key);
		result = getuniquetype_467640(LOC25);
	}
	break;
	case ((NU8) 21):
	case ((NU8) 22):
	case ((NU8) 23):
	{
		Ttype213828* elemtype;
		elemtype = lastson_216377(key);
		{
			if (!((*elemtype).kind == ((NU8) 1) || (*elemtype).kind == ((NU8) 2) || (*elemtype).kind >= ((NU8) 31) && (*elemtype).kind <= ((NU8) 44))) goto LA29;
			result = key;
		}
		goto LA27;
		LA29: ;
		{
			result = slowsearch_467601(key, k);
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
		result = slowsearch_467601(key, k);
	}
	break;
	case ((NU8) 17):
	{
		{
			Tidobj188006* LOC38;
			TNimObject* LOC39;
			if (!!((((*key).flags &(1U<<((NU)(((NU8) 8))&31U)))!=0))) goto LA36;
			LOC38 = 0;
			LOC38 = &key->Sup;
			LOC39 = 0;
			LOC39 = idtableget_220107(gtypetable_467205[(k)- 0], LOC38);
			result = ((Ttype213828*) (LOC39));
			{
				Tidobj188006* LOC44;
				TNimObject* LOC45;
				if (!(result == NIM_NIL)) goto LA42;
				LOC44 = 0;
				LOC44 = &key->Sup;
				LOC45 = 0;
				LOC45 = &key->Sup.Sup;
				idtableput_220115((&gtypetable_467205[(k)- 0]), LOC44, LOC45);
				result = key;
			}
			LA42: ;
		}
		goto LA34;
		LA36: ;
		{
			Tidobj188006* LOC62;
			TNimObject* LOC63;
			{
				Tidobj188006* LOC49;
				NIM_BOOL LOC50;
				LOC49 = 0;
				LOC49 = &key->Sup;
				LOC50 = 0;
				LOC50 = idtablehasobjectaskey_220121(gtypetable_467205[(k)- 0], LOC49);
				if (!LOC50) goto LA51;
				result = key;
				goto BeforeRet;
			}
			LA51: ;
			{
				NI h_467740;
				NI HEX3Atmp_467778;
				NI res_467781;
				h_467740 = 0;
				HEX3Atmp_467778 = 0;
				HEX3Atmp_467778 = (gtypetable_467205[(k)- 0].data ? (gtypetable_467205[(k)- 0].data->Sup.len-1) : -1);
				res_467781 = ((NI) 0);
				{
					while (1) {
						Ttype213828* t;
						if (!(res_467781 <= HEX3Atmp_467778)) goto LA55;
						h_467740 = res_467781;
						t = ((Ttype213828*) (gtypetable_467205[(k)- 0].data->data[h_467740].key));
						{
							NIM_BOOL LOC58;
							LOC58 = 0;
							LOC58 = !((t == NIM_NIL));
							if (!(LOC58)) goto LA59;
							LOC58 = samebackendtype_245387(t, key);
							LA59: ;
							if (!LOC58) goto LA60;
							result = t;
							goto BeforeRet;
						}
						LA60: ;
						res_467781 += ((NI) 1);
					} LA55: ;
				}
			}
			LOC62 = 0;
			LOC62 = &key->Sup;
			LOC63 = 0;
			LOC63 = &key->Sup.Sup;
			idtableput_220115((&gtypetable_467205[(k)- 0]), LOC62, LOC63);
			result = key;
		}
		LA34: ;
	}
	break;
	case ((NU8) 14):
	{
		Tidobj188006* LOC65;
		TNimObject* LOC66;
		LOC65 = 0;
		LOC65 = &key->Sup;
		LOC66 = 0;
		LOC66 = idtableget_220107(gtypetable_467205[(k)- 0], LOC65);
		result = ((Ttype213828*) (LOC66));
		{
			Tidobj188006* LOC71;
			TNimObject* LOC72;
			if (!(result == NIM_NIL)) goto LA69;
			LOC71 = 0;
			LOC71 = &key->Sup;
			LOC72 = 0;
			LOC72 = &key->Sup.Sup;
			idtableput_220115((&gtypetable_467205[(k)- 0]), LOC71, LOC72);
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
			result = slowsearch_467601(key, k);
		}
		LA74: ;
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, makesinglelinecstring_467835)(NimStringDesc* s) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP3852));
	{
		NIM_CHAR c_467840;
		NI i_467844;
		NI L_467846;
		c_467840 = 0;
		i_467844 = ((NI) 0);
		L_467846 = (s ? s->Sup.len : 0);
		{
			while (1) {
				NimStringDesc* LOC4;
				if (!(i_467844 < L_467846)) goto LA3;
				c_467840 = s->data[i_467844];
				LOC4 = 0;
				LOC4 = tocchar_181633(c_467840);
				result = resizeString(result, LOC4->Sup.len + 0);
appendString(result, LOC4);
				i_467844 += ((NI) 1);
			} LA3: ;
		}
	}
	result = addChar(result, 34);
	return result;
}

static N_INLINE(NI, len_214059)(Tnode213790* n) {
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

static N_INLINE(Tnode213790*, HEX5BHEX5D_214238)(Tnode213790* n, NI i) {
	Tnode213790* result;
	result = 0;
	result = (*n).kindU.S6.sons->data[i];
	return result;
}

N_NIMCALL(Tnode213790*, getpragmastmt_467005)(Tnode213790* n, NU16 w) {
	Tnode213790* result;
{	result = 0;
	switch ((*n).kind) {
	case ((NU8) 115):
	{
		{
			NI i_467028;
			NI HEX3Atmp_467070;
			NI LOC3;
			NI res_467073;
			i_467028 = 0;
			HEX3Atmp_467070 = 0;
			LOC3 = 0;
			LOC3 = len_214059(n);
			HEX3Atmp_467070 = (LOC3 - 1);
			res_467073 = ((NI) 0);
			{
				while (1) {
					Tnode213790* LOC6;
					if (!(res_467073 <= HEX3Atmp_467070)) goto LA5;
					i_467028 = res_467073;
					LOC6 = 0;
					LOC6 = HEX5BHEX5D_214238(n, i_467028);
					result = getpragmastmt_467005(LOC6, w);
					{
						if (!!((result == NIM_NIL))) goto LA9;
						goto LA2;
					}
					LA9: ;
					res_467073 += ((NI) 1);
				} LA5: ;
			}
		} LA2: ;
	}
	break;
	case ((NU8) 90):
	{
		{
			NI i_467059;
			NI HEX3Atmp_467078;
			NI LOC13;
			NI res_467081;
			i_467059 = 0;
			HEX3Atmp_467078 = 0;
			LOC13 = 0;
			LOC13 = len_214059(n);
			HEX3Atmp_467078 = (LOC13 - 1);
			res_467081 = ((NI) 0);
			{
				while (1) {
					if (!(res_467081 <= HEX3Atmp_467078)) goto LA15;
					i_467059 = res_467081;
					{
						Tnode213790* LOC18;
						NU16 LOC19;
						LOC18 = 0;
						LOC18 = HEX5BHEX5D_214238(n, i_467059);
						LOC19 = 0;
						LOC19 = whichpragma_238525(LOC18);
						if (!(LOC19 == w)) goto LA20;
						result = HEX5BHEX5D_214238(n, i_467059);
						goto BeforeRet;
					}
					LA20: ;
					res_467081 += ((NI) 1);
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

N_NIMCALL(NIM_BOOL, stmtscontainpragma_467085)(Tnode213790* n, NU16 w) {
	NIM_BOOL result;
	Tnode213790* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = getpragmastmt_467005(n, w);
	result = !((LOC1 == NIM_NIL));
	return result;
}

N_NIMCALL(NI64, hashstring_467102)(NimStringDesc* s) {
	NI64 result;
	result = 0;
	{
		NI64 b;
		if (!(Cpu_166476[(targetcpu_166601)- 1].Field4 == ((NI) 64))) goto LA3;
		b = IL64(0);
		{
			NI i_467118;
			NI HEX3Atmp_467186;
			NI res_467189;
			i_467118 = 0;
			HEX3Atmp_467186 = 0;
			HEX3Atmp_467186 = (NI)((s ? s->Sup.len : 0) - ((NI) 1));
			res_467189 = ((NI) 0);
			{
				while (1) {
					if (!(res_467189 <= HEX3Atmp_467186)) goto LA7;
					i_467118 = res_467189;
					b = (NI64)((NU64)(b) + (NU64)(((NI64) (((NU8)(s->data[i_467118]))))));
					b = (NI64)((NU64)(b) + (NU64)((NI64)((NU64)(b) << (NU64)(IL64(10)))));
					b = (NI64)(b ^ (NI64)((NU64)(b) >> (NU64)(IL64(6))));
					res_467189 += ((NI) 1);
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
			NI i_467139;
			NI HEX3Atmp_467195;
			NI res_467198;
			i_467139 = 0;
			HEX3Atmp_467195 = 0;
			HEX3Atmp_467195 = (NI)((s ? s->Sup.len : 0) - ((NI) 1));
			res_467198 = ((NI) 0);
			{
				while (1) {
					if (!(res_467198 <= HEX3Atmp_467195)) goto LA11;
					i_467139 = res_467198;
					a = (NI32)((NU32)(a) + (NU32)(((NI32) (((NU8)(s->data[i_467139]))))));
					a = (NI32)((NU32)(a) + (NU32)((NI32)((NU32)(a) << (NU32)(((NI32) 10)))));
					a = (NI32)(a ^ (NI32)((NU32)(a) >> (NU32)(((NI32) 6))));
					res_467198 += ((NI) 1);
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

N_NIMCALL(void, resetcaches_467424)(void) {
	inittypetables_467212();
	{
		NU8 i_467435;
		NI res_467439;
		i_467435 = 0;
		res_467439 = ((NI) 0);
		{
			while (1) {
				if (!(res_467439 <= ((NI) 61))) goto LA3;
				i_467435 = ((NU8) (res_467439));
				asgnRefNoCycle((void**) (&gcanonicaltypes_467209[(i_467435)- 0]), NIM_NIL);
				res_467439 += ((NI) 1);
			} LA3: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, compiler_ccgutilsInit000)(void) {
	inittypetables_467212();
}

NIM_EXTERNC N_NOINLINE(void, compiler_ccgutilsDatInit000)(void) {
}

