/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tcgen470026 Tcgen470026;
typedef struct Tllstream203204 Tllstream203204;
typedef struct Tbaselexer204015 Tbaselexer204015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tidtable215840 Tidtable215840;
typedef struct Tidobj190006 Tidobj190006;
typedef struct Ttype215828 Ttype215828;
typedef struct Ttypeseq215824 Ttypeseq215824;
typedef struct Tnode215790 Tnode215790;
typedef struct Tsym215822 Tsym215822;
typedef struct Tloc215804 Tloc215804;
typedef struct Ropeobj170006 Ropeobj170006;
typedef struct Tpasscontext262002 Tpasscontext262002;
typedef struct Tidpairseq215838 Tidpairseq215838;
typedef struct Intset212035 Intset212035;
typedef struct Trunk212031 Trunk212031;
typedef struct Trunkseq212033 Trunkseq212033;
typedef struct Tlinkedlist135016 Tlinkedlist135016;
typedef struct Tlistentry135010 Tlistentry135010;
typedef struct Tcproc470022 Tcproc470022;
typedef struct Tnodetable215852 Tnodetable215852;
typedef struct Tnodepairseq215850 Tnodepairseq215850;
typedef struct Tsymseq215792 Tsymseq215792;
typedef struct Tlineinfo183337 Tlineinfo183337;
typedef struct Tnodeseq215784 Tnodeseq215784;
typedef struct TY183350 TY183350;
typedef struct TY470094 TY470094;
typedef struct Tblock470020 Tblock470020;
typedef struct Tmergesections471642 Tmergesections471642;
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
typedef struct Tidpair215836 Tidpair215836;
typedef struct Tident190012 Tident190012;
typedef struct Tscope215816 Tscope215816;
typedef struct TY215925 TY215925;
typedef struct Tstrtable215794 Tstrtable215794;
typedef struct Tlib215808 Tlib215808;
typedef struct Tnodepair215848 Tnodepair215848;
typedef struct Basechunk29638 Basechunk29638;
typedef struct Freecell29630 Freecell29630;
typedef struct Tinstantiation215812 Tinstantiation215812;
typedef struct TY215913 TY215913;
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
struct  Tbaselexer204015  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Tllstream203204* stream;
NI linenumber;
NI sentinel;
NI linestart;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tidobj190006  {
  TNimObject Sup;
NI id;
};
struct  Tloc215804  {
NU8 k;
NU8 s;
NU16 flags;
Ttype215828* t;
Ropeobj170006* r;
Ropeobj170006* heaproot;
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
struct  Tpasscontext262002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
typedef Ropeobj170006* Tcfilesections470010[18];
struct  Tidtable215840  {
NI counter;
Tidpairseq215838* data;
};
struct  Intset212035  {
NI counter;
NI max;
Trunk212031* head;
Trunkseq212033* data;
};
struct  Tlinkedlist135016  {
Tlistentry135010* head;
Tlistentry135010* tail;
NI counter;
};
struct  Tnodetable215852  {
NI counter;
Tnodepairseq215850* data;
};
typedef Ropeobj170006* TY470132[10];
struct  Tcgen470026  {
  Tpasscontext262002 Sup;
Tsym215822* module;
NimStringDesc* filename;
Tcfilesections470010 s;
NIM_BOOL preventstacktrace;
NIM_BOOL usesthreadvars;
NIM_BOOL framedeclared;
NIM_BOOL isheaderfile;
NIM_BOOL includesstringh;
NIM_BOOL objhaskidsvalid;
NimStringDesc* cfilename;
Tidtable215840 typecache;
Tidtable215840 forwtypecache;
Intset212035 declaredthings;
Intset212035 declaredprotos;
Tlinkedlist135016 headerfiles;
Intset212035 typeinfomarker;
Tcproc470022* initproc;
Tcproc470022* postinitproc;
Tcproc470022* preinitproc;
Ttypeseq215824* typestack;
Tnodetable215852 datacache;
Tsymseq215792* forwardedprocs;
NI typenodes;
NI nimtypes;
Ropeobj170006* typenodesname;
Ropeobj170006* nimtypesname;
NI labels;
TY470132 extensionloaders;
Ropeobj170006* injectstmt;
};
struct  Tlineinfo183337  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tcproc470022  {
Tsym215822* prc;
NIM_BOOL beforeretneeded;
NIM_BOOL threadvaraccessed;
Tlineinfo183337 lastlineinfo;
Tnodeseq215784* nestedtrystmts;
NI inexceptblock;
TY183350* finallysafepoints;
NI labels;
TY470094* blocks;
NI breakidx;
NU32 options;
NI maxframelen;
Tcgen470026* module;
NI withinloop;
NI splitdecls;
NI gcframeid;
Ropeobj170006* gcframetype;
};
typedef Ropeobj170006* Tcprocsections470014[3];
struct  Tblock470020  {
NI id;
Ropeobj170006* label;
Tcprocsections470014 sections;
NIM_BOOL isloop;
NI16 nestedtrystmts;
NI16 nestedexceptstmts;
NI16 framelen;
};
struct  Tmergesections471642  {
Tcfilesections470010 f;
Tcprocsections470014 p;
};
typedef NimStringDesc* TY471006[18];
typedef NimStringDesc* TY471012[3];
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
struct  Tidpair215836  {
Tidobj190006* key;
TNimObject* val;
};
typedef NI TY29619[8];
struct  Trunk212031  {
Trunk212031* next;
NI key;
TY29619 bits;
};
struct  Tllstream203204  {
  TNimObject Sup;
NU8 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
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
struct  Tstrtable215794  {
NI counter;
Tsymseq215792* data;
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
struct  Tnodepair215848  {
NI h;
Tnode215790* key;
NI val;
};
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
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
struct  Tident190012  {
  Tidobj190006 Sup;
NimStringDesc* s;
Tident190012* next;
NI h;
};
struct  Tscope215816  {
NI depthlevel;
Tstrtable215794 symbols;
Tnodeseq215784* usingsyms;
Tscope215816* parent;
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
struct Ttypeseq215824 {
  TGenericSeq Sup;
  Ttype215828* data[SEQ_DECL_SIZE];
};
struct Tidpairseq215838 {
  TGenericSeq Sup;
  Tidpair215836 data[SEQ_DECL_SIZE];
};
struct Trunkseq212033 {
  TGenericSeq Sup;
  Trunk212031* data[SEQ_DECL_SIZE];
};
struct Tnodepairseq215850 {
  TGenericSeq Sup;
  Tnodepair215848 data[SEQ_DECL_SIZE];
};
struct Tsymseq215792 {
  TGenericSeq Sup;
  Tsym215822* data[SEQ_DECL_SIZE];
};
struct Tnodeseq215784 {
  TGenericSeq Sup;
  Tnode215790* data[SEQ_DECL_SIZE];
};
struct TY183350 {
  TGenericSeq Sup;
  Ropeobj170006* data[SEQ_DECL_SIZE];
};
struct TY470094 {
  TGenericSeq Sup;
  Tblock470020 data[SEQ_DECL_SIZE];
};
struct TY215925 {
  TGenericSeq Sup;
  Tinstantiation215812* data[SEQ_DECL_SIZE];
};
struct TY215913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tllstream203204*, llstreamopen_203241)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, openbaselexer_204023)(Tbaselexer204015* L, Tllstream203204* inputstream, NI buflen);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(void, skipuntilcmd_471251)(Tbaselexer204015* L);
N_NIMCALL(NI, handlecr_204042)(Tbaselexer204015* L, NI pos);
N_NIMCALL(NI, handlelf_204047)(Tbaselexer204015* L, NI pos);
N_NIMCALL(void, readkey_471328)(Tbaselexer204015* L, NimStringDesc** result);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, internalerror_188113)(NimStringDesc* errmsg);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(void, processmergeinfo_471433)(Tbaselexer204015* L, Tcgen470026* m);
N_NIMCALL(void, skipwhite_471236)(Tbaselexer204015* L);
N_NIMCALL(void, readtypecache_471368)(Tbaselexer204015* L, Tidtable215840* result);
N_NIMCALL(NI, decodevint_221265)(NCSTRING s, NI* pos);
N_NIMCALL(NimStringDesc*, decodestr_221111)(NCSTRING s, NI* pos);
N_NIMCALL(void, idtableput_222115)(Tidtable215840* t, Tidobj190006* key, TNimObject* val);
N_NIMCALL(Ttype215828*, newfaketype_471356)(NI id);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(Ropeobj170006*, rope_170277)(NimStringDesc* s);
N_NIMCALL(void, readintset_471406)(Tbaselexer204015* L, Intset212035* result);
N_NIMCALL(void, incl_212832)(Intset212035* s, NI key);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(void, closebaselexer_204030)(Tbaselexer204015* L);
static N_INLINE(Ropeobj170006**, s_470166)(Tcproc470022* p, NU8 s);
N_NIMCALL(void, readmergesections_471645)(NimStringDesc* cfilename, Tmergesections471642* m);
N_NIMCALL(Ropeobj170006*, readverbatimsection_471300)(Tbaselexer204015* L);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NIM_BOOL, atendmark_471284)(NCSTRING buf, NI pos);
static N_INLINE(NI, find_471684)(TY471006 a, NimStringDesc* item);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(NI, find_471755)(TY471012 a, NimStringDesc* item);
N_NIMCALL(Ropeobj170006*, HEX26_170418)(Ropeobj170006* a, Ropeobj170006* b);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell47504*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_53001)(Cell47504* c);
N_NOINLINE(void, addzct_51417)(Cellseq47520* s, Cell47504* c);
N_NIMCALL(void, add_170487)(Ropeobj170006** a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(void, writetypecache_471148)(Tidtable215840 a, NimStringDesc** s);
N_NIMCALL(void, encodevint_221212)(NI x, NimStringDesc** result);
N_NIMCALL(void, encodestr_221018)(NimStringDesc* s, NimStringDesc** result);
N_NIMCALL(NimStringDesc*, HEX24_170856)(Ropeobj170006* r);
N_NIMCALL(void, writeintset_471176)(Intset212035* a, NimStringDesc** s);
STRING_LITERAL(TMP4466, "ccgmerge: \':\' expected", 22);
STRING_LITERAL(TMP4467, "NIM_merge_INFO", 14);
STRING_LITERAL(TMP4468, "typeCache", 9);
STRING_LITERAL(TMP4469, "declared", 8);
STRING_LITERAL(TMP4470, "typeInfo", 8);
STRING_LITERAL(TMP4471, "labels", 6);
STRING_LITERAL(TMP4472, "hasframe", 8);
STRING_LITERAL(TMP4473, "ccgmerge: \'{\' expected", 22);
STRING_LITERAL(TMP4474, "ccgmerge: unknown key: ", 23);
STRING_LITERAL(TMP4542, "ccgmerge: expected: /*\011NIM_merge_END:*/", 39);
STRING_LITERAL(TMP4543, "/*\011NIM_merge_END:*/", 19);
STRING_LITERAL(TMP4544, "", 0);
STRING_LITERAL(TMP4545, "NIM_merge_HEADERS", 17);
STRING_LITERAL(TMP4546, "NIM_merge_FORWARD_TYPES", 23);
STRING_LITERAL(TMP4547, "NIM_merge_TYPES", 15);
STRING_LITERAL(TMP4548, "NIM_merge_SEQ_TYPES", 19);
STRING_LITERAL(TMP4549, "NIM_merge_FIELD_INFO", 20);
STRING_LITERAL(TMP4550, "NIM_merge_TYPE_INFO", 19);
STRING_LITERAL(TMP4551, "NIM_merge_PROC_HEADERS", 22);
STRING_LITERAL(TMP4552, "NIM_merge_DATA", 14);
STRING_LITERAL(TMP4553, "NIM_merge_VARS", 14);
STRING_LITERAL(TMP4554, "NIM_merge_PROCS", 15);
STRING_LITERAL(TMP4555, "NIM_merge_INIT_PROC", 19);
STRING_LITERAL(TMP4556, "NIM_merge_TYPE_INIT1", 20);
STRING_LITERAL(TMP4557, "NIM_merge_TYPE_INIT2", 20);
STRING_LITERAL(TMP4558, "NIM_merge_TYPE_INIT3", 20);
STRING_LITERAL(TMP4559, "NIM_merge_DEBUG_INIT", 20);
STRING_LITERAL(TMP4560, "NIM_merge_DYNLIB_INIT", 21);
STRING_LITERAL(TMP4561, "NIM_merge_DYNLIB_DEINIT", 23);
NIM_CONST TY471006 Cfilesectionnames_471003 = {((NimStringDesc*) &TMP4544),
((NimStringDesc*) &TMP4545),
((NimStringDesc*) &TMP4546),
((NimStringDesc*) &TMP4547),
((NimStringDesc*) &TMP4548),
((NimStringDesc*) &TMP4549),
((NimStringDesc*) &TMP4550),
((NimStringDesc*) &TMP4551),
((NimStringDesc*) &TMP4552),
((NimStringDesc*) &TMP4553),
((NimStringDesc*) &TMP4554),
((NimStringDesc*) &TMP4555),
((NimStringDesc*) &TMP4556),
((NimStringDesc*) &TMP4557),
((NimStringDesc*) &TMP4558),
((NimStringDesc*) &TMP4559),
((NimStringDesc*) &TMP4560),
((NimStringDesc*) &TMP4561)}
;
STRING_LITERAL(TMP4562, "NIM_merge_PROC_LOCALS", 21);
STRING_LITERAL(TMP4563, "NIM_merge_PROC_INIT", 19);
STRING_LITERAL(TMP4564, "NIM_merge_PROC_BODY", 19);
NIM_CONST TY471012 Cprocsectionnames_471009 = {((NimStringDesc*) &TMP4562),
((NimStringDesc*) &TMP4563),
((NimStringDesc*) &TMP4564)}
;
STRING_LITERAL(TMP4565, "ccgmerge: unknown section: ", 27);
STRING_LITERAL(TMP4566, "ccgmerge: \'*/\' expected", 23);
STRING_LITERAL(TMP4570, "/*\011", 3);
STRING_LITERAL(TMP4571, ":*/", 3);
STRING_LITERAL(TMP4579, "/*\011NIM_merge_INFO:", 18);
STRING_LITERAL(TMP4580, "typeCache:{", 11);
STRING_LITERAL(TMP4581, "declared:{", 10);
STRING_LITERAL(TMP4582, "typeInfo:{", 10);
STRING_LITERAL(TMP4583, "labels:", 7);
STRING_LITERAL(TMP4584, " hasframe:", 10);
STRING_LITERAL(TMP4585, "*/", 2);
extern TNimType NTI204015; /* TBaseLexer */
extern TNimType NTI215786; /* PType */
extern TNimType NTI215828; /* TType */
extern NimStringDesc* tnl_168618;
extern Gcheap49818 gch_49859;
extern NU32 gglobaloptions_161121;

N_NIMCALL(void, skipuntilcmd_471251)(Tbaselexer204015* L) {
	NI pos;
	pos = (*L).bufpos;
	{
		while (1) {
			switch (((NU8)((*L).buf[pos]))) {
			case 13:
			{
				pos = handlecr_204042(L, pos);
			}
			break;
			case 10:
			{
				pos = handlelf_204047(L, pos);
			}
			break;
			case 0:
			{
				goto LA1;
			}
			break;
			case 47:
			{
				{
					NIM_BOOL LOC9;
					LOC9 = 0;
					LOC9 = ((NU8)((*L).buf[(NI)(pos + ((NI) 1))]) == (NU8)(42));
					if (!(LOC9)) goto LA10;
					LOC9 = ((NU8)((*L).buf[(NI)(pos + ((NI) 2))]) == (NU8)(9));
					LA10: ;
					if (!LOC9) goto LA11;
					pos += ((NI) 3);
					goto LA1;
				}
				LA11: ;
				pos += ((NI) 1);
			}
			break;
			default:
			{
				pos += ((NI) 1);
			}
			break;
			}
		}
	} LA1: ;
	(*L).bufpos = pos;
}

N_NIMCALL(void, readkey_471328)(Tbaselexer204015* L, NimStringDesc** result) {
	NI pos;
	NCSTRING buf;
	pos = (*L).bufpos;
	buf = (*L).buf;
	(*result) = setLengthStr((*result), ((NI) 0));
	{
		while (1) {
			if (!(((NU8)(buf[pos])) >= ((NU8)(97)) && ((NU8)(buf[pos])) <= ((NU8)(122)) || ((NU8)(buf[pos])) >= ((NU8)(65)) && ((NU8)(buf[pos])) <= ((NU8)(90)) || ((NU8)(buf[pos])) >= ((NU8)(48)) && ((NU8)(buf[pos])) <= ((NU8)(57)) || ((NU8)(buf[pos])) == ((NU8)(95)))) goto LA2;
			(*result) = addChar((*result), buf[pos]);
			pos += ((NI) 1);
		} LA2: ;
	}
	{
		if (!!(((NU8)(buf[pos]) == (NU8)(58)))) goto LA5;
		internalerror_188113(((NimStringDesc*) &TMP4466));
	}
	LA5: ;
	(*L).bufpos = (NI)(pos + ((NI) 1));
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

N_NIMCALL(void, skipwhite_471236)(Tbaselexer204015* L) {
	NI pos;
	pos = (*L).bufpos;
	{
		while (1) {
			switch (((NU8)((*L).buf[pos]))) {
			case 13:
			{
				pos = handlecr_204042(L, pos);
			}
			break;
			case 10:
			{
				pos = handlelf_204047(L, pos);
			}
			break;
			case 32:
			{
				pos += ((NI) 1);
			}
			break;
			default:
			{
				goto LA1;
			}
			break;
			}
		}
	} LA1: ;
	(*L).bufpos = pos;
}

N_NIMCALL(Ttype215828*, newfaketype_471356)(NI id) {
	Ttype215828* result;
	result = 0;
	result = (Ttype215828*) newObj((&NTI215786), sizeof(Ttype215828));
	(*result).Sup.Sup.m_type = (&NTI215828);
	(*result).Sup.id = id;
	return result;
}

N_NIMCALL(void, readtypecache_471368)(Tbaselexer204015* L, Tidtable215840* result) {
	{
		if (!!(((NU8)((*L).buf[(*L).bufpos]) == (NU8)(123)))) goto LA3;
		internalerror_188113(((NimStringDesc*) &TMP4473));
	}
	LA3: ;
	(*L).bufpos += ((NI) 1);
	{
		while (1) {
			NI key;
			NimStringDesc* value;
			Ttype215828* LOC11;
			Tidobj190006* LOC12;
			Ropeobj170006* LOC13;
			TNimObject* LOC14;
			if (!!(((NU8)((*L).buf[(*L).bufpos]) == (NU8)(125)))) goto LA6;
			skipwhite_471236(L);
			key = decodevint_221265((*L).buf, (&(*L).bufpos));
			{
				if (!!(((NU8)((*L).buf[(*L).bufpos]) == (NU8)(58)))) goto LA9;
				internalerror_188113(((NimStringDesc*) &TMP4466));
			}
			LA9: ;
			(*L).bufpos += ((NI) 1);
			value = decodestr_221111((*L).buf, (&(*L).bufpos));
			LOC11 = 0;
			LOC11 = newfaketype_471356(key);
			LOC12 = 0;
			LOC12 = &LOC11->Sup;
			LOC13 = 0;
			LOC13 = rope_170277(value);
			LOC14 = 0;
			LOC14 = &LOC13->Sup;
			idtableput_222115(result, LOC12, LOC14);
		} LA6: ;
	}
	(*L).bufpos += ((NI) 1);
}

N_NIMCALL(void, readintset_471406)(Tbaselexer204015* L, Intset212035* result) {
	{
		if (!!(((NU8)((*L).buf[(*L).bufpos]) == (NU8)(123)))) goto LA3;
		internalerror_188113(((NimStringDesc*) &TMP4473));
	}
	LA3: ;
	(*L).bufpos += ((NI) 1);
	{
		while (1) {
			NI key;
			if (!!(((NU8)((*L).buf[(*L).bufpos]) == (NU8)(125)))) goto LA6;
			skipwhite_471236(L);
			key = decodevint_221265((*L).buf, (&(*L).bufpos));
			incl_212832(result, key);
		} LA6: ;
	}
	(*L).bufpos += ((NI) 1);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, processmergeinfo_471433)(Tbaselexer204015* L, Tcgen470026* m) {
	NimStringDesc* k;
	k = rawNewString(((NI) 9));
	{
		while (1) {
			skipwhite_471236(L);
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = ((NU8)((*L).buf[(*L).bufpos]) == (NU8)(42));
				if (!(LOC5)) goto LA6;
				LOC5 = ((NU8)((*L).buf[(NI)((*L).bufpos + ((NI) 1))]) == (NU8)(47));
				LA6: ;
				if (!LOC5) goto LA7;
				(*L).bufpos += ((NI) 2);
				goto LA1;
			}
			LA7: ;
			readkey_471328(L, (&k));
			if (eqStrings(k, ((NimStringDesc*) &TMP4468))) goto LA9;
			if (eqStrings(k, ((NimStringDesc*) &TMP4469))) goto LA10;
			if (eqStrings(k, ((NimStringDesc*) &TMP4470))) goto LA11;
			if (eqStrings(k, ((NimStringDesc*) &TMP4471))) goto LA12;
			if (eqStrings(k, ((NimStringDesc*) &TMP4472))) goto LA13;
			goto LA14;
			LA9: ;
			{
				readtypecache_471368(L, (&(*m).typecache));
			}
			goto LA15;
			LA10: ;
			{
				readintset_471406(L, (&(*m).declaredthings));
			}
			goto LA15;
			LA11: ;
			{
				readintset_471406(L, (&(*m).typeinfomarker));
			}
			goto LA15;
			LA12: ;
			{
				NI LOC20;
				LOC20 = 0;
				LOC20 = decodevint_221265((*L).buf, (&(*L).bufpos));
				(*m).labels = ((NI) (LOC20));
			}
			goto LA15;
			LA13: ;
			{
				NI LOC22;
				LOC22 = 0;
				LOC22 = decodevint_221265((*L).buf, (&(*L).bufpos));
				(*m).framedeclared = !((LOC22 == ((NI) 0)));
			}
			goto LA15;
			LA14: ;
			{
				NimStringDesc* LOC24;
				LOC24 = 0;
				LOC24 = rawNewString(k->Sup.len + 23);
appendString(LOC24, ((NimStringDesc*) &TMP4474));
appendString(LOC24, k);
				internalerror_188113(LOC24);
			}
			LA15: ;
		}
	} LA1: ;
}

N_NIMCALL(void, readmergeinfo_471613)(NimStringDesc* cfilename, Tcgen470026* m) {
	Tllstream203204* s_471618;
	Tbaselexer204015 L;
	NimStringDesc* k;
{	s_471618 = llstreamopen_203241(cfilename, ((NU8) 0));
	{
		if (!(s_471618 == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	memset((void*)(&L), 0, sizeof(L));
	L.Sup.m_type = (&NTI204015);
	openbaselexer_204023((&L), s_471618, ((NI) 8192));
	k = rawNewString(((NI) 23));
	{
		while (1) {
			skipuntilcmd_471251((&L));
			{
				if (!((NU8)(L.buf[L.bufpos]) == (NU8)(0))) goto LA9;
				goto LA5;
			}
			LA9: ;
			readkey_471328((&L), (&k));
			{
				if (!eqStrings(k, ((NimStringDesc*) &TMP4467))) goto LA13;
				processmergeinfo_471433((&L), m);
				goto LA5;
			}
			LA13: ;
		}
	} LA5: ;
	closebaselexer_204030((&L));
	}BeforeRet: ;
}

static N_INLINE(Ropeobj170006**, s_470166)(Tcproc470022* p, NU8 s) {
	Ropeobj170006** result;
	result = 0;
	result = &(*p).blocks->data[(NI)(((*p).blocks ? (*p).blocks->Sup.len : 0) - ((NI) 1))].sections[(s)- 0];
	return result;
}

N_NIMCALL(NIM_BOOL, mergerequired_471832)(Tcgen470026* m) {
	NIM_BOOL result;
{	result = 0;
	{
		NU8 i_472014;
		NI res_472230;
		i_472014 = 0;
		res_472230 = ((NI) 1);
		{
			while (1) {
				if (!(res_472230 <= ((NI) 10))) goto LA3;
				i_472014 = ((NU8) (res_472230));
				{
					if (!!(((*m).s[(i_472014)- 0] == NIM_NIL))) goto LA6;
					result = NIM_TRUE;
					goto BeforeRet;
				}
				LA6: ;
				res_472230 += ((NI) 1);
			} LA3: ;
		}
	}
	{
		NU8 i_472214;
		NI res_472238;
		i_472214 = 0;
		res_472238 = ((NI) 0);
		{
			while (1) {
				if (!(res_472238 <= ((NI) 2))) goto LA10;
				i_472214 = ((NU8) (res_472238));
				{
					Ropeobj170006** LOC13;
					LOC13 = 0;
					LOC13 = s_470166((*m).initproc, i_472214);
					if (!!(((*LOC13) == NIM_NIL))) goto LA14;
					result = NIM_TRUE;
					goto BeforeRet;
				}
				LA14: ;
				res_472238 += ((NI) 1);
			} LA10: ;
		}
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, atendmark_471284)(NCSTRING buf, NI pos) {
	NIM_BOOL result;
	NI s;
	result = 0;
	s = ((NI) 0);
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = (s < ((NI) 19));
			if (!(LOC3)) goto LA4;
			LOC3 = ((NU8)(buf[(NI)(pos + s)]) == (NU8)(((NimStringDesc*) &TMP4543)->data[s]));
			LA4: ;
			if (!LOC3) goto LA2;
			s += ((NI) 1);
		} LA2: ;
	}
	result = (s == ((NI) 19));
	return result;
}

N_NIMCALL(Ropeobj170006*, readverbatimsection_471300)(Tbaselexer204015* L) {
	Ropeobj170006* result;
	NI pos;
	NCSTRING buf;
	NimStringDesc* r;
	result = 0;
	pos = (*L).bufpos;
	buf = (*L).buf;
	r = rawNewString(((NI) 30000));
	{
		while (1) {
			switch (((NU8)(buf[pos]))) {
			case 13:
			{
				pos = handlecr_204042(L, pos);
				buf = (*L).buf;
				r = resizeString(r, tnl_168618->Sup.len + 0);
appendString(r, tnl_168618);
			}
			break;
			case 10:
			{
				pos = handlelf_204047(L, pos);
				buf = (*L).buf;
				r = resizeString(r, tnl_168618->Sup.len + 0);
appendString(r, tnl_168618);
			}
			break;
			case 0:
			{
				internalerror_188113(((NimStringDesc*) &TMP4542));
				goto LA1;
			}
			break;
			default:
			{
				{
					NIM_BOOL LOC9;
					LOC9 = 0;
					LOC9 = atendmark_471284(buf, pos);
					if (!LOC9) goto LA10;
					pos += ((NI) 19);
					goto LA1;
				}
				LA10: ;
				r = addChar(r, buf[pos]);
				pos += ((NI) 1);
			}
			break;
			}
		}
	} LA1: ;
	(*L).bufpos = pos;
	result = rope_170277(r);
	return result;
}

static N_INLINE(NI, find_471684)(TY471006 a, NimStringDesc* item) {
	NI result;
{	result = 0;
	{
		NimStringDesc* i_471737;
		NU8 i_471750;
		i_471737 = 0;
		i_471750 = ((NU8) 0);
		{
			if (!(i_471750 <= ((NU8) 17))) goto LA4;
			{
				while (1) {
					i_471737 = a[(i_471750)- 0];
					{
						if (!eqStrings(i_471737, item)) goto LA10;
						goto BeforeRet;
					}
					LA10: ;
					result += ((NI) 1);
					{
						if (!(((NU8) 17) <= i_471750)) goto LA14;
						goto LA6;
					}
					LA14: ;
					i_471750 += ((NI) 1);
				}
			} LA6: ;
		}
		LA4: ;
	}
	result = ((NI) -1);
	}BeforeRet: ;
	return result;
}

static N_INLINE(NI, find_471755)(TY471012 a, NimStringDesc* item) {
	NI result;
{	result = 0;
	{
		NimStringDesc* i_471808;
		NU8 i_471821;
		i_471808 = 0;
		i_471821 = ((NU8) 0);
		{
			if (!(i_471821 <= ((NU8) 2))) goto LA4;
			{
				while (1) {
					i_471808 = a[(i_471821)- 0];
					{
						if (!eqStrings(i_471808, item)) goto LA10;
						goto BeforeRet;
					}
					LA10: ;
					result += ((NI) 1);
					{
						if (!(((NU8) 2) <= i_471821)) goto LA14;
						goto LA6;
					}
					LA14: ;
					i_471821 += ((NI) 1);
				}
			} LA6: ;
		}
		LA4: ;
	}
	result = ((NI) -1);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, readmergesections_471645)(NimStringDesc* cfilename, Tmergesections471642* m) {
	Tllstream203204* s_471651;
	Tbaselexer204015 L;
	NimStringDesc* k;
{	s_471651 = llstreamopen_203241(cfilename, ((NU8) 0));
	{
		if (!(s_471651 == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	memset((void*)(&L), 0, sizeof(L));
	L.Sup.m_type = (&NTI204015);
	openbaselexer_204023((&L), s_471651, ((NI) 8192));
	k = rawNewString(((NI) 23));
	{
		while (1) {
			skipuntilcmd_471251((&L));
			{
				if (!((NU8)(L.buf[L.bufpos]) == (NU8)(0))) goto LA9;
				goto LA5;
			}
			LA9: ;
			readkey_471328((&L), (&k));
			{
				if (!eqStrings(k, ((NimStringDesc*) &TMP4467))) goto LA13;
			}
			goto LA11;
			LA13: ;
			{
				NIM_BOOL LOC16;
				Ropeobj170006* verbatim;
				NI sectiona;
				LOC16 = 0;
				LOC16 = ((NU8)(L.buf[L.bufpos]) == (NU8)(42));
				if (!(LOC16)) goto LA17;
				LOC16 = ((NU8)(L.buf[(NI)(L.bufpos + ((NI) 1))]) == (NU8)(47));
				LA17: ;
				if (!LOC16) goto LA18;
				L.bufpos += ((NI) 2);
				skipwhite_471236((&L));
				verbatim = readverbatimsection_471300((&L));
				skipwhite_471236((&L));
				sectiona = find_471684(Cfilesectionnames_471003, k);
				{
					NIM_BOOL LOC22;
					LOC22 = 0;
					LOC22 = (((NI) 0) < sectiona);
					if (!(LOC22)) goto LA23;
					LOC22 = (sectiona <= ((NI) 17));
					LA23: ;
					if (!LOC22) goto LA24;
					unsureAsgnRef((void**) (&(*m).f[(sectiona)- 0]), verbatim);
				}
				goto LA20;
				LA24: ;
				{
					NI sectionb;
					sectionb = find_471755(Cprocsectionnames_471009, k);
					{
						NIM_BOOL LOC29;
						LOC29 = 0;
						LOC29 = (((NI) 0) <= sectionb);
						if (!(LOC29)) goto LA30;
						LOC29 = (sectionb <= ((NI) 2));
						LA30: ;
						if (!LOC29) goto LA31;
						unsureAsgnRef((void**) (&(*m).p[(sectionb)- 0]), verbatim);
					}
					goto LA27;
					LA31: ;
					{
						NimStringDesc* LOC34;
						LOC34 = 0;
						LOC34 = rawNewString(k->Sup.len + 27);
appendString(LOC34, ((NimStringDesc*) &TMP4565));
appendString(LOC34, k);
						internalerror_188113(LOC34);
					}
					LA27: ;
				}
				LA20: ;
			}
			goto LA11;
			LA18: ;
			{
				internalerror_188113(((NimStringDesc*) &TMP4566));
			}
			LA11: ;
		}
	} LA5: ;
	closebaselexer_204030((&L));
	}BeforeRet: ;
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

N_NIMCALL(void, mergefiles_472241)(NimStringDesc* cfilename, Tcgen470026* m) {
	Tmergesections471642 old;
	memset((void*)(&old), 0, sizeof(old));
	readmergesections_471645(cfilename, (&old));
	{
		NU8 i_472258;
		NI res_472277;
		i_472258 = 0;
		res_472277 = ((NI) 0);
		{
			while (1) {
				if (!(res_472277 <= ((NI) 17))) goto LA3;
				i_472258 = ((NU8) (res_472277));
				asgnRefNoCycle((void**) (&(*m).s[(i_472258)- 0]), HEX26_170418(old.f[(i_472258)- 0], (*m).s[(i_472258)- 0]));
				res_472277 += ((NI) 1);
			} LA3: ;
		}
	}
	{
		NU8 i_472270;
		NI res_472285;
		i_472270 = 0;
		res_472285 = ((NI) 0);
		{
			while (1) {
				Ropeobj170006** LOC7;
				Ropeobj170006** LOC8;
				if (!(res_472285 <= ((NI) 2))) goto LA6;
				i_472270 = ((NU8) (res_472285));
				LOC7 = 0;
				LOC7 = s_470166((*m).initproc, i_472270);
				LOC8 = 0;
				LOC8 = s_470166((*m).initproc, i_472270);
				unsureAsgnRef((void**) (&(*LOC7)), HEX26_170418(old.p[(i_472270)- 0], (*LOC8)));
				res_472285 += ((NI) 1);
			} LA6: ;
		}
	}
}

N_NIMCALL(Ropeobj170006*, gensectionstart_471082)(NU8 ps) {
	Ropeobj170006* result;
	result = 0;
	{
		if (!!(((49152 & gglobaloptions_161121) == 0))) goto LA3;
		result = rope_170277(tnl_168618);
		add_170487(&result, ((NimStringDesc*) &TMP4570));
		add_170487(&result, Cprocsectionnames_471009[(ps)- 0]);
		add_170487(&result, ((NimStringDesc*) &TMP4571));
		add_170487(&result, tnl_168618);
	}
	LA3: ;
	return result;
}

N_NIMCALL(Ropeobj170006*, gensectionend_471117)(NU8 ps) {
	Ropeobj170006* result;
	result = 0;
	{
		NimStringDesc* LOC5;
		if (!!(((49152 & gglobaloptions_161121) == 0))) goto LA3;
		LOC5 = 0;
		LOC5 = rawNewString(tnl_168618->Sup.len + 19);
appendString(LOC5, ((NimStringDesc*) &TMP4543));
appendString(LOC5, tnl_168618);
		result = rope_170277(LOC5);
	}
	LA3: ;
	return result;
}

N_NIMCALL(Ropeobj170006*, gensectionstart_471016)(NU8 fs) {
	Ropeobj170006* result;
	result = 0;
	{
		if (!!(((49152 & gglobaloptions_161121) == 0))) goto LA3;
		result = rope_170277(tnl_168618);
		add_170487(&result, ((NimStringDesc*) &TMP4570));
		add_170487(&result, Cfilesectionnames_471003[(fs)- 0]);
		add_170487(&result, ((NimStringDesc*) &TMP4571));
		add_170487(&result, tnl_168618);
	}
	LA3: ;
	return result;
}

N_NIMCALL(Ropeobj170006*, gensectionend_471051)(NU8 fs) {
	Ropeobj170006* result;
	result = 0;
	{
		NimStringDesc* LOC5;
		if (!!(((49152 & gglobaloptions_161121) == 0))) goto LA3;
		LOC5 = 0;
		LOC5 = rawNewString(tnl_168618->Sup.len + 19);
appendString(LOC5, ((NimStringDesc*) &TMP4543));
appendString(LOC5, tnl_168618);
		result = rope_170277(LOC5);
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, writetypecache_471148)(Tidtable215840 a, NimStringDesc** s) {
	NI i;
	i = ((NI) 0);
	{
		NI id_471154;
		TNimObject* value_471155;
		id_471154 = 0;
		value_471155 = 0;
		{
			NI i_471169;
			NI HEX3Atmp_471171;
			NI res_471173;
			i_471169 = 0;
			HEX3Atmp_471171 = 0;
			HEX3Atmp_471171 = (a.data ? (a.data->Sup.len-1) : -1);
			res_471173 = ((NI) 0);
			{
				while (1) {
					if (!(res_471173 <= HEX3Atmp_471171)) goto LA4;
					i_471169 = res_471173;
					{
						NimStringDesc* LOC14;
						if (!!((a.data->data[i_471169].key == NIM_NIL))) goto LA7;
						id_471154 = (*a.data->data[i_471169].key).id;
						value_471155 = a.data->data[i_471169].val;
						{
							if (!(i == ((NI) 10))) goto LA11;
							i = ((NI) 0);
							(*s) = resizeString((*s), tnl_168618->Sup.len + 0);
appendString((*s), tnl_168618);
						}
						goto LA9;
						LA11: ;
						{
							(*s) = addChar((*s), 32);
						}
						LA9: ;
						encodevint_221212(id_471154, s);
						(*s) = addChar((*s), 58);
						LOC14 = 0;
						LOC14 = HEX24_170856(((Ropeobj170006*) (value_471155)));
						encodestr_221018(LOC14, s);
						i += ((NI) 1);
					}
					LA7: ;
					res_471173 += ((NI) 1);
				} LA4: ;
			}
		}
	}
	(*s) = addChar((*s), 125);
}

N_NIMCALL(void, writeintset_471176)(Intset212035* a, NimStringDesc** s) {
	NI i;
	i = ((NI) 0);
	{
		NI x_471182;
		Trunk212031* r_471197;
		x_471182 = 0;
		r_471197 = (*a).head;
		{
			while (1) {
				NI i_471199;
				if (!!((r_471197 == NIM_NIL))) goto LA3;
				i_471199 = ((NI) 0);
				{
					while (1) {
						NI w_471201;
						NI j_471203;
						if (!(i_471199 <= ((NI) 7))) goto LA5;
						w_471201 = (*r_471197).bits[(i_471199)- 0];
						j_471203 = ((NI) 0);
						{
							while (1) {
								if (!!((w_471201 == ((NI) 0)))) goto LA7;
								{
									if (!!((((NI) ((NI)(w_471201 & ((NI) 1)))) == ((NI) 0)))) goto LA10;
									x_471182 = (NI)((NI)((NU64)((*r_471197).key) << (NU64)(((NI) 9))) | (NI)((NU64)((NI)((NU64)(i_471199) << (NU64)(((NI) 6)))) + (NU64)(j_471203)));
									{
										if (!(i == ((NI) 10))) goto LA14;
										i = ((NI) 0);
										(*s) = resizeString((*s), tnl_168618->Sup.len + 0);
appendString((*s), tnl_168618);
									}
									goto LA12;
									LA14: ;
									{
										(*s) = addChar((*s), 32);
									}
									LA12: ;
									encodevint_221212(x_471182, s);
									i += ((NI) 1);
								}
								LA10: ;
								j_471203 += ((NI) 1);
								w_471201 = (NI)((NU64)(w_471201) >> (NU64)(((NI) 1)));
							} LA7: ;
						}
						i_471199 += ((NI) 1);
					} LA5: ;
				}
				r_471197 = (*r_471197).next;
			} LA3: ;
		}
	}
	(*s) = addChar((*s), 125);
}

N_NIMCALL(Ropeobj170006*, genmergeinfo_471204)(Tcgen470026* m) {
	Ropeobj170006* result;
	NimStringDesc* s;
{	result = 0;
	{
		if (!!(((gglobaloptions_161121 &(1U<<((NU)(((NU8) 14))&31U)))!=0))) goto LA3;
		result = NIM_NIL;
		goto BeforeRet;
	}
	LA3: ;
	s = copyString(((NimStringDesc*) &TMP4579));
	s = resizeString(s, tnl_168618->Sup.len + 0);
appendString(s, tnl_168618);
	s = resizeString(s, 11);
appendString(s, ((NimStringDesc*) &TMP4580));
	writetypecache_471148((*m).typecache, (&s));
	s = resizeString(s, 10);
appendString(s, ((NimStringDesc*) &TMP4581));
	writeintset_471176((&(*m).declaredthings), (&s));
	s = resizeString(s, 10);
appendString(s, ((NimStringDesc*) &TMP4582));
	writeintset_471176((&(*m).typeinfomarker), (&s));
	s = resizeString(s, 7);
appendString(s, ((NimStringDesc*) &TMP4583));
	encodevint_221212(((NI) ((*m).labels)), (&s));
	s = resizeString(s, 10);
appendString(s, ((NimStringDesc*) &TMP4584));
	encodevint_221212(((NI) ((*m).framedeclared)), (&s));
	s = resizeString(s, tnl_168618->Sup.len + 0);
appendString(s, tnl_168618);
	s = resizeString(s, 2);
appendString(s, ((NimStringDesc*) &TMP4585));
	result = rope_170277(s);
	}BeforeRet: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_ccgmergeInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_ccgmergeDatInit000)(void) {
}

