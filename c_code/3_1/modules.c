/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct tsymseq224821 tsymseq224821;
typedef struct tsym224849 tsym224849;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell44935 tcell44935;
typedef struct tcellseq44951 tcellseq44951;
typedef struct tgcheap47016 tgcheap47016;
typedef struct tcellset44947 tcellset44947;
typedef struct tpagedesc44943 tpagedesc44943;
typedef struct tmemregion27210 tmemregion27210;
typedef struct tsmallchunk26440 tsmallchunk26440;
typedef struct tllchunk27204 tllchunk27204;
typedef struct tbigchunk26442 tbigchunk26442;
typedef struct tintset26417 tintset26417;
typedef struct ttrunk26413 ttrunk26413;
typedef struct tavlnode27208 tavlnode27208;
typedef struct tgcstat47014 tgcstat47014;
typedef struct TY606058 TY606058;
typedef struct tmoduleinmemory606017 tmoduleinmemory606017;
typedef struct TY224939 TY224939;
typedef struct tnode224819 tnode224819;
typedef struct tidobj200015 tidobj200015;
typedef struct TNimObject TNimObject;
typedef struct ttypeseq224851 ttypeseq224851;
typedef struct ttype224855 ttype224855;
typedef struct tscope224843 tscope224843;
typedef struct TY224950 TY224950;
typedef struct tinstantiation224839 tinstantiation224839;
typedef struct tstrtable224823 tstrtable224823;
typedef struct tident200021 tident200021;
typedef struct tlineinfo195539 tlineinfo195539;
typedef struct tloc224833 tloc224833;
typedef struct trope177009 trope177009;
typedef struct tlib224837 tlib224837;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY117404 TY117404;
typedef struct trodreader275030 trodreader275030;
typedef struct tllstream211204 tllstream211204;
typedef struct TY84735 TY84735;
typedef struct TY544150 TY544150;
typedef struct tcgen544035 tcgen544035;
typedef struct tbasechunk26438 tbasechunk26438;
typedef struct tfreecell26430 tfreecell26430;
typedef struct tnodeseq224813 tnodeseq224813;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tindex275028 tindex275028;
typedef struct tiitable234274 tiitable234274;
typedef struct tiipairseq234272 tiipairseq234272;
typedef struct tiipair234270 tiipair234270;
typedef struct tidtable224867 tidtable224867;
typedef struct tidpairseq224865 tidpairseq224865;
typedef struct tidpair224863 tidpair224863;
typedef struct memfile273208 memfile273208;
typedef struct tpasscontext285005 tpasscontext285005;
typedef struct intset221056 intset221056;
typedef struct ttrunk221052 ttrunk221052;
typedef struct ttrunkseq221054 ttrunkseq221054;
typedef struct tlinkedlist127028 tlinkedlist127028;
typedef struct tcproc544031 tcproc544031;
typedef struct tnodetable224879 tnodetable224879;
typedef struct tnodepairseq224877 tnodepairseq224877;
typedef struct tnodepair224875 tnodepair224875;
typedef struct TY195552 TY195552;
typedef struct TY544102 TY544102;
typedef struct tblock544029 tblock544029;
struct  TGenericSeq  {
NI len;
NI reserved;
};
typedef N_NIMCALL_PTR(void, TY3089) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3094) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3089 marker;
TY3094 deepcopy;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tcell44935  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq44951  {
NI Len;
NI Cap;
tcell44935** D;
};
struct  tcellset44947  {
NI Counter;
NI Max;
tpagedesc44943* Head;
tpagedesc44943** Data;
};
typedef tsmallchunk26440* TY27222[512];
typedef ttrunk26413* ttrunkbuckets26415[256];
struct  tintset26417  {
ttrunkbuckets26415 Data;
};
struct  tmemregion27210  {
NI Minlargeobj;
NI Maxlargeobj;
TY27222 Freesmallchunks;
tllchunk27204* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26442* Freechunkslist;
tintset26417 Chunkstarts;
tavlnode27208* Root;
tavlnode27208* Deleted;
tavlnode27208* Last;
tavlnode27208* Freeavlnodes;
};
struct  tgcstat47014  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47016  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq44951 Zct;
tcellseq44951 Decstack;
tcellset44947 Cycleroots;
tcellseq44951 Tempstack;
NI Recgclock;
tmemregion27210 Region;
tgcstat47014 Stat;
};
struct  tmoduleinmemory606017  {
NF Compiledat;
NI32 Crc;
TY224939* Deps;
NU8 Needsrecompile;
NU8 Crcstatus;
};
typedef N_NIMCALL_PTR(tnode224819*, TY285069) (tsym224849* m, NI32 fileidx);
struct  TNimObject  {
TNimType* m_type;
};
struct  tidobj200015  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable224823  {
NI Counter;
tsymseq224821* Data;
};
struct  tlineinfo195539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tloc224833  {
NU8 K;
NU8 S;
NU8 Flags;
ttype224855* T;
trope177009* R;
trope177009* Heaproot;
};
struct  tsym224849  {
  tidobj200015 Sup;
NU8 Kind;
union {
struct {ttypeseq224851* Typeinstcache;
tscope224843* Typscope;
} S1;
struct {TY224950* Procinstcache;
tscope224843* Scope;
} S2;
struct {TY224950* Usedgenerics;
tstrtable224823 Tab;
} S3;
struct {tsym224849* Guard;
} S4;
} kindU;
NU16 Magic;
ttype224855* Typ;
tident200021* Name;
tlineinfo195539 Info;
tsym224849* Owner;
NU32 Flags;
tnode224819* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc224833 Loc;
tlib224837* Annex;
tnode224819* Constraint;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(tsym224849*, TY285064) (tsym224849* m, NI32 fileidx);
struct TY117404 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
struct  tident200021  {
  tidobj200015 Sup;
NimStringDesc* S;
tident200021* Next;
NI H;
};
struct TY84735 {
NimStringDesc* Field0;
NI Field1;
};
typedef NI TY26420[16];
struct  tpagedesc44943  {
tpagedesc44943* Next;
NI Key;
TY26420 Bits;
};
struct  tbasechunk26438  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26440  {
  tbasechunk26438 Sup;
tsmallchunk26440* Next;
tsmallchunk26440* Prev;
tfreecell26430* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27204  {
NI Size;
NI Acc;
tllchunk27204* Next;
};
struct  tbigchunk26442  {
  tbasechunk26438 Sup;
tbigchunk26442* Next;
tbigchunk26442* Prev;
NI Align;
NF Data;
};
struct  ttrunk26413  {
ttrunk26413* Next;
NI Key;
TY26420 Bits;
};
typedef tavlnode27208* TY27214[2];
struct  tavlnode27208  {
TY27214 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tnode224819  {
ttype224855* Typ;
tlineinfo195539 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym224849* Sym;
} S4;
struct {tident200021* Ident;
} S5;
struct {tnodeseq224813* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
struct  ttype224855  {
  tidobj200015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq224851* Sons;
tnode224819* N;
tsym224849* Owner;
tsym224849* Sym;
tsym224849* Destructor;
tsym224849* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc224833 Loc;
};
struct  tscope224843  {
NI Depthlevel;
tstrtable224823 Symbols;
tnodeseq224813* Usingsyms;
tscope224843* Parent;
};
struct  tinstantiation224839  {
tsym224849* Sym;
ttypeseq224851* Concretetypes;
TY224939* Usedby;
};
struct  trope177009  {
  TNimObject Sup;
trope177009* Left;
trope177009* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
};
struct  tlib224837  {
  tlistentry127022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope177009* Name;
tnode224819* Path;
};
struct  tiipair234270  {
NI Key;
NI Val;
};
struct  tiitable234274  {
NI Counter;
tiipairseq234272* Data;
};
struct  tindex275028  {
NI Lastidxkey;
NI Lastidxval;
tiitable234274 Tab;
NimStringDesc* R;
NI Offset;
};
struct  tidpair224863  {
tidobj200015* Key;
TNimObject* Val;
};
struct  tidtable224867  {
NI Counter;
tidpairseq224865* Data;
};
struct  memfile273208  {
void* Mem;
NI Size;
int Handle;
};
struct  trodreader275030  {
  TNimObject Sup;
NI Pos;
NCSTRING S;
NU32 Options;
NU8 Reason;
TY224939* Moddeps;
TY224939* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Methodsidx;
NimStringDesc* Filename;
tindex275028 Index;
tindex275028 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
tidtable224867 Syms;
memfile273208 Memfile;
tsymseq224821* Methods;
NimStringDesc* Origfile;
NIM_BOOL Inviewmode;
};
struct  tllstream211204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct  tpasscontext285005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
typedef trope177009* tcfilesections544019[18];
struct  intset221056  {
NI Counter;
NI Max;
ttrunk221052* Head;
ttrunkseq221054* Data;
};
struct  tlinkedlist127028  {
tlistentry127022* Head;
tlistentry127022* Tail;
NI Counter;
};
struct  tnodepair224875  {
NI H;
tnode224819* Key;
NI Val;
};
struct  tnodetable224879  {
NI Counter;
tnodepairseq224877* Data;
};
typedef trope177009* TY544138[10];
struct  tcgen544035  {
  tpasscontext285005 Sup;
tsym224849* Module;
NimStringDesc* Filename;
tcfilesections544019 S;
NIM_BOOL Preventstacktrace;
NIM_BOOL Usesthreadvars;
NIM_BOOL Framedeclared;
NIM_BOOL Isheaderfile;
NIM_BOOL Includesstringh;
NIM_BOOL Objhaskidsvalid;
NimStringDesc* Cfilename;
tidtable224867 Typecache;
tidtable224867 Forwtypecache;
intset221056 Declaredthings;
intset221056 Declaredprotos;
tlinkedlist127028 Headerfiles;
intset221056 Typeinfomarker;
tcproc544031* Initproc;
tcproc544031* Postinitproc;
tcproc544031* Preinitproc;
ttypeseq224851* Typestack;
tnodetable224879 Datacache;
tsymseq224821* Forwardedprocs;
NI Typenodes;
NI Nimtypes;
trope177009* Typenodesname;
trope177009* Nimtypesname;
NI Labels;
TY544138 Extensionloaders;
trope177009* Injectstmt;
};
struct  tfreecell26430  {
tfreecell26430* Next;
NI Zerofield;
};
struct  ttrunk221052  {
ttrunk221052* Next;
NI Key;
TY26420 Bits;
};
typedef trope177009* tcprocsections544023[3];
struct  tblock544029  {
NI Id;
trope177009* Label;
tcprocsections544023 Sections;
NIM_BOOL Isloop;
NI16 Nestedtrystmts;
NI16 Nestedexceptstmts;
NI16 Framelen;
};
struct  tcproc544031  {
tsym224849* Prc;
NIM_BOOL Beforeretneeded;
NIM_BOOL Threadvaraccessed;
tnodeseq224813* Nestedtrystmts;
NI Inexceptblock;
TY195552* Finallysafepoints;
NI Labels;
TY544102* Blocks;
NI Breakidx;
NU32 Options;
NI Maxframelen;
tcgen544035* Module;
NI Withinloop;
NI Gcframeid;
trope177009* Gcframetype;
};
struct tsymseq224821 {
  TGenericSeq Sup;
  tsym224849* data[SEQ_DECL_SIZE];
};
struct TY224939 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY606058 {
  TGenericSeq Sup;
  tmoduleinmemory606017 data[SEQ_DECL_SIZE];
};
struct ttypeseq224851 {
  TGenericSeq Sup;
  ttype224855* data[SEQ_DECL_SIZE];
};
struct TY224950 {
  TGenericSeq Sup;
  tinstantiation224839* data[SEQ_DECL_SIZE];
};
struct TY544150 {
  TGenericSeq Sup;
  tcgen544035* data[SEQ_DECL_SIZE];
};
struct tnodeseq224813 {
  TGenericSeq Sup;
  tnode224819* data[SEQ_DECL_SIZE];
};
struct tiipairseq234272 {
  TGenericSeq Sup;
  tiipair234270 data[SEQ_DECL_SIZE];
};
struct tidpairseq224865 {
  TGenericSeq Sup;
  tidpair224863 data[SEQ_DECL_SIZE];
};
struct ttrunkseq221054 {
  TGenericSeq Sup;
  ttrunk221052* data[SEQ_DECL_SIZE];
};
struct tnodepairseq224877 {
  TGenericSeq Sup;
  tnodepair224875 data[SEQ_DECL_SIZE];
};
struct TY195552 {
  TGenericSeq Sup;
  trope177009* data[SEQ_DECL_SIZE];
};
struct TY544102 {
  TGenericSeq Sup;
  tblock544029 data[SEQ_DECL_SIZE];
};
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44935*, usrtocell_48646)(void* usr);
static N_INLINE(void, rtladdzct_50204)(tcell44935* c);
N_NOINLINE(void, addzct_48617)(tcellseq44951* s, tcell44935* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP997)(void* p, NI op);
N_NIMCALL(tnode224819*, includemodule_606926)(tsym224849* s, NI32 fileidx);
N_NIMCALL(tnode224819*, parsefile_258041)(NI32 fileidx);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(void, adddep_606182)(tsym224849* x, NI32 dep);
N_NIMCALL(void, safeadd_606216)(TY224939** x_606224, NI32 y_606228);
N_NIMCALL(void, docrc_606164)(NI32 fileidx);
N_NIMCALL(NI32, crcfromfile_176046)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, tofilename_197025)(NI32 fileidx);
N_NIMCALL(tsym224849*, importmodule_606887)(tsym224849* s, NI32 fileidx);
N_NIMCALL(tsym224849*, compilemodule_606776)(NI32 fileidx, NU32 flags);
N_NIMCALL(tsym224849*, getmodule_606085)(NI32 fileidx);
N_NIMCALL(tsym224849*, newmodule_606649)(NI32 fileidx);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, tofullpath_197037)(NI32 fileidx);
N_NIMCALL(tident200021*, getident_200472)(NimStringDesc* identifier);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY117404* Result);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(NIM_BOOL, isnimidentifier_215316)(NimStringDesc* s);
N_NIMCALL(void, rawmessage_197733)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(tlineinfo195539, newlineinfo_196129)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(tsym224849*, newsym_225077)(NU8 symkind, tident200021* name, tsym224849* owner, tlineinfo195539 info);
N_NIMCALL(NimStringDesc*, getpackagename_169825)(NimStringDesc* path);
N_NIMCALL(void, initstrtable_225156)(tstrtable224823* x);
N_NIMCALL(void, strtableadd_234103)(tstrtable224823* t, tsym224849* n);
N_NIMCALL(trodreader275030*, handlesymbolfile_275071)(tsym224849* module);
N_NIMCALL(void, internalerror_197989)(NimStringDesc* errmsg);
static N_INLINE(NI, getid_223404)(void);
N_NIMCALL(void, processmodule_285056)(tsym224849* module, tllstream211204* stream, trodreader275030* rd);
N_NIMCALL(NU8, checkdepmem_606463)(NI32 fileidx);
N_NIMCALL(NIM_BOOL, crcchanged_606119)(NI32 fileidx);
N_NIMCALL(NimStringDesc*, HEX24_198109)(TY84735 x_198113);
N_NIMCALL(void, resetmodule_606402)(NI32 fileidx);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_51025)(tcell44935* c);
static N_INLINE(NIM_BOOL, canbecycleroot_48667)(tcell44935* c);
static N_INLINE(void, rtladdcycleroot_49429)(tcell44935* c);
N_NOINLINE(void, incl_45671)(tcellset44947* s, tcell44935* cell);
static N_INLINE(void, decref_50604)(tcell44935* c);
N_NIMCALL(void, resetsourcemap_414529)(NI32 fileidx);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_606232)(TY224939* x_606238, TY224939* y_606243);
N_NIMCALL(void, localerror_197938)(tlineinfo195539 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, wantmainmodule_607014)(void);
N_NIMCALL(void, fatal_197906)(tlineinfo195539 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NI32, fileinfoidx_195747)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NimStringDesc*, HEX2F_117099)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(void, compilesystemmodule_606988)(void);
N_NIMCALL(void, resetpackagecache_169605)(void);
STRING_LITERAL(TMP1421, "handleSymbolFile should have set the module\'s ID", 48);
STRING_LITERAL(TMP1424, "modules.nim", 11);
NIM_CONST TY84735 TMP1423 = {((NimStringDesc*) &TMP1424),
44}
;
STRING_LITERAL(TMP4102, "", 0);
STRING_LITERAL(TMP4103, "nim", 3);
STRING_LITERAL(TMP4104, "system.nim", 10);
STRING_LITERAL(TMP4819, "stdin", 5);
tsymseq224821* gcompiledmodules_606057;
extern TNimType NTI224821; /* TSymSeq */
extern tgcheap47016 gch_47044;
TY606058* gmemcachedata_606079;
TNimType NTI606017; /* TModuleInMemory */
extern TNimType NTI128; /* float */
extern TNimType NTI176010; /* TCrc32 */
extern TNimType NTI224939; /* seq[int32] */
TNimType NTI606013; /* TNeedRecompile */
TNimType NTI606015; /* TCrcStatus */
TNimType NTI606058; /* seq[TModuleInMemory] */
extern TY285069 gincludefile_285073;
extern NU32 gglobaloptions_169118;
extern TY285064 gimportmodule_285068;
extern TNimType NTI224817; /* PSym */
extern TNimType NTI224849; /* TSym */
extern NU8 gcmd_169120;
extern NI gfrontendid_223012;
extern NF glastcmdtime_169131;
extern TY544150* gmodules_544171;
tsym224849* stdinmodule_607088;
extern NimStringDesc* gprojectfull_169234;
extern tlineinfo195539 gcmdlineinfo_196192;
extern NI32 gprojectmainidx_169235;
extern NimStringDesc* libpath_169231;
extern tsym224849* systemmodule_281019;
extern NI32 systemfileidx_195643;

static N_INLINE(tcell44935*, usrtocell_48646)(void* usr) {
	tcell44935* result;
	result = 0;
	result = ((tcell44935*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell44935))))));
	return result;
}

static N_INLINE(void, rtladdzct_50204)(tcell44935* c) {
	addzct_48617(&gch_47044.Zct, c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell44935* c;
	c = usrtocell_48646(p);
	{
		(*c).Refcount -= 8;
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		rtladdzct_50204(c);
	}
	LA3: ;
}
N_NIMCALL(void, TMP997)(void* p, NI op) {
	TY606058* a;
	NI LOC1;
	a = (TY606058*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Deps, op);
	}
}

N_NIMCALL(void, adddep_606182)(tsym224849* x, NI32 dep) {
	{
		if (!(gmemcachedata_606079->Sup.len <= ((NI) (dep)))) goto LA3;
		gmemcachedata_606079 = (TY606058*) setLengthSeq(&(gmemcachedata_606079)->Sup, sizeof(tmoduleinmemory606017), ((NI) ((NI32)(dep + ((NI32) 1)))));
	}
	LA3: ;
	safeadd_606216(&gmemcachedata_606079->data[(*x).Position].Deps, dep);
}

N_NIMCALL(void, docrc_606164)(NI32 fileidx) {
	{
		NimStringDesc* LOC5;
		if (!(gmemcachedata_606079->data[fileidx].Crcstatus == ((NU8) 0))) goto LA3;
		LOC5 = 0;
		LOC5 = tofilename_197025(fileidx);
		gmemcachedata_606079->data[fileidx].Crc = crcfromfile_176046(LOC5);
	}
	LA3: ;
}

N_NIMCALL(tnode224819*, includemodule_606926)(tsym224849* s, NI32 fileidx) {
	tnode224819* result;
	result = 0;
	result = parsefile_258041(fileidx);
	{
		if (!((gglobaloptions_169118 &(1<<((((NU8) 15))&31)))!=0)) goto LA3;
		{
			if (!(gmemcachedata_606079->Sup.len <= ((NI) (fileidx)))) goto LA7;
			gmemcachedata_606079 = (TY606058*) setLengthSeq(&(gmemcachedata_606079)->Sup, sizeof(tmoduleinmemory606017), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
		}
		LA7: ;
		adddep_606182(s, fileidx);
		docrc_606164(fileidx);
	}
	LA3: ;
	return result;
}

N_NIMCALL(tsym224849*, getmodule_606085)(NI32 fileidx) {
	tsym224849* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI32) 0) <= fileidx);
		if (!(LOC3)) goto LA4;
		LOC3 = (((NI) (fileidx)) < gcompiledmodules_606057->Sup.len);
		LA4: ;
		if (!LOC3) goto LA5;
		result = gcompiledmodules_606057->data[fileidx];
	}
	LA5: ;
	return result;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell44935* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_48646(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell44935* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_48646((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			rtladdzct_50204(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(tsym224849*, newmodule_606649)(NI32 fileidx) {
	tsym224849* result;
	NimStringDesc* filename;
	TY117404 LOC1;
	NimStringDesc* LOC7;
	tident200021* LOC8;
	result = 0;
	result = (tsym224849*) newObj((&NTI224817), sizeof(tsym224849));
	(*result).Sup.Sup.m_type = (&NTI224849);
	(*result).Sup.Id = -1;
	(*result).Kind = ((NU8) 6);
	filename = tofullpath_197037(fileidx);
	memset((void*)&LOC1, 0, sizeof(LOC1));
	nossplitFile(filename, &LOC1);
	asgnRefNoCycle((void**) &(*result).Name, getident_200472(LOC1.Field1));
	{
		NIM_BOOL LOC4;
		LOC4 = 0;
		LOC4 = isnimidentifier_215316((*(*result).Name).S);
		if (!!(LOC4)) goto LA5;
		rawmessage_197733(((NU16) 21), (*(*result).Name).S);
	}
	LA5: ;
	(*result).Info = newlineinfo_196129(fileidx, 1, 1);
	LOC7 = 0;
	LOC7 = getpackagename_169825(filename);
	LOC8 = 0;
	LOC8 = getident_200472(LOC7);
	asgnRefNoCycle((void**) &(*result).Owner, newsym_225077(((NU8) 24), LOC8, NIM_NIL, (*result).Info));
	(*result).Position = ((NI) (fileidx));
	{
		if (!(gmemcachedata_606079->Sup.len <= ((NI) (fileidx)))) goto LA11;
		gmemcachedata_606079 = (TY606058*) setLengthSeq(&(gmemcachedata_606079)->Sup, sizeof(tmoduleinmemory606017), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
	}
	LA11: ;
	{
		if (!(gcompiledmodules_606057->Sup.len <= ((NI) (fileidx)))) goto LA15;
		gcompiledmodules_606057 = (tsymseq224821*) setLengthSeq(&(gcompiledmodules_606057)->Sup, sizeof(tsym224849*), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
	}
	LA15: ;
	asgnRefNoCycle((void**) &gcompiledmodules_606057->data[(*result).Position], result);
	(*result).Flags |= ((NI32)1)<<((((NU8) 0))%(sizeof(NI32)*8));
	initstrtable_225156(&(*result).kindU.S3.Tab);
	strtableadd_234103(&(*result).kindU.S3.Tab, result);
	return result;
}

static N_INLINE(NI, getid_223404)(void) {
	NI result;
	result = 0;
	result = gfrontendid_223012;
	gfrontendid_223012 += 1;
	return result;
}

N_NIMCALL(NIM_BOOL, crcchanged_606119)(NI32 fileidx) {
	NIM_BOOL result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC7;
		LOC3 = 0;
		LOC3 = (((NI32) 0) <= fileidx);
		if (!(LOC3)) goto LA4;
		LOC3 = (((NI) (fileidx)) < gmemcachedata_606079->Sup.len);
		LA4: ;
		if (!!(LOC3)) goto LA5;
		LOC7 = 0;
		LOC7 = HEX24_198109(TMP1423);
		internalerror_197989(LOC7);
	}
	LA5: ;
	switch (gmemcachedata_606079->data[fileidx].Crcstatus) {
	case ((NU8) 2):
	{
		result = NIM_TRUE;
	}
	break;
	case ((NU8) 3):
	{
		result = NIM_FALSE;
	}
	break;
	case ((NU8) 1):
	{
		NI32 newcrc;
		NimStringDesc* LOC11;
		LOC11 = 0;
		LOC11 = tofilename_197025(fileidx);
		newcrc = crcfromfile_176046(LOC11);
		result = !((newcrc == gmemcachedata_606079->data[fileidx].Crc));
		gmemcachedata_606079->data[fileidx].Crc = newcrc;
		{
			if (!result) goto LA14;
			gmemcachedata_606079->data[fileidx].Crcstatus = ((NU8) 2);
		}
		goto LA12;
		LA14: ;
		{
			gmemcachedata_606079->data[fileidx].Crcstatus = ((NU8) 3);
		}
		LA12: ;
	}
	break;
	case ((NU8) 0):
	{
		NimStringDesc* LOC18;
		LOC18 = 0;
		LOC18 = tofilename_197025(fileidx);
		gmemcachedata_606079->data[fileidx].Crc = crcfromfile_176046(LOC18);
		result = NIM_TRUE;
		{
			if (!result) goto LA21;
			gmemcachedata_606079->data[fileidx].Crcstatus = ((NU8) 2);
		}
		goto LA19;
		LA21: ;
		{
			gmemcachedata_606079->data[fileidx].Crcstatus = ((NU8) 3);
		}
		LA19: ;
	}
	break;
	}
	return result;
}

static N_INLINE(NIM_BOOL, canbecycleroot_48667)(tcell44935* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_49429)(tcell44935* c) {
	{
		if (!!((((NI) ((NI)((*c).Refcount & 3))) == 3))) goto LA3;
		(*c).Refcount = (NI)((NI)((*c).Refcount & -4) | 3);
		incl_45671(&gch_47044.Cycleroots, c);
	}
	LA3: ;
}

static N_INLINE(void, incref_51025)(tcell44935* c) {
	(*c).Refcount = (NI)((NU32)((*c).Refcount) + (NU32)(8));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_48667(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_49429(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_50604)(tcell44935* c) {
	{
		(*c).Refcount -= 8;
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		rtladdzct_50204(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_48667(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_49429(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tcell44935* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_48646(src);
		incref_51025(LOC5);
	}
	LA3: ;
	{
		tcell44935* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_48646((*dest));
		decref_50604(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(void, resetmodule_606402)(NI32 fileidx) {
	gmemcachedata_606079->data[fileidx].Needsrecompile = ((NU8) 2);
	asgnRefNoCycle((void**) &gcompiledmodules_606057->data[fileidx], NIM_NIL);
	asgnRef((void**) &gmodules_544171->data[fileidx], NIM_NIL);
	resetsourcemap_414529(fileidx);
}

N_NIMCALL(NU8, checkdepmem_606463)(NI32 fileidx) {
	NU8 result;
	result = 0;
	{
		if (!!((gmemcachedata_606079->data[fileidx].Needsrecompile == ((NU8) 0)))) goto LA3;
		result = gmemcachedata_606079->data[fileidx].Needsrecompile;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = ((gglobaloptions_169118 &(1<<((((NU8) 1))&31)))!=0);
		if (LOC7) goto LA8;
		LOC7 = crcchanged_606119(fileidx);
		LA8: ;
		if (!LOC7) goto LA9;
		resetmodule_606402(fileidx);
		result = ((NU8) 2);
		goto BeforeRet;
	}
	LA9: ;
	{
		NIM_BOOL LOC13;
		LOC13 = 0;
		LOC13 = HEX3DHEX3D_606232(gmemcachedata_606079->data[fileidx].Deps, NIM_NIL);
		if (!!(LOC13)) goto LA14;
		gmemcachedata_606079->data[fileidx].Needsrecompile = ((NU8) 3);
		{
			NI32 dep_606611;
			TY224939* HEX3Atmp_606628;
			NI i_606631;
			NI l_606633;
			dep_606611 = 0;
			HEX3Atmp_606628 = 0;
			HEX3Atmp_606628 = gmemcachedata_606079->data[fileidx].Deps;
			i_606631 = 0;
			l_606633 = HEX3Atmp_606628->Sup.len;
			{
				while (1) {
					NU8 d;
					if (!(i_606631 < l_606633)) goto LA18;
					dep_606611 = HEX3Atmp_606628->data[i_606631];
					d = checkdepmem_606463(dep_606611);
					{
						if (!((20 &(1<<((d)&7)))!=0)) goto LA21;
						resetmodule_606402(fileidx);
						result = ((NU8) 2);
						goto BeforeRet;
					}
					LA21: ;
					i_606631 += 1;
				} LA18: ;
			}
		}
	}
	LA14: ;
	gmemcachedata_606079->data[fileidx].Needsrecompile = ((NU8) 1);
	result = ((NU8) 1);
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(tsym224849*, compilemodule_606776)(NI32 fileidx, NU32 flags) {
	tsym224849* result;
	result = 0;
	result = getmodule_606085(fileidx);
	{
		trodreader275030* rd;
		if (!(result == NIM_NIL)) goto LA3;
		{
			if (!(gmemcachedata_606079->Sup.len <= ((NI) (fileidx)))) goto LA7;
			gmemcachedata_606079 = (TY606058*) setLengthSeq(&(gmemcachedata_606079)->Sup, sizeof(tmoduleinmemory606017), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
		}
		LA7: ;
		gmemcachedata_606079->data[fileidx].Needsrecompile = ((NU8) 3);
		result = newmodule_606649(fileidx);
		rd = 0;
		(*result).Flags = ((*result).Flags | flags);
		{
			if (!((18438 &(1<<((gcmd_169120)&31)))!=0)) goto LA11;
			rd = handlesymbolfile_275071(result);
			{
				if (!((*result).Sup.Id < 0)) goto LA15;
				internalerror_197989(((NimStringDesc*) &TMP1421));
				goto BeforeRet;
			}
			LA15: ;
		}
		goto LA9;
		LA11: ;
		{
			(*result).Sup.Id = getid_223404();
		}
		LA9: ;
		processmodule_285056(result, NIM_NIL, rd);
		{
			if (!((gglobaloptions_169118 &(1<<((((NU8) 15))&31)))!=0)) goto LA20;
			gmemcachedata_606079->data[fileidx].Compiledat = glastcmdtime_169131;
			gmemcachedata_606079->data[fileidx].Needsrecompile = ((NU8) 4);
			docrc_606164(fileidx);
		}
		LA20: ;
	}
	goto LA1;
	LA3: ;
	{
		{
			NU8 LOC25;
			LOC25 = 0;
			LOC25 = checkdepmem_606463(fileidx);
			if (!(LOC25 == ((NU8) 2))) goto LA26;
			result = compilemodule_606776(fileidx, flags);
		}
		goto LA23;
		LA26: ;
		{
			result = gcompiledmodules_606057->data[fileidx];
		}
		LA23: ;
	}
	LA1: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(tsym224849*, importmodule_606887)(tsym224849* s, NI32 fileidx) {
	tsym224849* result;
	result = 0;
	result = compilemodule_606776(fileidx, 0);
	{
		if (!((gglobaloptions_169118 &(1<<((((NU8) 15))&31)))!=0)) goto LA3;
		adddep_606182(s, fileidx);
	}
	LA3: ;
	{
		if (!(((*result).Flags &(1<<((((NU8) 13))&31)))!=0)) goto LA7;
		localerror_197938((*result).Info, ((NU16) 40), (*(*result).Name).S);
	}
	LA7: ;
	return result;
}

N_NIMCALL(void, wantmainmodule_607014)(void) {
	NimStringDesc* LOC5;
	{
		if (!(gprojectfull_169234->Sup.len == 0)) goto LA3;
		fatal_197906(gcmdlineinfo_196192, ((NU16) 186), ((NimStringDesc*) &TMP4102));
	}
	LA3: ;
	LOC5 = 0;
	LOC5 = nosaddFileExt(gprojectfull_169234, ((NimStringDesc*) &TMP4103));
	gprojectmainidx_169235 = fileinfoidx_195747(LOC5);
}

N_NIMCALL(void, compilesystemmodule_606988)(void) {
	{
		NimStringDesc* LOC5;
		tsym224849* LOC6;
		if (!(systemmodule_281019 == NIM_NIL)) goto LA3;
		LOC5 = 0;
		LOC5 = HEX2F_117099(libpath_169231, ((NimStringDesc*) &TMP4104));
		systemfileidx_195643 = fileinfoidx_195747(LOC5);
		LOC6 = 0;
		LOC6 = compilemodule_606776(systemfileidx_195643, 8192);
	}
	LA3: ;
}

N_NIMCALL(void, compileproject_607073)(NI32 projectfileidx) {
	NI32 systemfileidx;
	NimStringDesc* LOC1;
	NI32 projectfile;
	wantmainmodule_607014();
	LOC1 = 0;
	LOC1 = HEX2F_117099(libpath_169231, ((NimStringDesc*) &TMP4104));
	systemfileidx = fileinfoidx_195747(LOC1);
	{
		if (!(projectfileidx < ((NI32) 0))) goto LA4;
		projectfile = gprojectmainidx_169235;
	}
	goto LA2;
	LA4: ;
	{
		projectfile = projectfileidx;
	}
	LA2: ;
	{
		tsym224849* LOC11;
		if (!(projectfile == systemfileidx)) goto LA9;
		LOC11 = 0;
		LOC11 = compilemodule_606776(projectfile, 12288);
	}
	goto LA7;
	LA9: ;
	{
		tsym224849* LOC13;
		compilesystemmodule_606988();
		LOC13 = 0;
		LOC13 = compilemodule_606776(projectfile, 4096);
	}
	LA7: ;
}

N_NIMCALL(tsym224849*, makestdinmodule_607093)(void) {
	tsym224849* result;
	result = 0;
	{
		NI32 LOC5;
		if (!(stdinmodule_607088 == NIM_NIL)) goto LA3;
		LOC5 = 0;
		LOC5 = fileinfoidx_195747(((NimStringDesc*) &TMP4819));
		asgnRefNoCycle((void**) &stdinmodule_607088, newmodule_606649(LOC5));
		(*stdinmodule_607088).Sup.Id = getid_223404();
	}
	LA3: ;
	result = stdinmodule_607088;
	return result;
}

N_NIMCALL(void, resetallmodules_606411)(void) {
	{
		NI i_606423;
		NI HEX3Atmp_606443;
		NI res_606446;
		i_606423 = 0;
		HEX3Atmp_606443 = 0;
		HEX3Atmp_606443 = (gcompiledmodules_606057->Sup.len-1);
		res_606446 = 0;
		{
			while (1) {
				if (!(res_606446 <= HEX3Atmp_606443)) goto LA3;
				i_606423 = res_606446;
				{
					if (!!((gcompiledmodules_606057->data[i_606423] == NIM_NIL))) goto LA6;
					resetmodule_606402(((NI32) (i_606423)));
				}
				LA6: ;
				res_606446 += 1;
			} LA3: ;
		}
	}
	resetpackagecache_169605();
}
NIM_EXTERNC N_NOINLINE(void, HEX00_modulesInit)(void) {
	if (gcompiledmodules_606057) nimGCunrefNoCycle(gcompiledmodules_606057);
	gcompiledmodules_606057 = (tsymseq224821*) newSeqRC1((&NTI224821), 0);
	if (gmemcachedata_606079) nimGCunrefNoCycle(gmemcachedata_606079);
	gmemcachedata_606079 = (TY606058*) newSeqRC1((&NTI606058), 0);
	gincludefile_285073 = includemodule_606926;
	gimportmodule_285068 = importmodule_606887;
}

NIM_EXTERNC N_NOINLINE(void, HEX00_modulesDatInit)(void) {
static TNimNode* TMP990[5];
static TNimNode* TMP991[5];
NI TMP993;
static char* NIM_CONST TMP992[5] = {
"Maybe", 
"No", 
"Yes", 
"Probing", 
"Recompiled"};
static TNimNode* TMP994[4];
NI TMP996;
static char* NIM_CONST TMP995[4] = {
"crcNotTaken", 
"crcCached", 
"crcHasChanged", 
"crcNotChanged"};
static TNimNode TMP988[17];
NTI606017.size = sizeof(tmoduleinmemory606017);
NTI606017.kind = 18;
NTI606017.base = 0;
NTI606017.flags = 2;
TMP990[0] = &TMP988[1];
TMP988[1].kind = 1;
TMP988[1].offset = offsetof(tmoduleinmemory606017, Compiledat);
TMP988[1].typ = (&NTI128);
TMP988[1].name = "compiledAt";
TMP990[1] = &TMP988[2];
TMP988[2].kind = 1;
TMP988[2].offset = offsetof(tmoduleinmemory606017, Crc);
TMP988[2].typ = (&NTI176010);
TMP988[2].name = "crc";
TMP990[2] = &TMP988[3];
TMP988[3].kind = 1;
TMP988[3].offset = offsetof(tmoduleinmemory606017, Deps);
TMP988[3].typ = (&NTI224939);
TMP988[3].name = "deps";
TMP990[3] = &TMP988[4];
NTI606013.size = sizeof(NU8);
NTI606013.kind = 14;
NTI606013.base = 0;
NTI606013.flags = 3;
for (TMP993 = 0; TMP993 < 5; TMP993++) {
TMP988[TMP993+5].kind = 1;
TMP988[TMP993+5].offset = TMP993;
TMP988[TMP993+5].name = TMP992[TMP993];
TMP991[TMP993] = &TMP988[TMP993+5];
}
TMP988[10].len = 5; TMP988[10].kind = 2; TMP988[10].sons = &TMP991[0];
NTI606013.node = &TMP988[10];
TMP988[4].kind = 1;
TMP988[4].offset = offsetof(tmoduleinmemory606017, Needsrecompile);
TMP988[4].typ = (&NTI606013);
TMP988[4].name = "needsRecompile";
TMP990[4] = &TMP988[11];
NTI606015.size = sizeof(NU8);
NTI606015.kind = 14;
NTI606015.base = 0;
NTI606015.flags = 3;
for (TMP996 = 0; TMP996 < 4; TMP996++) {
TMP988[TMP996+12].kind = 1;
TMP988[TMP996+12].offset = TMP996;
TMP988[TMP996+12].name = TMP995[TMP996];
TMP994[TMP996] = &TMP988[TMP996+12];
}
TMP988[16].len = 4; TMP988[16].kind = 2; TMP988[16].sons = &TMP994[0];
NTI606015.node = &TMP988[16];
TMP988[11].kind = 1;
TMP988[11].offset = offsetof(tmoduleinmemory606017, Crcstatus);
TMP988[11].typ = (&NTI606015);
TMP988[11].name = "crcStatus";
TMP988[0].len = 5; TMP988[0].kind = 2; TMP988[0].sons = &TMP990[0];
NTI606017.node = &TMP988[0];
NTI606058.size = sizeof(TY606058*);
NTI606058.kind = 24;
NTI606058.base = (&NTI606017);
NTI606058.flags = 2;
NTI606058.marker = TMP997;
}
