/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Tsym213822 Tsym213822;
typedef struct Tcontext263020 Tcontext263020;
typedef struct Tscope213816 Tscope213816;
typedef struct Tidentiter220084 Tidentiter220084;
typedef struct Tident188012 Tident188012;
typedef struct Tstrtable213794 Tstrtable213794;
typedef struct Tsymseq213792 Tsymseq213792;
typedef struct Tnodeseq213784 Tnodeseq213784;
typedef struct Tidobj188006 Tidobj188006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq213824 Ttypeseq213824;
typedef struct TY213925 TY213925;
typedef struct Ttype213828 Ttype213828;
typedef struct Tlineinfo181337 Tlineinfo181337;
typedef struct Tnode213790 Tnode213790;
typedef struct Tloc213804 Tloc213804;
typedef struct Ropeobj168006 Ropeobj168006;
typedef struct Tlib213808 Tlib213808;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tpasscontext260002 Tpasscontext260002;
typedef struct Tproccon263008 Tproccon263008;
typedef struct Intset210035 Intset210035;
typedef struct Trunk210031 Trunk210031;
typedef struct Trunkseq210033 Trunkseq210033;
typedef struct Tlinkedlist135016 Tlinkedlist135016;
typedef struct Tlistentry135010 Tlistentry135010;
typedef struct Tidtable213840 Tidtable213840;
typedef struct Tidpairseq213838 Tidpairseq213838;
typedef struct Tctx262036 Tctx262036;
typedef struct TY263140 TY263140;
typedef struct Tinstantiation213812 Tinstantiation213812;
typedef struct Tidpair213836 Tidpair213836;
typedef struct TY262242 TY262242;
typedef struct TY182093 TY182093;
typedef struct PprocHEX3Aobjecttype262221 PprocHEX3Aobjecttype262221;
typedef struct TY262261 TY262261;
typedef struct Tinstantiationpair263010 Tinstantiationpair263010;
typedef struct TY213913 TY213913;
typedef struct TY262222 TY262222;
typedef struct TY262227 TY262227;
typedef struct TY262262 TY262262;
typedef struct Vmargs262030 Vmargs262030;
typedef struct Tblock262018 Tblock262018;
typedef struct TY262202 TY262202;
struct  Tidentiter220084  {
NI h;
Tident188012* name;
};
struct  Tstrtable213794  {
NI counter;
Tsymseq213792* data;
};
struct  Tscope213816  {
NI depthlevel;
Tstrtable213794 symbols;
Tnodeseq213784* usingsyms;
Tscope213816* parent;
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
struct  Tlineinfo181337  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tloc213804  {
NU8 k;
NU8 s;
NU16 flags;
Ttype213828* t;
Ropeobj168006* r;
Ropeobj168006* heaproot;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* TY183169[2];
struct  Tident188012  {
  Tidobj188006 Sup;
NimStringDesc* s;
Tident188012* next;
NI h;
};
struct  Tpasscontext260002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Intset210035  {
NI counter;
NI max;
Trunk210031* head;
Trunkseq210033* data;
};
struct  Tlinkedlist135016  {
Tlistentry135010* head;
Tlistentry135010* tail;
NI counter;
};
struct  Tidtable213840  {
NI counter;
Tidpairseq213838* data;
};
typedef N_NIMCALL_PTR(Tnode213790*, TY263071) (Tcontext263020* c, Tnode213790* n);
typedef N_NIMCALL_PTR(Tnode213790*, TY263076) (Tcontext263020* c, Tnode213790* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode213790*, TY263084) (Tcontext263020* c, Tnode213790* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode213790*, TY263092) (Tcontext263020* c, Tnode213790* n);
typedef N_NIMCALL_PTR(Tnode213790*, TY263097) (Tcontext263020* c, Tnode213790* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode213790*, TY263105) (Tcontext263020* c, Tnode213790* n);
typedef N_NIMCALL_PTR(Tnode213790*, TY263110) (Tcontext263020* c, Tnode213790* n, Tnode213790* norig, NU32 filter);
typedef N_NIMCALL_PTR(Ttype213828*, TY263117) (Tcontext263020* c, Tnode213790* n, Ttype213828* prev);
typedef struct {
N_NIMCALL_PTR(Tnode213790*, ClPrc) (Tcontext263020* c, Tidtable213840 pt, Tnode213790* n, void* ClEnv);
void* ClEnv;
} TY263123;
typedef struct {
N_NIMCALL_PTR(Tsym213822*, ClPrc) (Tcontext263020* c, Tsym213822* fn, Tidtable213840 pt, Tlineinfo181337 info, void* ClEnv);
void* ClEnv;
} TY263129;
typedef N_NIMCALL_PTR(Tsym213822*, TY263145) (Tcontext263020* c, Tsym213822* dc, Ttype213828* t, Tlineinfo181337 info, NU8 op);
struct  Tcontext263020  {
  Tpasscontext260002 Sup;
Tsym213822* module;
Tscope213816* currentscope;
Tscope213816* importtable;
Tscope213816* toplevelscope;
Tproccon263008* p;
Tsymseq213792* friendmodules;
NI instcounter;
Intset210035 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI compilescontextid;
NI compilescontextidgenerator;
NI ingenericinst;
Tsymseq213792* converters;
Tsymseq213792* patterns;
Tlinkedlist135016 optionstack;
Tidtable213840 symmapping;
Tlinkedlist135016 libs;
TY263071 semconstexpr;
TY263076 semexpr;
TY263084 semtryexpr;
TY263092 semtryconstexpr;
TY263097 semoperand;
TY263105 semconstboolexpr;
TY263110 semoverloadedcall;
TY263117 semtypenode;
TY263123 seminferredlambda;
TY263129 semgenerateinstance;
Intset210035 includedfiles;
Tstrtable213794 userpragmas;
Tctx262036* evalcontext;
Intset210035 unknownidents;
TY263140* generics;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY263145 insttypeboundop;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct  Ropeobj168006  {
  TNimObject Sup;
Ropeobj168006* left;
Ropeobj168006* right;
NI length;
NimStringDesc* data;
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
struct  Tproccon263008  {
Tsym213822* owner;
Tsym213822* resultsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon263008* next;
NIM_BOOL wasforwarded;
Tnode213790* bracketexpr;
};
typedef NI TY29818[16];
struct  Trunk210031  {
Trunk210031* next;
NI key;
TY29818 bits;
};
struct  Tidpair213836  {
Tidobj188006* key;
TNimObject* val;
};
struct  Tctx262036  {
  Tpasscontext260002 Sup;
TY262242* code;
TY182093* debug;
Tnode213790* globals;
Tnode213790* constants;
Ttypeseq213824* types;
Tnode213790* currentexceptiona;
Tnode213790* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype262221* prc;
Tsym213822* module;
Tnode213790* callsite;
NU8 mode;
NU8 features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo181337 comesfromheuristic;
TY262261* callbacks;
NimStringDesc* errorflag;
};
struct  Tinstantiationpair263010  {
Tsym213822* genericsym;
Tinstantiation213812* inst;
};
struct  Tinstantiation213812  {
Tsym213822* sym;
Ttypeseq213824* concretetypes;
TY213913* usedby;
NI compilesid;
};
struct TY262227 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY262227 TY262230[256];
struct  PprocHEX3Aobjecttype262221  {
TY262222* blocks;
Tsym213822* sym;
TY262230 slots;
NI maxslots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs262030* args, void* ClEnv);
void* ClEnv;
} Vmcallback262032;
struct TY262262 {
NimStringDesc* Field0;
Vmcallback262032 Field1;
};
struct  Tblock262018  {
Tsym213822* label;
TY262202* fixups;
};
struct  Vmargs262030  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode213790* currentexception;
};
struct Tsymseq213792 {
  TGenericSeq Sup;
  Tsym213822* data[SEQ_DECL_SIZE];
};
struct Tnodeseq213784 {
  TGenericSeq Sup;
  Tnode213790* data[SEQ_DECL_SIZE];
};
struct Ttypeseq213824 {
  TGenericSeq Sup;
  Ttype213828* data[SEQ_DECL_SIZE];
};
struct TY213925 {
  TGenericSeq Sup;
  Tinstantiation213812* data[SEQ_DECL_SIZE];
};
struct Trunkseq210033 {
  TGenericSeq Sup;
  Trunk210031* data[SEQ_DECL_SIZE];
};
struct Tidpairseq213838 {
  TGenericSeq Sup;
  Tidpair213836 data[SEQ_DECL_SIZE];
};
struct TY263140 {
  TGenericSeq Sup;
  Tinstantiationpair263010 data[SEQ_DECL_SIZE];
};
struct TY262242 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY182093 {
  TGenericSeq Sup;
  Tlineinfo181337 data[SEQ_DECL_SIZE];
};
struct TY262261 {
  TGenericSeq Sup;
  TY262262 data[SEQ_DECL_SIZE];
};
struct TY213913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY262222 {
  TGenericSeq Sup;
  Tblock262018 data[SEQ_DECL_SIZE];
};
struct TY262202 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tsym213822*, searchforprocnew_277157)(Tcontext263020* c, Tscope213816* scope, Tsym213822* fn);
N_NIMCALL(Tsym213822*, initidentiter_220087)(Tidentiter220084* ti, Tstrtable213794 tab, Tident188012* s);
N_NIMCALL(NIM_BOOL, sametype_243628)(Ttype213828* a, Ttype213828* b, NU8 flags);
N_NIMCALL(NU8, equalparams_239053)(Tnode213790* a, Tnode213790* b);
N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* formatstr, NimStringDesc** a, NI aLen0);
N_NIMCALL(NimStringDesc*, getprocheader_239324)(Tsym213822* sym, NU8 prefer);
N_NIMCALL(NimStringDesc*, HEX24_182431)(Tlineinfo181337 info);
N_NIMCALL(void, localerror_186080)(Tlineinfo181337 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(Tsym213822*, nextidentiter_220093)(Tidentiter220084* ti, Tstrtable213794 tab);
STRING_LITERAL(TMP3322, "public implementation \'$1\' has non-public forward declaration i"
"n $2", 67);

N_NIMCALL(Tsym213822*, searchforprocnew_277157)(Tcontext263020* c, Tscope213816* scope, Tsym213822* fn) {
	Tsym213822* result;
	Tidentiter220084 it;
{	result = 0;
	memset((void*)(&it), 0, sizeof(it));
	result = initidentiter_220087((&it), (*scope).symbols, (*fn).name);
	{
		while (1) {
			if (!!((result == NIM_NIL))) goto LA2;
			{
				NIM_BOOL LOC5;
				NU8 LOC9;
				LOC5 = 0;
				LOC5 = ((258048 &(1U<<((NU)((*result).kind)&31U)))!=0);
				if (!(LOC5)) goto LA6;
				LOC5 = sametype_243628((*result).typ, (*fn).typ, 30);
				LA6: ;
				if (!LOC5) goto LA7;
				LOC9 = 0;
				LOC9 = equalparams_239053((*(*result).typ).n, (*(*fn).typ).n);
				switch (LOC9) {
				case ((NU8) 1):
				{
					{
						NIM_BOOL LOC13;
						NimStringDesc* message;
						TY183169 LOC17;
						LOC13 = 0;
						LOC13 = !((((*result).flags &(1U<<((NU)(((NU8) 1))&31U)))!=0));
						if (!(LOC13)) goto LA14;
						LOC13 = (((*fn).flags &(1U<<((NU)(((NU8) 1))&31U)))!=0);
						LA14: ;
						if (!LOC13) goto LA15;
						memset((void*)LOC17, 0, sizeof(LOC17));
						LOC17[0] = getprocheader_239324(result, ((NU8) 0));
						LOC17[1] = HEX24_182431((*result).info);
						message = nsuFormatOpenArray(((NimStringDesc*) &TMP3322), LOC17, 2);
						localerror_186080((*fn).info, ((NU16) 4), message);
					}
					LA15: ;
					goto BeforeRet;
				}
				break;
				case ((NU8) 2):
				{
					localerror_186080((*fn).info, ((NU16) 70), (*(*fn).name).s);
					goto BeforeRet;
				}
				break;
				case ((NU8) 0):
				{
				}
				break;
				}
			}
			LA7: ;
			result = nextidentiter_220093((&it), (*scope).symbols);
		} LA2: ;
	}
	result = NIM_NIL;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Tsym213822*, searchforproc_277226)(Tcontext263020* c, Tscope213816* scope, Tsym213822* fn) {
	Tsym213822* result;
	result = 0;
	result = searchforprocnew_277157(c, scope, fn);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_procfindInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_procfindDatInit000)(void) {
}

