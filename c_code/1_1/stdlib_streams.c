/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <stdio.h>
#include <setjmp.h>
#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Streamobj147418 Streamobj147418;
typedef struct TNimObject TNimObject;
typedef struct Filestreamobj148248 Filestreamobj148248;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct Ioerror3628 Ioerror3628;
typedef struct Systemerror3626 Systemerror3626;
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
typedef struct Stringstreamobj148149 Stringstreamobj148149;
typedef struct Basechunk29437 Basechunk29437;
typedef struct Freecell29429 Freecell29429;
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
struct  TNimObject  {
TNimType* m_type;
};
typedef N_NIMCALL_PTR(void, TY147419) (Streamobj147418* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY147423) (Streamobj147418* s);
typedef N_NIMCALL_PTR(void, TY147427) (Streamobj147418* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY147432) (Streamobj147418* s);
typedef N_NIMCALL_PTR(NI, TY147436) (Streamobj147418* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(NI, TY147442) (Streamobj147418* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY147448) (Streamobj147418* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY147454) (Streamobj147418* s);
struct  Streamobj147418  {
  TNimObject Sup;
TY147419 closeimpl;
TY147423 atendimpl;
TY147427 setpositionimpl;
TY147432 getpositionimpl;
TY147436 readdataimpl;
TY147442 peekdataimpl;
TY147448 writedataimpl;
TY147454 flushimpl;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Filestreamobj148248  {
  Streamobj147418 Sup;
FILE* f;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e, void* ClEnv);
void* ClEnv;
} TY17811;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY17811 raiseAction;
};
struct  Systemerror3626  {
  Exception Sup;
};
struct  Ioerror3628  {
  Systemerror3626 Sup;
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
struct  Stringstreamobj148149  {
  Streamobj147418 Sup;
NimStringDesc* data;
NI pos;
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
struct  Freecell29429  {
Freecell29429* next;
NI zerofield;
};
N_NIMCALL(void, TMP2835)(void* p, NI op);
N_NIMCALL(NIM_BOOL, open_15403)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(Filestreamobj148248*, newfilestream_148300)(FILE* f);
N_NIMCALL(void, TMP2836)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(void, fsclose_148252)(Streamobj147418* s);
N_NIMCALL(NIM_BOOL, fsatend_148270)(Streamobj147418* s);
N_NIMCALL(NIM_BOOL, endoffile_15454)(FILE* f);
N_NIMCALL(void, fssetposition_148274)(Streamobj147418* s, NI pos);
N_NIMCALL(void, setfilepos_15581)(FILE* f, NI64 pos);
N_NIMCALL(NI, fsgetposition_148278)(Streamobj147418* s);
N_NIMCALL(NI64, getfilepos_15585)(FILE* f);
N_NIMCALL(NI, fsreaddata_148282)(Streamobj147418* s, void* buffer, NI buflen);
N_NIMCALL(NI, readbuffer_15554)(FILE* f, void* buffer, NI len);
N_NIMCALL(NI, fspeekdata_148288)(Streamobj147418* s, void* buffer, NI buflen);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(void, fswritedata_148295)(Streamobj147418* s, void* buffer, NI buflen);
N_NIMCALL(NI, writebuffer_15576)(FILE* f, void* buffer, NI len);
N_NIMCALL(Ioerror3628*, neweio_147402)(NimStringDesc* msg);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell47304*, usrtocell_51240)(void* usr);
static N_INLINE(void, rtladdzct_52801)(Cell47304* c);
N_NOINLINE(void, addzct_51217)(Cellseq47320* s, Cell47304* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(void, fsflush_148267)(Streamobj147418* s);
N_NIMCALL(void, writedata_147549)(Streamobj147418* s, void* buffer, NI buflen);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NIM_CHAR, readchar_147626)(Streamobj147418* s);
N_NIMCALL(NI, readdata_147511)(Streamobj147418* s, void* buffer, NI buflen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP3108)(void* p, NI op);
N_NIMCALL(void, ssclose_148229)(Streamobj147418* s_148231);
N_NIMCALL(NIM_BOOL, ssatend_148154)(Streamobj147418* s_148156);
N_NIMCALL(void, sssetposition_148159)(Streamobj147418* s_148161, NI pos);
N_NIMCALL(NI, clamp_148165)(NI x, NI a, NI b);
N_NIMCALL(NI, ssgetposition_148175)(Streamobj147418* s_148177);
N_NIMCALL(NI, ssreaddata_148180)(Streamobj147418* s_148182, void* buffer, NI buflen);
N_NIMCALL(NI, sspeekdata_148201)(Streamobj147418* s_148203, void* buffer, NI buflen);
N_NIMCALL(void, sswritedata_148213)(Streamobj147418* s_148215, void* buffer, NI buflen);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
STRING_LITERAL(TMP2840, "cannot write to stream", 22);
STRING_LITERAL(TMP3064, "", 0);
extern TNimType NTI3608; /* RootObj */
TNimType NTI147418; /* StreamObj */
TNimType NTI147419; /* proc (s: Stream){.gcsafe.} */
TNimType NTI147423; /* proc (s: Stream): bool{.gcsafe.} */
TNimType NTI147427; /* proc (s: Stream, pos: int){.gcsafe.} */
TNimType NTI147432; /* proc (s: Stream): int{.gcsafe.} */
TNimType NTI147436; /* proc (s: Stream, buffer: pointer, bufLen: int): int{.gcsafe.} */
TNimType NTI147442; /* proc (s: Stream, buffer: pointer, bufLen: int): int{.gcsafe.} */
TNimType NTI147448; /* proc (s: Stream, buffer: pointer, bufLen: int){.gcsafe.} */
TNimType NTI147454; /* proc (s: Stream){.gcsafe.} */
TNimType NTI147416; /* Stream */
TNimType NTI148248; /* FileStreamObj */
extern TNimType NTI15004; /* File */
TNimType NTI148246; /* FileStream */
extern TSafePoint* exchandler_19437;
extern TNimType NTI81017; /* ref IOError */
extern TNimType NTI3628; /* IOError */
extern Gcheap49618 gch_49659;
TNimType NTI148149; /* StringStreamObj */
extern TNimType NTI138; /* string */
extern TNimType NTI104; /* int */
TNimType NTI148147; /* StringStream */
N_NIMCALL(void, TMP2835)(void* p, NI op) {
	Streamobj147418* a;
	a = (Streamobj147418*)p;
}

N_NIMCALL(NI, readdata_147511)(Streamobj147418* s, void* buffer, NI buflen) {
	NI result;
	result = 0;
	result = (*s).readdataimpl(s, buffer, buflen);
	return result;
}
N_NIMCALL(void, TMP2836)(void* p, NI op) {
	Filestreamobj148248* a;
	a = (Filestreamobj148248*)p;
}

N_NIMCALL(void, fsclose_148252)(Streamobj147418* s) {
	{
		if (!!(((*((Filestreamobj148248*) (s))).f == NIM_NIL))) goto LA3;
		fclose((*((Filestreamobj148248*) (s))).f);
		(*((Filestreamobj148248*) (s))).f = NIM_NIL;
	}
	LA3: ;
}

N_NIMCALL(NIM_BOOL, fsatend_148270)(Streamobj147418* s) {
	NIM_BOOL result;
{	result = 0;
	result = endoffile_15454((*((Filestreamobj148248*) (s))).f);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, fssetposition_148274)(Streamobj147418* s, NI pos) {
	setfilepos_15581((*((Filestreamobj148248*) (s))).f, ((NI64) (pos)));
}

N_NIMCALL(NI, fsgetposition_148278)(Streamobj147418* s) {
	NI result;
	NI64 LOC1;
{	result = 0;
	LOC1 = 0;
	LOC1 = getfilepos_15585((*((Filestreamobj148248*) (s))).f);
	result = ((NI) (LOC1));
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, fsreaddata_148282)(Streamobj147418* s, void* buffer, NI buflen) {
	NI result;
	result = 0;
	result = readbuffer_15554((*((Filestreamobj148248*) (s))).f, buffer, ((NI) (buflen)));
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_19437;
	exchandler_19437 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_19437 = (*exchandler_19437).prev;
}

N_NIMCALL(NI, fspeekdata_148288)(Streamobj147418* s, void* buffer, NI buflen) {
	NI volatile result;
	NI pos;
	TSafePoint TMP2839;
	result = 0;
	pos = fsgetposition_148278(s);
	pushSafePoint(&TMP2839);
	TMP2839.status = setjmp(TMP2839.context);
	if (TMP2839.status == 0) {
		result = readbuffer_15554((*((Filestreamobj148248*) (s))).f, buffer, ((NI) (buflen)));
		popSafePoint();
	}
	else {
		popSafePoint();
	}
	{
		fssetposition_148274(s, pos);
	}
	if (TMP2839.status != 0) reraiseException();
	return result;
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell47304* c;
	c = usrtocell_51240(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_52801(c);
	}
	LA3: ;
}

N_NIMCALL(Ioerror3628*, neweio_147402)(NimStringDesc* msg) {
	Ioerror3628* result;
	NimStringDesc* LOC1;
	result = 0;
	result = (Ioerror3628*) newObj((&NTI81017), sizeof(Ioerror3628));
	(*result).Sup.Sup.Sup.m_type = (&NTI3628);
	LOC1 = 0;
	LOC1 = (*result).Sup.Sup.message; (*result).Sup.Sup.message = copyStringRC1(msg);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	return result;
}

N_NIMCALL(void, fswritedata_148295)(Streamobj147418* s, void* buffer, NI buflen) {
	{
		NI LOC3;
		Ioerror3628* LOC6;
		LOC3 = 0;
		LOC3 = writebuffer_15576((*((Filestreamobj148248*) (s))).f, buffer, ((NI) (buflen)));
		if (!!((LOC3 == buflen))) goto LA4;
		LOC6 = 0;
		LOC6 = neweio_147402(((NimStringDesc*) &TMP2840));
		raiseException((Exception*)LOC6, "IOError");
	}
	LA4: ;
}

N_NIMCALL(void, fsflush_148267)(Streamobj147418* s) {
	fflush((*((Filestreamobj148248*) (s))).f);
}

N_NIMCALL(Filestreamobj148248*, newfilestream_148300)(FILE* f) {
	Filestreamobj148248* result;
	result = 0;
	result = (Filestreamobj148248*) newObj((&NTI148246), sizeof(Filestreamobj148248));
	(*result).Sup.Sup.m_type = (&NTI148248);
	(*result).f = f;
	(*result).Sup.closeimpl = fsclose_148252;
	(*result).Sup.atendimpl = fsatend_148270;
	(*result).Sup.setpositionimpl = fssetposition_148274;
	(*result).Sup.getpositionimpl = fsgetposition_148278;
	(*result).Sup.readdataimpl = fsreaddata_148282;
	(*result).Sup.peekdataimpl = fspeekdata_148288;
	(*result).Sup.writedataimpl = fswritedata_148295;
	(*result).Sup.flushimpl = fsflush_148267;
	return result;
}

N_NIMCALL(Filestreamobj148248*, newfilestream_148312)(NimStringDesc* filename, NU8 mode) {
	Filestreamobj148248* result;
	FILE* f;
	result = 0;
	f = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = open_15403(&f, filename, mode, ((NI) -1));
		if (!LOC3) goto LA4;
		result = newfilestream_148300(f);
	}
	LA4: ;
	return result;
}

N_NIMCALL(void, close_147470)(Streamobj147418* s) {
	{
		if (!!((*s).closeimpl == 0)) goto LA3;
		(*s).closeimpl(s);
	}
	LA3: ;
}

N_NIMCALL(void, writedata_147549)(Streamobj147418* s, void* buffer, NI buflen) {
	(*s).writedataimpl(s, buffer, buflen);
}

N_NIMCALL(void, write_147569)(Streamobj147418* s, NimStringDesc* x) {
	writedata_147549(s, ((void*) (x->data)), (x ? x->Sup.len : 0));
}

N_NIMCALL(NIM_BOOL, atend_147484)(Streamobj147418* s) {
	NIM_BOOL result;
	result = 0;
	result = (*s).atendimpl(s);
	return result;
}

N_NIMCALL(NIM_CHAR, readchar_147626)(Streamobj147418* s) {
	NIM_CHAR result;
	result = 0;
	{
		NI LOC3;
		LOC3 = 0;
		LOC3 = readdata_147511(s, ((void*) ((&result))), ((NI) 1));
		if (!!((LOC3 == ((NI) 1)))) goto LA4;
		result = 0;
	}
	LA4: ;
	return result;
}

N_NIMCALL(NimStringDesc*, readline_148133)(Streamobj147418* s) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP3064));
	{
		while (1) {
			NIM_CHAR c;
			c = readchar_147626(s);
			{
				if (!((NU8)(c) == (NU8)(13))) goto LA5;
				c = readchar_147626(s);
				goto LA1;
			}
			LA5: ;
			{
				NIM_BOOL LOC9;
				LOC9 = 0;
				LOC9 = ((NU8)(c) == (NU8)(10));
				if (LOC9) goto LA10;
				LOC9 = ((NU8)(c) == (NU8)(0));
				LA10: ;
				if (!LOC9) goto LA11;
				goto LA1;
			}
			goto LA7;
			LA11: ;
			{
				result = addChar(result, c);
			}
			LA7: ;
		}
	} LA1: ;
	return result;
}
N_NIMCALL(void, TMP3108)(void* p, NI op) {
	Stringstreamobj148149* a;
	a = (Stringstreamobj148149*)p;
	nimGCvisit((void*)(*a).data, op);
}

N_NIMCALL(void, ssclose_148229)(Streamobj147418* s_148231) {
	Stringstreamobj148149* s;
	NimStringDesc* LOC1;
	s = ((Stringstreamobj148149*) (s_148231));
	LOC1 = 0;
	LOC1 = (*s).data; (*s).data = copyStringRC1(NIM_NIL);
	if (LOC1) nimGCunrefNoCycle(LOC1);
}

N_NIMCALL(NIM_BOOL, ssatend_148154)(Streamobj147418* s_148156) {
	NIM_BOOL result;
	Stringstreamobj148149* s;
{	result = 0;
	s = ((Stringstreamobj148149*) (s_148156));
	result = (((*s).data ? (*s).data->Sup.len : 0) <= (*s).pos);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, sssetposition_148159)(Streamobj147418* s_148161, NI pos) {
	Stringstreamobj148149* s;
	s = ((Stringstreamobj148149*) (s_148161));
	(*s).pos = clamp_148165(pos, ((NI) 0), ((*s).data ? (*s).data->Sup.len : 0));
}

N_NIMCALL(NI, ssgetposition_148175)(Streamobj147418* s_148177) {
	NI result;
	Stringstreamobj148149* s;
{	result = 0;
	s = ((Stringstreamobj148149*) (s_148177));
	result = (*s).pos;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, ssreaddata_148180)(Streamobj147418* s_148182, void* buffer, NI buflen) {
	NI result;
	Stringstreamobj148149* s;
	result = 0;
	s = ((Stringstreamobj148149*) (s_148182));
	result = ((buflen <= (NI)(((*s).data ? (*s).data->Sup.len : 0) - (*s).pos)) ? buflen : (NI)(((*s).data ? (*s).data->Sup.len : 0) - (*s).pos));
	{
		if (!(((NI) 0) < result)) goto LA3;
		memcpy(buffer, ((void*) ((&(*s).data->data[(*s).pos]))), ((NI) (result)));
		(*s).pos += result;
	}
	LA3: ;
	return result;
}

N_NIMCALL(NI, sspeekdata_148201)(Streamobj147418* s_148203, void* buffer, NI buflen) {
	NI result;
	Stringstreamobj148149* s;
	result = 0;
	s = ((Stringstreamobj148149*) (s_148203));
	result = ((buflen <= (NI)(((*s).data ? (*s).data->Sup.len : 0) - (*s).pos)) ? buflen : (NI)(((*s).data ? (*s).data->Sup.len : 0) - (*s).pos));
	{
		if (!(((NI) 0) < result)) goto LA3;
		memcpy(buffer, ((void*) ((&(*s).data->data[(*s).pos]))), ((NI) (result)));
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, sswritedata_148213)(Streamobj147418* s_148215, void* buffer, NI buflen) {
	Stringstreamobj148149* s;
{	s = ((Stringstreamobj148149*) (s_148215));
	{
		if (!(buflen <= ((NI) 0))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		if (!(((*s).data ? (*s).data->Sup.len : 0) < (NI)((*s).pos + buflen))) goto LA7;
		(*s).data = setLengthStr((*s).data, ((NI) ((NI)((*s).pos + buflen))));
	}
	LA7: ;
	memcpy(((void*) ((&(*s).data->data[(*s).pos]))), buffer, ((NI) (buflen)));
	(*s).pos += buflen;
	}BeforeRet: ;
}

N_NIMCALL(Stringstreamobj148149*, newstringstream_148233)(NimStringDesc* s) {
	Stringstreamobj148149* result;
	NimStringDesc* LOC1;
	result = 0;
	result = (Stringstreamobj148149*) newObj((&NTI148147), sizeof(Stringstreamobj148149));
	(*result).Sup.Sup.m_type = (&NTI148149);
	LOC1 = 0;
	LOC1 = (*result).data; (*result).data = copyStringRC1(s);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*result).pos = ((NI) 0);
	(*result).Sup.closeimpl = ssclose_148229;
	(*result).Sup.atendimpl = ssatend_148154;
	(*result).Sup.setpositionimpl = sssetposition_148159;
	(*result).Sup.getpositionimpl = ssgetposition_148175;
	(*result).Sup.readdataimpl = ssreaddata_148180;
	(*result).Sup.peekdataimpl = sspeekdata_148201;
	(*result).Sup.writedataimpl = sswritedata_148213;
	return result;
}

N_NIMCALL(NimStringDesc*, readall_147517)(Streamobj147418* s) {
	NimStringDesc* result;
	NI r;
	result = 0;
	result = mnewString(((NI) 1000));
	r = ((NI) 0);
	{
		while (1) {
			NI readbytes;
			readbytes = readdata_147511(s, ((void*) ((&result->data[r]))), ((NI) 1000));
			{
				if (!(readbytes < ((NI) 1000))) goto LA5;
				result = setLengthStr(result, ((NI) ((NI)(r + readbytes))));
				goto LA1;
			}
			LA5: ;
			r += ((NI) 1000);
			result = setLengthStr(result, ((NI) ((NI)(r + ((NI) 1000)))));
		}
	} LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_streamsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_streamsDatInit000)(void) {
static TNimNode* TMP2834[8];
static TNimNode* TMP3107[2];
static TNimNode TMP35[13];
NTI147418.size = sizeof(Streamobj147418);
NTI147418.kind = 17;
NTI147418.base = (&NTI3608);
NTI147418.flags = 1;
TMP2834[0] = &TMP35[1];
NTI147419.size = sizeof(TY147419);
NTI147419.kind = 25;
NTI147419.base = 0;
NTI147419.flags = 3;
TMP35[1].kind = 1;
TMP35[1].offset = offsetof(Streamobj147418, closeimpl);
TMP35[1].typ = (&NTI147419);
TMP35[1].name = "closeImpl";
TMP2834[1] = &TMP35[2];
NTI147423.size = sizeof(TY147423);
NTI147423.kind = 25;
NTI147423.base = 0;
NTI147423.flags = 3;
TMP35[2].kind = 1;
TMP35[2].offset = offsetof(Streamobj147418, atendimpl);
TMP35[2].typ = (&NTI147423);
TMP35[2].name = "atEndImpl";
TMP2834[2] = &TMP35[3];
NTI147427.size = sizeof(TY147427);
NTI147427.kind = 25;
NTI147427.base = 0;
NTI147427.flags = 3;
TMP35[3].kind = 1;
TMP35[3].offset = offsetof(Streamobj147418, setpositionimpl);
TMP35[3].typ = (&NTI147427);
TMP35[3].name = "setPositionImpl";
TMP2834[3] = &TMP35[4];
NTI147432.size = sizeof(TY147432);
NTI147432.kind = 25;
NTI147432.base = 0;
NTI147432.flags = 3;
TMP35[4].kind = 1;
TMP35[4].offset = offsetof(Streamobj147418, getpositionimpl);
TMP35[4].typ = (&NTI147432);
TMP35[4].name = "getPositionImpl";
TMP2834[4] = &TMP35[5];
NTI147436.size = sizeof(TY147436);
NTI147436.kind = 25;
NTI147436.base = 0;
NTI147436.flags = 3;
TMP35[5].kind = 1;
TMP35[5].offset = offsetof(Streamobj147418, readdataimpl);
TMP35[5].typ = (&NTI147436);
TMP35[5].name = "readDataImpl";
TMP2834[5] = &TMP35[6];
NTI147442.size = sizeof(TY147442);
NTI147442.kind = 25;
NTI147442.base = 0;
NTI147442.flags = 3;
TMP35[6].kind = 1;
TMP35[6].offset = offsetof(Streamobj147418, peekdataimpl);
TMP35[6].typ = (&NTI147442);
TMP35[6].name = "peekDataImpl";
TMP2834[6] = &TMP35[7];
NTI147448.size = sizeof(TY147448);
NTI147448.kind = 25;
NTI147448.base = 0;
NTI147448.flags = 3;
TMP35[7].kind = 1;
TMP35[7].offset = offsetof(Streamobj147418, writedataimpl);
TMP35[7].typ = (&NTI147448);
TMP35[7].name = "writeDataImpl";
TMP2834[7] = &TMP35[8];
NTI147454.size = sizeof(TY147454);
NTI147454.kind = 25;
NTI147454.base = 0;
NTI147454.flags = 3;
TMP35[8].kind = 1;
TMP35[8].offset = offsetof(Streamobj147418, flushimpl);
TMP35[8].typ = (&NTI147454);
TMP35[8].name = "flushImpl";
TMP35[0].len = 8; TMP35[0].kind = 2; TMP35[0].sons = &TMP2834[0];
NTI147418.node = &TMP35[0];
NTI147416.size = sizeof(Streamobj147418*);
NTI147416.kind = 22;
NTI147416.base = (&NTI147418);
NTI147416.marker = TMP2835;
NTI148248.size = sizeof(Filestreamobj148248);
NTI148248.kind = 17;
NTI148248.base = (&NTI147418);
NTI148248.flags = 1;
TMP35[9].kind = 1;
TMP35[9].offset = offsetof(Filestreamobj148248, f);
TMP35[9].typ = (&NTI15004);
TMP35[9].name = "f";
NTI148248.node = &TMP35[9];
NTI148246.size = sizeof(Filestreamobj148248*);
NTI148246.kind = 22;
NTI148246.base = (&NTI148248);
NTI148246.marker = TMP2836;
NTI148149.size = sizeof(Stringstreamobj148149);
NTI148149.kind = 17;
NTI148149.base = (&NTI147418);
TMP3107[0] = &TMP35[11];
TMP35[11].kind = 1;
TMP35[11].offset = offsetof(Stringstreamobj148149, data);
TMP35[11].typ = (&NTI138);
TMP35[11].name = "data";
TMP3107[1] = &TMP35[12];
TMP35[12].kind = 1;
TMP35[12].offset = offsetof(Stringstreamobj148149, pos);
TMP35[12].typ = (&NTI104);
TMP35[12].name = "pos";
TMP35[10].len = 2; TMP35[10].kind = 2; TMP35[10].sons = &TMP3107[0];
NTI148149.node = &TMP35[10];
NTI148147.size = sizeof(Stringstreamobj148149*);
NTI148147.kind = 22;
NTI148147.base = (&NTI148149);
NTI148147.marker = TMP3108;
}

