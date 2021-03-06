/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
typedef struct Rstnode314008 Rstnode314008;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Rstnodeseq314006 Rstnodeseq314006;
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
typedef struct Basechunk29638 Basechunk29638;
typedef struct Freecell29630 Freecell29630;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Rstnode314008  {
NU8 kind;
NimStringDesc* text;
NI level;
Rstnodeseq314006* sons;
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
struct  Freecell29630  {
Freecell29630* next;
NI zerofield;
};
struct Rstnodeseq314006 {
  TGenericSeq Sup;
  Rstnode314008* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP2607)(void* p, NI op);
N_NIMCALL(void, TMP2608)(void* p, NI op);
N_NIMCALL(Rstnode314008*, newrstnode_314093)(NU8 kind);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell47504*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_53001)(Cell47504* c);
N_NOINLINE(void, addzct_51417)(Cellseq47520* s, Cell47504* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, add_314138)(Rstnode314008* father, Rstnode314008* son);
TNimType NTI314008; /* RstNode */
TNimType NTI314002; /* RstNodeKind */
extern TNimType NTI138; /* string */
extern TNimType NTI104; /* int */
TNimType NTI314006; /* RstNodeSeq */
TNimType NTI314004; /* PRstNode */
extern Gcheap49818 gch_49859;

N_NIMCALL(NI, len_314081)(Rstnode314008* n) {
	NI result;
	result = 0;
	result = ((*n).sons ? (*n).sons->Sup.len : 0);
	return result;
}

N_NIMCALL(Rstnode314008*, lastson_314126)(Rstnode314008* n) {
	Rstnode314008* result;
	result = 0;
	result = (*n).sons->data[(NI)(((*n).sons ? (*n).sons->Sup.len : 0) - ((NI) 1))];
	return result;
}
N_NIMCALL(void, TMP2607)(void* p, NI op) {
	Rstnodeseq314006* a;
	NI LOC1;
	a = (Rstnodeseq314006*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}
N_NIMCALL(void, TMP2608)(void* p, NI op) {
	Rstnode314008* a;
	a = (Rstnode314008*)p;
	nimGCvisit((void*)(*a).text, op);
	nimGCvisit((void*)(*a).sons, op);
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

N_NIMCALL(Rstnode314008*, newrstnode_314093)(NU8 kind) {
	Rstnode314008* result;
	result = 0;
	result = (Rstnode314008*) newObj((&NTI314004), sizeof(Rstnode314008));
	if ((*result).sons) nimGCunrefNoCycle((*result).sons);
	(*result).sons = (Rstnodeseq314006*) newSeqRC1((&NTI314006), 0);
	(*result).kind = kind;
	return result;
}

N_NIMCALL(Rstnode314008*, newrstnode_314121)(NU8 kind, NimStringDesc* s) {
	Rstnode314008* result;
	NimStringDesc* LOC1;
	result = 0;
	result = newrstnode_314093(kind);
	LOC1 = 0;
	LOC1 = (*result).text; (*result).text = copyStringRC1(s);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	return result;
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

N_NIMCALL(void, add_314138)(Rstnode314008* father, Rstnode314008* son) {
	(*father).sons = (Rstnodeseq314006*) incrSeqV2(&((*father).sons)->Sup, sizeof(Rstnode314008*));
	asgnRefNoCycle((void**) (&(*father).sons->data[(*father).sons->Sup.len]), son);
	++(*father).sons->Sup.len;
}

N_NIMCALL(void, addifnotnil_314152)(Rstnode314008* father, Rstnode314008* son) {
	{
		if (!!((son == NIM_NIL))) goto LA3;
		add_314138(father, son);
	}
	LA3: ;
}
NIM_EXTERNC N_NOINLINE(void, docutils_rstastInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, docutils_rstastDatInit000)(void) {
static TNimNode* TMP2603[4];
static TNimNode* TMP2604[65];
NI TMP2606;
static char* NIM_CONST TMP2605[65] = {
"rnInner", 
"rnHeadline", 
"rnOverline", 
"rnTransition", 
"rnParagraph", 
"rnBulletList", 
"rnBulletItem", 
"rnEnumList", 
"rnEnumItem", 
"rnDefList", 
"rnDefItem", 
"rnDefName", 
"rnDefBody", 
"rnFieldList", 
"rnField", 
"rnFieldName", 
"rnFieldBody", 
"rnOptionList", 
"rnOptionListItem", 
"rnOptionGroup", 
"rnOption", 
"rnOptionString", 
"rnOptionArgument", 
"rnDescription", 
"rnLiteralBlock", 
"rnQuotedLiteralBlock", 
"rnLineBlock", 
"rnLineBlockItem", 
"rnBlockQuote", 
"rnTable", 
"rnGridTable", 
"rnTableRow", 
"rnTableHeaderCell", 
"rnTableDataCell", 
"rnLabel", 
"rnFootnote", 
"rnCitation", 
"rnStandaloneHyperlink", 
"rnHyperlink", 
"rnRef", 
"rnDirective", 
"rnDirArg", 
"rnRaw", 
"rnTitle", 
"rnContents", 
"rnImage", 
"rnFigure", 
"rnCodeBlock", 
"rnRawHtml", 
"rnRawLatex", 
"rnContainer", 
"rnIndex", 
"rnSubstitutionDef", 
"rnGeneralRole", 
"rnSub", 
"rnSup", 
"rnIdx", 
"rnEmphasis", 
"rnStrongEmphasis", 
"rnTripleEmphasis", 
"rnInterpretedText", 
"rnInlineLiteral", 
"rnSubstitutionReferences", 
"rnSmiley", 
"rnLeaf"};
static TNimNode TMP967[71];
NTI314008.size = sizeof(Rstnode314008);
NTI314008.kind = 18;
NTI314008.base = 0;
NTI314008.flags = 2;
TMP2603[0] = &TMP967[1];
NTI314002.size = sizeof(NU8);
NTI314002.kind = 14;
NTI314002.base = 0;
NTI314002.flags = 3;
for (TMP2606 = 0; TMP2606 < 65; TMP2606++) {
TMP967[TMP2606+2].kind = 1;
TMP967[TMP2606+2].offset = TMP2606;
TMP967[TMP2606+2].name = TMP2605[TMP2606];
TMP2604[TMP2606] = &TMP967[TMP2606+2];
}
TMP967[67].len = 65; TMP967[67].kind = 2; TMP967[67].sons = &TMP2604[0];
NTI314002.node = &TMP967[67];
TMP967[1].kind = 1;
TMP967[1].offset = offsetof(Rstnode314008, kind);
TMP967[1].typ = (&NTI314002);
TMP967[1].name = "kind";
TMP2603[1] = &TMP967[68];
TMP967[68].kind = 1;
TMP967[68].offset = offsetof(Rstnode314008, text);
TMP967[68].typ = (&NTI138);
TMP967[68].name = "text";
TMP2603[2] = &TMP967[69];
TMP967[69].kind = 1;
TMP967[69].offset = offsetof(Rstnode314008, level);
TMP967[69].typ = (&NTI104);
TMP967[69].name = "level";
TMP2603[3] = &TMP967[70];
NTI314006.size = sizeof(Rstnodeseq314006*);
NTI314006.kind = 24;
NTI314006.base = (&NTI314004);
NTI314006.flags = 2;
NTI314006.marker = TMP2607;
TMP967[70].kind = 1;
TMP967[70].offset = offsetof(Rstnode314008, sons);
TMP967[70].typ = (&NTI314006);
TMP967[70].name = "sons";
TMP967[0].len = 4; TMP967[0].kind = 2; TMP967[0].sons = &TMP2603[0];
NTI314008.node = &TMP967[0];
NTI314004.size = sizeof(Rstnode314008*);
NTI314004.kind = 22;
NTI314004.base = (&NTI314008);
NTI314004.flags = 2;
NTI314004.marker = TMP2608;
}

