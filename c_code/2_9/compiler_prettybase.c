/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct TY269010 TY269010;
typedef struct Tsourcefile269002 Tsourcefile269002;
typedef struct TY125202 TY125202;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell47504 Cell47504;
typedef struct Cellseq47520 Cellseq47520;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Cellset47516 Cellset47516;
typedef struct Pagedesc47512 Pagedesc47512;
typedef struct Memregion29688 Memregion29688;
typedef struct Smallchunk29640 Smallchunk29640;
typedef struct Llchunk29682 Llchunk29682;
typedef struct Bigchunk29642 Bigchunk29642;
typedef struct Intset29614 Intset29614;
typedef struct Trunk29610 Trunk29610;
typedef struct Avlnode29686 Avlnode29686;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Tlineinfo183337 Tlineinfo183337;
typedef struct Tsym215822 Tsym215822;
typedef struct Tident190012 Tident190012;
typedef struct TY118706 TY118706;
typedef struct Baselexer266009 Baselexer266009;
typedef struct TNimObject TNimObject;
typedef struct Streamobj144418 Streamobj144418;
typedef struct Filestreamobj145248 Filestreamobj145248;
typedef struct Slice88082 Slice88082;
typedef struct Tidobj190006 Tidobj190006;
typedef struct Ttypeseq215824 Ttypeseq215824;
typedef struct Tscope215816 Tscope215816;
typedef struct TY215925 TY215925;
typedef struct Tstrtable215794 Tstrtable215794;
typedef struct Tsymseq215792 Tsymseq215792;
typedef struct Ttype215828 Ttype215828;
typedef struct Tnode215790 Tnode215790;
typedef struct Tloc215804 Tloc215804;
typedef struct Ropeobj170006 Ropeobj170006;
typedef struct Tlib215808 Tlib215808;
typedef struct Basechunk29638 Basechunk29638;
typedef struct Freecell29630 Freecell29630;
typedef struct Tnodeseq215784 Tnodeseq215784;
typedef struct Tinstantiation215812 Tinstantiation215812;
typedef struct Tlistentry135010 Tlistentry135010;
typedef struct TY215913 TY215913;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tsourcefile269002  {
TY125202* lines;
NIM_BOOL dirty;
NIM_BOOL isnimfixfile;
NimStringDesc* fullpath;
NimStringDesc* newline;
NI32 fileidx;
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
struct  Cell47504  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47520  {
NI len;
NI cap;
Cell47504** d;
};
struct  Cellset47516  {
NI counter;
NI max;
Pagedesc47512* head;
Pagedesc47512** data;
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
Cellseq47520 zct;
Cellseq47520 decstack;
Cellset47516 cycleroots;
Cellseq47520 tempstack;
NI recgclock;
Memregion29688 region;
Gcstat49814 stat;
};
struct  Tlineinfo183337  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct TY118706 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
struct  TNimObject  {
TNimType* m_type;
};
typedef NU8 TY203404[32];
struct  Baselexer266009  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Streamobj144418* input;
NI linenumber;
NI sentinel;
NI linestart;
TY203404 refillchars;
};
struct  Slice88082  {
NI a;
NI b;
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
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY29619[8];
struct  Pagedesc47512  {
Pagedesc47512* next;
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
typedef N_NIMCALL_PTR(void, TY144419) (Streamobj144418* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY144423) (Streamobj144418* s);
typedef N_NIMCALL_PTR(void, TY144427) (Streamobj144418* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY144432) (Streamobj144418* s);
typedef N_NIMCALL_PTR(NI, TY144436) (Streamobj144418* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(NI, TY144442) (Streamobj144418* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY144448) (Streamobj144418* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY144454) (Streamobj144418* s);
struct  Streamobj144418  {
  TNimObject Sup;
TY144419 closeimpl;
TY144423 atendimpl;
TY144427 setpositionimpl;
TY144432 getpositionimpl;
TY144436 readdataimpl;
TY144442 peekdataimpl;
TY144448 writedataimpl;
TY144454 flushimpl;
};
struct  Filestreamobj145248  {
  Streamobj144418 Sup;
FILE* f;
};
struct  Tscope215816  {
NI depthlevel;
Tstrtable215794 symbols;
Tnodeseq215784* usingsyms;
Tscope215816* parent;
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
struct  Freecell29630  {
Freecell29630* next;
NI zerofield;
};
struct  Tinstantiation215812  {
Tsym215822* sym;
Ttypeseq215824* concretetypes;
TY215913* usedby;
NI compilesid;
};
struct TY269010 {
  TGenericSeq Sup;
  Tsourcefile269002 data[SEQ_DECL_SIZE];
};
struct TY125202 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
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
struct Tnodeseq215784 {
  TGenericSeq Sup;
  Tnode215790* data[SEQ_DECL_SIZE];
};
struct TY215913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP946)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell47504*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_53001)(Cell47504* c);
N_NOINLINE(void, addzct_51417)(Cellseq47520* s, Cell47504* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void, replacedeprecated_269154)(Tlineinfo183337 info, Tident190012* oldsym, Tident190012* newsym);
N_NIMCALL(void, loadfile_269029)(Tlineinfo183337 info);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(NimStringDesc*, tofullpath_184266)(NI32 fileidx);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY118706* Result);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(FILE*, open_15417)(NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, readline_15513)(FILE* f, NimStringDesc** line);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(void, open_268223)(Baselexer266009* L, Streamobj144418* input, NI buflen, TY203404 refillchars);
N_NIMCALL(Filestreamobj145248*, newfilestream_145313)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, close_266022)(Baselexer266009* L);
N_NIMCALL(NI, identlen_269111)(NimStringDesc* line, NI start);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NimStringDesc*, HEX5BHEX5D_88075)(NimStringDesc* s, Slice88082 x);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_79810, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
static N_INLINE(Slice88082, HEX2EHEX2E_102424)(NI a, NI b);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
STRING_LITERAL(TMP2826, ".nimfix", 7);
static NIM_CONST TY203404 TMP2835 = {
0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2836, "\015\012", 2);
STRING_LITERAL(TMP2837, "\012", 1);
TY269010* gsourcefiles_269027;
TNimType NTI269002; /* TSourceFile */
extern TNimType NTI125202; /* seq[string] */
extern TNimType NTI130; /* bool */
extern TNimType NTI138; /* string */
extern TNimType NTI110; /* int32 */
TNimType NTI269010; /* seq[TSourceFile] */
extern Gcheap49818 gch_49859;
extern TNimType NTI266009; /* BaseLexer */
N_NIMCALL(void, TMP946)(void* p, NI op) {
	TY269010* a;
	NI LOC1;
	a = (TY269010*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].lines, op);
	nimGCvisit((void*)a->data[LOC1].fullpath, op);
	nimGCvisit((void*)a->data[LOC1].newline, op);
	}
}

static N_INLINE(Cell47504*, usrtocell_51440)(void* usr) {
	Cell47504* result;
	result = 0;
	result = ((Cell47504*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell47504))))));
	return result;
}

static N_INLINE(void, rtladdzct_53001)(Cell47504* c) {
	addzct_51417((&gch_49859.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell47504* c;
	c = usrtocell_51440(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_53001(c);
	}
	LA3: ;
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

N_NIMCALL(void, loadfile_269029)(Tlineinfo183337 info) {
	NI32 i;
	i = info.fileindex;
	{
		if (!((gsourcefiles_269027 ? gsourcefiles_269027->Sup.len : 0) <= ((NI) (i)))) goto LA3;
		gsourcefiles_269027 = (TY269010*) setLengthSeq(&(gsourcefiles_269027)->Sup, sizeof(Tsourcefile269002), ((NI) ((NI32)(i + ((NI32) 1)))));
	}
	LA3: ;
	{
		NimStringDesc* path;
		NimStringDesc* LOC9;
		TY118706 LOC10;
		Baselexer266009 lex;
		Filestreamobj145248* LOC16;
		Streamobj144418* LOC17;
		NI pos;
		if (!gsourcefiles_269027->data[i].lines == 0) goto LA7;
		gsourcefiles_269027->data[i].fileidx = info.fileindex;
		if (gsourcefiles_269027->data[i].lines) nimGCunrefNoCycle(gsourcefiles_269027->data[i].lines);
		gsourcefiles_269027->data[i].lines = (TY125202*) newSeqRC1((&NTI125202), 0);
		path = tofullpath_184266(info.fileindex);
		LOC9 = 0;
		LOC9 = gsourcefiles_269027->data[i].fullpath; gsourcefiles_269027->data[i].fullpath = copyStringRC1(path);
		if (LOC9) nimGCunrefNoCycle(LOC9);
		memset((void*)(&LOC10), 0, sizeof(LOC10));
		nossplitFile(path, (&LOC10));
		gsourcefiles_269027->data[i].isnimfixfile = eqStrings(LOC10.Field2, ((NimStringDesc*) &TMP2826));
		{
			NimStringDesc* line_269076;
			FILE* f_269103;
			NimStringDesc* res_269105;
			line_269076 = 0;
			f_269103 = open_15417(path, ((NU8) 0), ((NI) 8000));
			res_269105 = rawNewString(((NI) 80));
			{
				while (1) {
					NIM_BOOL LOC14;
					NimStringDesc* LOC15;
					LOC14 = 0;
					LOC14 = readline_15513(f_269103, (&res_269105));
					if (!LOC14) goto LA13;
					line_269076 = res_269105;
					gsourcefiles_269027->data[i].lines = (TY125202*) incrSeqV2(&(gsourcefiles_269027->data[i].lines)->Sup, sizeof(NimStringDesc*));
					LOC15 = 0;
					LOC15 = gsourcefiles_269027->data[i].lines->data[gsourcefiles_269027->data[i].lines->Sup.len]; gsourcefiles_269027->data[i].lines->data[gsourcefiles_269027->data[i].lines->Sup.len] = copyStringRC1(line_269076);
					if (LOC15) nimGCunrefNoCycle(LOC15);
					++gsourcefiles_269027->data[i].lines->Sup.len;
				} LA13: ;
			}
			fclose(f_269103);
		}
		memset((void*)(&lex), 0, sizeof(lex));
		lex.Sup.m_type = (&NTI266009);
		LOC16 = 0;
		LOC16 = newfilestream_145313(path, ((NU8) 0));
		LOC17 = 0;
		LOC17 = &LOC16->Sup;
		open_268223((&lex), LOC17, ((NI) 8192), TMP2835);
		pos = lex.bufpos;
		{
			while (1) {
				switch (((NU8)(lex.buf[pos]))) {
				case 13:
				{
					NimStringDesc* LOC21;
					LOC21 = 0;
					LOC21 = gsourcefiles_269027->data[i].newline; gsourcefiles_269027->data[i].newline = copyStringRC1(((NimStringDesc*) &TMP2836));
					if (LOC21) nimGCunrefNoCycle(LOC21);
					goto LA18;
				}
				break;
				case 10:
				case 0:
				{
					NimStringDesc* LOC23;
					LOC23 = 0;
					LOC23 = gsourcefiles_269027->data[i].newline; gsourcefiles_269027->data[i].newline = copyStringRC1(((NimStringDesc*) &TMP2837));
					if (LOC23) nimGCunrefNoCycle(LOC23);
					goto LA18;
				}
				break;
				default:
				{
				}
				break;
				}
				pos += ((NI) 1);
			}
		} LA18: ;
		close_266022((&lex));
	}
	LA7: ;
}

N_NIMCALL(NI, identlen_269111)(NimStringDesc* line, NI start) {
	NI result;
	result = 0;
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = ((NI)(start + result) < (line ? line->Sup.len : 0));
			if (!(LOC3)) goto LA4;
			LOC3 = (((NU8)(line->data[(NI)(start + result)])) >= ((NU8)(97)) && ((NU8)(line->data[(NI)(start + result)])) <= ((NU8)(122)) || ((NU8)(line->data[(NI)(start + result)])) >= ((NU8)(65)) && ((NU8)(line->data[(NI)(start + result)])) <= ((NU8)(90)) || ((NU8)(line->data[(NI)(start + result)])) >= ((NU8)(48)) && ((NU8)(line->data[(NI)(start + result)])) <= ((NU8)(57)) || ((NU8)(line->data[(NI)(start + result)])) >= ((NU8)(128)) && ((NU8)(line->data[(NI)(start + result)])) <= ((NU8)(255)) || ((NU8)(line->data[(NI)(start + result)])) == ((NU8)(95)));
			LA4: ;
			if (!LOC3) goto LA2;
			result += ((NI) 1);
		} LA2: ;
	}
	return result;
}

static N_INLINE(NimStringDesc*, HEX5BHEX5D_88075)(NimStringDesc* s, Slice88082 x) {
	NimStringDesc* result;
	result = 0;
	result = copyStrLast(s, x.a, x.b);
	return result;
}

static N_INLINE(Slice88082, HEX2EHEX2E_102424)(NI a, NI b) {
	Slice88082 result;
	memset((void*)(&result), 0, sizeof(result));
	result.a = a;
	result.b = b;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell47504* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_51440(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47504* c;
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

N_NIMCALL(void, replacedeprecated_269154)(Tlineinfo183337 info, Tident190012* oldsym, Tident190012* newsym) {
	NimStringDesc* line;
	NI first;
	NI last;
	NI LOC17;
{	loadfile_269029(info);
	line = gsourcefiles_269027->data[info.fileindex].lines->data[(NI16)(info.line - ((NI16) 1))];
	first = ((((NI) (info.col)) <= (line ? line->Sup.len : 0)) ? ((NI) (info.col)) : (line ? line->Sup.len : 0));
	{
		if (!(first < ((NI) 0))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		while (1) {
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = (((NI) 0) < first);
			if (!(LOC7)) goto LA8;
			LOC7 = (((NU8)(line->data[(NI)(first - ((NI) 1))])) >= ((NU8)(97)) && ((NU8)(line->data[(NI)(first - ((NI) 1))])) <= ((NU8)(122)) || ((NU8)(line->data[(NI)(first - ((NI) 1))])) >= ((NU8)(65)) && ((NU8)(line->data[(NI)(first - ((NI) 1))])) <= ((NU8)(90)) || ((NU8)(line->data[(NI)(first - ((NI) 1))])) >= ((NU8)(48)) && ((NU8)(line->data[(NI)(first - ((NI) 1))])) <= ((NU8)(57)) || ((NU8)(line->data[(NI)(first - ((NI) 1))])) >= ((NU8)(128)) && ((NU8)(line->data[(NI)(first - ((NI) 1))])) <= ((NU8)(255)) || ((NU8)(line->data[(NI)(first - ((NI) 1))])) == ((NU8)(95)));
			LA8: ;
			if (!LOC7) goto LA6;
			first -= ((NI) 1);
		} LA6: ;
	}
	{
		if (!(first < ((NI) 0))) goto LA11;
		goto BeforeRet;
	}
	LA11: ;
	{
		if (!((NU8)(line->data[first]) == (NU8)(96))) goto LA15;
		first += ((NI) 1);
	}
	LA15: ;
	LOC17 = 0;
	LOC17 = identlen_269111(line, first);
	last = (NI)((NI)(first + LOC17) - ((NI) 1));
	{
		Slice88082 LOC20;
		NimStringDesc* LOC21;
		NI LOC22;
		NimStringDesc* x;
		NimStringDesc* LOC25;
		NimStringDesc* LOC26;
		NimStringDesc* LOC27;
		LOC20 = HEX2EHEX2E_102424(first, last);
		LOC21 = 0;
		LOC21 = HEX5BHEX5D_88075(line, LOC20);
		LOC22 = 0;
		LOC22 = nsuCmpIgnoreStyle(LOC21, (*oldsym).s);
		if (!(LOC22 == ((NI) 0))) goto LA23;
		LOC25 = 0;
		LOC26 = 0;
		LOC26 = copyStrLast(line, ((NI) 0), (NI)(first - ((NI) 1)));
		LOC27 = 0;
		LOC27 = copyStr(line, (NI)(last + ((NI) 1)));
		LOC25 = rawNewString(LOC26->Sup.len + (*newsym).s->Sup.len + LOC27->Sup.len + 0);
appendString(LOC25, LOC26);
appendString(LOC25, (*newsym).s);
appendString(LOC25, LOC27);
		x = LOC25;
		asgnRefNoCycle((void**) (&gsourcefiles_269027->data[info.fileindex].lines->data[(NI16)(info.line - ((NI16) 1))]), x);
		gsourcefiles_269027->data[info.fileindex].dirty = NIM_TRUE;
	}
	LA23: ;
	}BeforeRet: ;
}

N_NIMCALL(void, replacedeprecated_269207)(Tlineinfo183337 info, Tsym215822* oldsym, Tsym215822* newsym) {
	replacedeprecated_269154(info, (*oldsym).name, (*newsym).name);
}
NIM_EXTERNC N_NOINLINE(void, compiler_prettybaseInit000)(void) {
	if (gsourcefiles_269027) nimGCunrefNoCycle(gsourcefiles_269027);
	gsourcefiles_269027 = (TY269010*) newSeqRC1((&NTI269010), 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_prettybaseDatInit000)(void) {
static TNimNode* TMP945[6];
static TNimNode TMP941[7];
NTI269002.size = sizeof(Tsourcefile269002);
NTI269002.kind = 18;
NTI269002.base = 0;
NTI269002.flags = 2;
TMP945[0] = &TMP941[1];
TMP941[1].kind = 1;
TMP941[1].offset = offsetof(Tsourcefile269002, lines);
TMP941[1].typ = (&NTI125202);
TMP941[1].name = "lines";
TMP945[1] = &TMP941[2];
TMP941[2].kind = 1;
TMP941[2].offset = offsetof(Tsourcefile269002, dirty);
TMP941[2].typ = (&NTI130);
TMP941[2].name = "dirty";
TMP945[2] = &TMP941[3];
TMP941[3].kind = 1;
TMP941[3].offset = offsetof(Tsourcefile269002, isnimfixfile);
TMP941[3].typ = (&NTI130);
TMP941[3].name = "isNimfixFile";
TMP945[3] = &TMP941[4];
TMP941[4].kind = 1;
TMP941[4].offset = offsetof(Tsourcefile269002, fullpath);
TMP941[4].typ = (&NTI138);
TMP941[4].name = "fullpath";
TMP945[4] = &TMP941[5];
TMP941[5].kind = 1;
TMP941[5].offset = offsetof(Tsourcefile269002, newline);
TMP941[5].typ = (&NTI138);
TMP941[5].name = "newline";
TMP945[5] = &TMP941[6];
TMP941[6].kind = 1;
TMP941[6].offset = offsetof(Tsourcefile269002, fileidx);
TMP941[6].typ = (&NTI110);
TMP941[6].name = "fileIdx";
TMP941[0].len = 6; TMP941[0].kind = 2; TMP941[0].sons = &TMP945[0];
NTI269002.node = &TMP941[0];
NTI269010.size = sizeof(TY269010*);
NTI269010.kind = 24;
NTI269010.base = (&NTI269002);
NTI269010.flags = 2;
NTI269010.marker = TMP946;
}

