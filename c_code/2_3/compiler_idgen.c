/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdio.h>
#include <string.h>
typedef struct Tidobj190006 Tidobj190006;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* TY184752[1];
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(NIM_BOOL, open_15403)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(NimStringDesc*, togid_214435)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, completegeneratedfilepath_162201)(NimStringDesc* f, NIM_BOOL createsubdir);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, readline_15513)(FILE* f, NimStringDesc** line);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s);
N_NIMCALL(FILE*, open_15417)(NimStringDesc* filename, NU8 mode, NI bufsize);
static N_INLINE(void, writeline_162405)(FILE* f, NimStringDesc** x, NI xLen0);
N_NIMCALL(void, write_15489)(FILE* f, NimStringDesc* s);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
STRING_LITERAL(TMP1564, "nimrod.gid", 10);
STRING_LITERAL(TMP4538, "\012", 1);
NI gfrontendid_214003;
NI gbackendid_214004;

N_NIMCALL(void, registerid_214201)(Tidobj190006* id) {
}

N_NIMCALL(NimStringDesc*, togid_214435)(NimStringDesc* f) {
	NimStringDesc* result;
	result = 0;
	result = completegeneratedfilepath_162201(((NimStringDesc*) &TMP1564), NIM_TRUE);
	return result;
}

N_NIMCALL(void, loadmaxids_214467)(NimStringDesc* project) {
	FILE* f;
	f = 0;
	{
		NimStringDesc* LOC3;
		NIM_BOOL LOC4;
		NimStringDesc* line;
		LOC3 = 0;
		LOC3 = togid_214435(project);
		LOC4 = 0;
		LOC4 = open_15403(&f, LOC3, ((NU8) 0), ((NI) -1));
		if (!LOC4) goto LA5;
		line = rawNewString(((NI) 20));
		{
			NIM_BOOL LOC9;
			NI frontendid;
			LOC9 = 0;
			LOC9 = readline_15513(f, (&line));
			if (!LOC9) goto LA10;
			frontendid = nsuParseInt(line);
			{
				NIM_BOOL LOC14;
				NI backendid;
				LOC14 = 0;
				LOC14 = readline_15513(f, (&line));
				if (!LOC14) goto LA15;
				backendid = nsuParseInt(line);
				gfrontendid_214003 = ((gfrontendid_214003 >= frontendid) ? gfrontendid_214003 : frontendid);
				gbackendid_214004 = ((gbackendid_214004 >= backendid) ? gbackendid_214004 : backendid);
			}
			LA15: ;
		}
		LA10: ;
		fclose(f);
	}
	LA5: ;
}

N_NIMCALL(void, idsynchronizationpoint_214432)(NI idrange) {
	gfrontendid_214003 = (NI)((NI)((NI)((NI)(gfrontendid_214003 / idrange) + ((NI) 1)) * idrange) + ((NI) 1));
}

static N_INLINE(void, writeline_162405)(FILE* f, NimStringDesc** x, NI xLen0) {
	{
		NimStringDesc* i_162420;
		NI i_162428;
		i_162420 = 0;
		i_162428 = ((NI) 0);
		{
			while (1) {
				if (!(i_162428 < xLen0)) goto LA3;
				i_162420 = x[i_162428];
				write_15489(f, i_162420);
				i_162428 += ((NI) 1);
			} LA3: ;
		}
	}
	write_15489(f, ((NimStringDesc*) &TMP4538));
}

N_NIMCALL(void, savemaxids_214439)(NimStringDesc* project) {
	FILE* f;
	NimStringDesc* LOC1;
	TY184752 LOC2;
	TY184752 LOC3;
	LOC1 = 0;
	LOC1 = togid_214435(project);
	f = open_15417(LOC1, ((NU8) 1), ((NI) -1));
	memset((void*)LOC2, 0, sizeof(LOC2));
	LOC2[0] = nimIntToStr(gfrontendid_214003);
	writeline_162405(f, LOC2, 1);
	memset((void*)LOC3, 0, sizeof(LOC3));
	LOC3[0] = nimIntToStr(gbackendid_214004);
	writeline_162405(f, LOC3, 1);
	fclose(f);
}
NIM_EXTERNC N_NOINLINE(void, compiler_idgenInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_idgenDatInit000)(void) {
}

