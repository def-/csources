/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <glob.h>

#include <setjmp.h>

#include <stdio.h>

#include <stdlib.h>
typedef struct tlinkedlist126028 tlinkedlist126028;
typedef struct tlistentry126022 tlistentry126022;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tcell44735 tcell44735;
typedef struct TNimType TNimType;
typedef struct tcellseq44751 tcellseq44751;
typedef struct tgcheap46816 tgcheap46816;
typedef struct tcellset44747 tcellset44747;
typedef struct tpagedesc44743 tpagedesc44743;
typedef struct tmemregion27010 tmemregion27010;
typedef struct tsmallchunk26240 tsmallchunk26240;
typedef struct tllchunk27004 tllchunk27004;
typedef struct tbigchunk26242 tbigchunk26242;
typedef struct tintset26217 tintset26217;
typedef struct ttrunk26213 ttrunk26213;
typedef struct tavlnode27008 tavlnode27008;
typedef struct tgcstat46814 tgcstat46814;
typedef struct stringtableobj130012 stringtableobj130012;
typedef struct TNimNode TNimNode;
typedef struct TY118408 TY118408;
typedef struct keyvaluepair130008 keyvaluepair130008;
typedef struct TY116204 TY116204;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TSafePoint TSafePoint;
typedef struct tstrentry126024 tstrentry126024;
typedef struct tbasechunk26238 tbasechunk26238;
typedef struct tfreecell26230 tfreecell26230;
typedef struct keyvaluepairseq130010 keyvaluepairseq130010;
struct  tlinkedlist126028  {
tlistentry126022* Head;
tlistentry126022* Tail;
NI Counter;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tcell44735  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq44751  {
NI Len;
NI Cap;
tcell44735** D;
};
struct  tcellset44747  {
NI Counter;
NI Max;
tpagedesc44743* Head;
tpagedesc44743** Data;
};
typedef tsmallchunk26240* TY27022[512];
typedef ttrunk26213* ttrunkbuckets26215[256];
struct  tintset26217  {
ttrunkbuckets26215 Data;
};
struct  tmemregion27010  {
NI Minlargeobj;
NI Maxlargeobj;
TY27022 Freesmallchunks;
tllchunk27004* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26242* Freechunkslist;
tintset26217 Chunkstarts;
tavlnode27008* Root;
tavlnode27008* Deleted;
tavlnode27008* Last;
tavlnode27008* Freeavlnodes;
};
struct  tgcstat46814  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap46816  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq44751 Zct;
tcellseq44751 Decstack;
tcellset44747 Cycleroots;
tcellseq44751 Tempstack;
NI Recgclock;
tmemregion27010 Region;
tgcstat46814 Stat;
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
struct keyvaluepair130008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct TY116204 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
struct  TNimObject  {
TNimType* m_type;
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
} TY14609;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY14609 raiseAction;
};
typedef NimStringDesc* TY196301[1];
typedef NimStringDesc* TY168969[2];
struct  tlistentry126022  {
  TNimObject Sup;
tlistentry126022* Prev;
tlistentry126022* Next;
};
struct  tstrentry126024  {
  tlistentry126022 Sup;
NimStringDesc* Data;
};
typedef NU8 TY210607[32];
typedef NI TY26220[16];
struct  tpagedesc44743  {
tpagedesc44743* Next;
NI Key;
TY26220 Bits;
};
struct  tbasechunk26238  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26240  {
  tbasechunk26238 Sup;
tsmallchunk26240* Next;
tsmallchunk26240* Prev;
tfreecell26230* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27004  {
NI Size;
NI Acc;
tllchunk27004* Next;
};
struct  tbigchunk26242  {
  tbasechunk26238 Sup;
tbigchunk26242* Next;
tbigchunk26242* Prev;
NI Align;
NF Data;
};
struct  ttrunk26213  {
ttrunk26213* Next;
NI Key;
TY26220 Bits;
};
typedef tavlnode27008* TY27014[2];
struct  tavlnode27008  {
TY27014 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  stringtableobj130012  {
  TNimObject Sup;
NI Counter;
keyvaluepairseq130010* Data;
NU8 Mode;
};
struct  tfreecell26230  {
tfreecell26230* Next;
NI Zerofield;
};
struct TY118408 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct keyvaluepairseq130010 {
  TGenericSeq Sup;
  keyvaluepair130008 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44735*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44735* c);
N_NOINLINE(void, addzct_48417)(tcellseq44751* s, tcell44735* c);
N_NIMCALL(stringtableobj130012*, nstnewStringTable)(NU8 mode);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_50825)(tcell44735* c);
static N_INLINE(NIM_BOOL, canbecycleroot_48467)(tcell44735* c);
static N_INLINE(void, rtladdcycleroot_49229)(tcell44735* c);
N_NOINLINE(void, incl_45471)(tcellset44747* s, tcell44735* cell);
static N_INLINE(void, decref_50404)(tcell44735* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, nosexpandFilename)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, getprefixdir_168379)(void);
N_NIMCALL(void, nossplitPath)(NimStringDesc* path, keyvaluepair130008* Result);
N_NIMCALL(NimStringDesc*, nosgetAppDir)(void);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NimStringDesc*, nosparentDir)(NimStringDesc* path);
N_NIMCALL(NIM_BOOL, nsthasKey)(stringtableobj130012* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, nstGet)(stringtableobj130012* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, HEX2F_115899)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY116204* Result);
N_NIMCALL(void, nstPut)(stringtableobj130012* t, NimStringDesc* key, NimStringDesc* val);
N_NIMCALL(NimStringDesc*, getgeneratedpath_168429)(void);
N_NIMCALL(NimStringDesc*, shortendir_168407)(NimStringDesc* dir);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(void, noscreateDir)(NimStringDesc* dir);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
static N_INLINE(void, writeln_169205)(FILE* f_169209, NimStringDesc** x_169213, NI x_169213Len0);
N_NIMCALL(void, write_12665)(FILE* f, NimStringDesc* s);
static N_INLINE(void, popCurrentException)(void);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NimStringDesc*, nosjoinPathOpenArray)(NimStringDesc** parts, NI partsLen0);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NimStringDesc*, getpackagename_168825)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, findfile_169356)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, rawfindfile_169292)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, canonicalizepath_168388)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, nsuToLowerStr)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, rawfindfile2_169318)(NimStringDesc* f);
N_NIMCALL(void, bringtofront_126741)(tlinkedlist126028* list, tlistentry126022* entry);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_74628, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, canondynlibname_169468)(NimStringDesc* s);
N_NIMCALL(NI, nsuFindCharSet)(NimStringDesc* s, TY210607 chars, NI start);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start);
N_NIMCALL(void, libcandidates_169409)(NimStringDesc* s, TY118408** dest);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
STRING_LITERAL(TMP39, "", 0);
STRING_LITERAL(TMP1349, "*.nimble", 8);
STRING_LITERAL(TMP1350, "*.babel", 7);
STRING_LITERAL(TMP1351, "nimcache", 8);
STRING_LITERAL(TMP1353, "\012", 1);
STRING_LITERAL(TMP1354, "cannot create directory: ", 25);
STRING_LITERAL(TMP1384, "nim", 3);
STRING_LITERAL(TMP1871, "lib", 3);
static NIM_CONST TY210607 TMP1872 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1873, "true", 4);
NU32 goptions_168116;
NU32 gglobaloptions_168118;
NI8 gexitcode_168119;
NU8 gcmd_168120;
NU8 gselectedgc_168121;
tlinkedlist126028 searchpaths_168122;
tlinkedlist126028 lazypaths_168123;
NimStringDesc* outfile_168124;
extern tgcheap46816 gch_46844;
NimStringDesc* docseesrcurl_168125;
NimStringDesc* headerfile_168126;
NI gverbosity_168127;
NI gnumberofprocessors_168128;
NIM_BOOL gwholeproject_168129;
NimStringDesc* gevalexpr_168130;
NF glastcmdtime_168131;
NIM_BOOL glistfullpaths_168132;
NIM_BOOL isserving_168133;
NI32 gdirtybufferidx_168134;
NI32 gdirtyoriginalidx_168135;
NIM_BOOL gnonimblepath_168136;
stringtableobj130012* gconfigvars_168229;
stringtableobj130012* gdlloverrides_168230;
NimStringDesc* libpath_168231;
NimStringDesc* gprojectname_168232;
NimStringDesc* gprojectpath_168233;
NimStringDesc* gprojectfull_168234;
NI32 gprojectmainidx_168235;
NimStringDesc* nimcachedir_168236;
NimStringDesc* command_168237;
TY118408* commandargs_168259;
extern TNimType NTI118408; /* seq[string] */
NIM_BOOL gkeepcomments_168260;
TY118408* implicitimports_168282;
TY118408* implicitincludes_168304;
stringtableobj130012* packagecache_168601;
TNimType NTI168014; /* TOption */
TNimType NTI168016; /* TOptions */
extern TSafePoint* exchandler_16043;
extern TNimType NTI3233; /* OSError */
extern Exception* currexception_16045;

static N_INLINE(tcell44735*, usrtocell_48446)(void* usr) {
	tcell44735* result;
	result = 0;
	result = ((tcell44735*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell44735))))));
	return result;
}

static N_INLINE(void, rtladdzct_50004)(tcell44735* c) {
	addzct_48417(&gch_46844.Zct, c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell44735* c;
	c = usrtocell_48446(p);
	{
		(*c).Refcount -= 8;
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		rtladdzct_50004(c);
	}
	LA3: ;
}

static N_INLINE(NIM_BOOL, canbecycleroot_48467)(tcell44735* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_49229)(tcell44735* c) {
	{
		if (!!((((NI) ((NI)((*c).Refcount & 3))) == 3))) goto LA3;
		(*c).Refcount = (NI)((NI)((*c).Refcount & -4) | 3);
		incl_45471(&gch_46844.Cycleroots, c);
	}
	LA3: ;
}

static N_INLINE(void, incref_50825)(tcell44735* c) {
	(*c).Refcount = (NI)((NU32)((*c).Refcount) + (NU32)(8));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_48467(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_49229(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_50404)(tcell44735* c) {
	{
		(*c).Refcount -= 8;
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		rtladdzct_50004(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_48467(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_49229(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tcell44735* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_48446(src);
		incref_50825(LOC5);
	}
	LA3: ;
	{
		tcell44735* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_48446((*dest));
		decref_50404(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(NimStringDesc*, canonicalizepath_168388)(NimStringDesc* path) {
	NimStringDesc* result;
	result = 0;
	result = nosexpandFilename(path);
	return result;
}

N_NIMCALL(NimStringDesc*, getprefixdir_168379)(void) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	keyvaluepair130008 LOC2;
	result = 0;
	LOC1 = 0;
	LOC1 = nosgetAppDir();
	memset((void*)&LOC2, 0, sizeof(LOC2));
	nossplitPath(LOC1, &LOC2);
	result = copyString(LOC2.Field0);
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI32)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
}

N_NIMCALL(NimStringDesc*, shortendir_168407)(NimStringDesc* dir) {
	NimStringDesc* result;
	NimStringDesc* prefix;
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC8;
	result = 0;
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = getprefixdir_168379();
	LOC1 = rawNewString(LOC2->Sup.len + 1);
appendString(LOC1, LOC2);
appendChar(LOC1, 47);
	prefix = LOC1;
	{
		NIM_BOOL LOC5;
		LOC5 = 0;
		LOC5 = nsuStartsWith(dir, prefix);
		if (!LOC5) goto LA6;
		result = copyStr(dir, prefix->Sup.len);
		goto BeforeRet;
	}
	LA6: ;
	LOC8 = 0;
	LOC8 = rawNewString(gprojectpath_168233->Sup.len + 1);
appendString(LOC8, gprojectpath_168233);
appendChar(LOC8, 47);
	prefix = LOC8;
	{
		NIM_BOOL LOC11;
		LOC11 = 0;
		LOC11 = nsuStartsWith(dir, prefix);
		if (!LOC11) goto LA12;
		result = copyStr(dir, prefix->Sup.len);
		goto BeforeRet;
	}
	LA12: ;
	result = copyString(dir);
	BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, getpackagename_168825)(NimStringDesc* path) {
	NimStringDesc* result;
	NI parents;
	result = 0;
	parents = 0;
	{
		{
			NimStringDesc* d_168831;
			NimStringDesc* current_168890;
			d_168831 = 0;
			current_168890 = copyString(path);
			{
				while (1) {
					current_168890 = nosparentDir(current_168890);
					{
						if (!(current_168890->Sup.len == 0)) goto LA7;
						goto LA3;
					}
					LA7: ;
					d_168831 = current_168890;
					{
						NIM_BOOL LOC11;
						LOC11 = 0;
						LOC11 = nsthasKey(packagecache_168601, d_168831);
						if (!LOC11) goto LA12;
						result = nstGet(packagecache_168601, d_168831);
						goto BeforeRet;
					}
					LA12: ;
					parents += 1;
					{
						NimStringDesc* file_168844;
						NimStringDesc* HEX3Atmp_168861;
						glob_t f_168865;
						NI res_168867;
						int LOC15;
						file_168844 = 0;
						HEX3Atmp_168861 = 0;
						HEX3Atmp_168861 = HEX2F_115899(d_168831, ((NimStringDesc*) &TMP1349));
						memset((void*)&f_168865, 0, sizeof(f_168865));
						res_168867 = 0;
						f_168865.gl_offs = 0;
						f_168865.gl_pathc = 0;
						f_168865.gl_pathv = NIM_NIL;
						LOC15 = 0;
						LOC15 = glob(HEX3Atmp_168861->data, ((int) 0), NIM_NIL, &f_168865);
						res_168867 = ((NI) (LOC15));
						{
							if (!(res_168867 == 0)) goto LA18;
							{
								NI i_168869;
								NI HEX3Atmp_168871;
								NI res_168873;
								i_168869 = 0;
								HEX3Atmp_168871 = 0;
								HEX3Atmp_168871 = (NI32)(f_168865.gl_pathc - 1);
								res_168873 = 0;
								{
									while (1) {
										TY116204 LOC23;
										if (!(res_168873 <= HEX3Atmp_168871)) goto LA22;
										i_168869 = res_168873;
										file_168844 = cstrToNimstr(f_168865.gl_pathv[(i_168869)- 0]);
										memset((void*)&LOC23, 0, sizeof(LOC23));
										nossplitFile(file_168844, &LOC23);
										result = copyString(LOC23.Field1);
										goto LA1;
										res_168873 += 1;
									} LA22: ;
								}
							}
						}
						LA18: ;
						globfree(&f_168865);
					}
					{
						NimStringDesc* file_168845;
						NimStringDesc* HEX3Atmp_168875;
						glob_t f_168879;
						NI res_168881;
						int LOC25;
						file_168845 = 0;
						HEX3Atmp_168875 = 0;
						HEX3Atmp_168875 = HEX2F_115899(d_168831, ((NimStringDesc*) &TMP1350));
						memset((void*)&f_168879, 0, sizeof(f_168879));
						res_168881 = 0;
						f_168879.gl_offs = 0;
						f_168879.gl_pathc = 0;
						f_168879.gl_pathv = NIM_NIL;
						LOC25 = 0;
						LOC25 = glob(HEX3Atmp_168875->data, ((int) 0), NIM_NIL, &f_168879);
						res_168881 = ((NI) (LOC25));
						{
							if (!(res_168881 == 0)) goto LA28;
							{
								NI i_168883;
								NI HEX3Atmp_168885;
								NI res_168887;
								i_168883 = 0;
								HEX3Atmp_168885 = 0;
								HEX3Atmp_168885 = (NI32)(f_168879.gl_pathc - 1);
								res_168887 = 0;
								{
									while (1) {
										TY116204 LOC33;
										if (!(res_168887 <= HEX3Atmp_168885)) goto LA32;
										i_168883 = res_168887;
										file_168845 = cstrToNimstr(f_168879.gl_pathv[(i_168883)- 0]);
										memset((void*)&LOC33, 0, sizeof(LOC33));
										nossplitFile(file_168845, &LOC33);
										result = copyString(LOC33.Field1);
										goto LA1;
										res_168887 += 1;
									} LA32: ;
								}
							}
						}
						LA28: ;
						globfree(&f_168879);
					}
				}
			} LA3: ;
		}
	} LA1: ;
	{
		if (!result == 0) goto LA36;
		result = copyString(((NimStringDesc*) &TMP39));
	}
	LA36: ;
	{
		NimStringDesc* d_168846;
		NimStringDesc* current_168894;
		d_168846 = 0;
		current_168894 = copyString(path);
		{
			while (1) {
				current_168894 = nosparentDir(current_168894);
				{
					if (!(current_168894->Sup.len == 0)) goto LA43;
					goto LA39;
				}
				LA43: ;
				d_168846 = current_168894;
				nstPut(packagecache_168601, d_168846, result);
				parents -= 1;
				{
					if (!(parents <= 0)) goto LA47;
					goto LA38;
				}
				LA47: ;
			}
		} LA39: ;
	} LA38: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, getgeneratedpath_168429)(void) {
	NimStringDesc* result;
	result = 0;
	{
		if (!(0 < nimcachedir_168236->Sup.len)) goto LA3;
		result = copyString(nimcachedir_168236);
	}
	goto LA1;
	LA3: ;
	{
		NimStringDesc* LOC6;
		LOC6 = 0;
		LOC6 = shortendir_168407(gprojectpath_168233);
		result = HEX2F_115899(LOC6, ((NimStringDesc*) &TMP1351));
	}
	LA1: ;
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_16043;
	exchandler_16043 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_16043 = (*exchandler_16043).prev;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	result = 0;
	result = currexception_16045;
	return result;
}

static N_INLINE(void, writeln_169205)(FILE* f_169209, NimStringDesc** x_169213, NI x_169213Len0) {
	{
		NimStringDesc* i_169226;
		NI i_169234;
		i_169226 = 0;
		i_169234 = 0;
		{
			while (1) {
				if (!(i_169234 < x_169213Len0)) goto LA3;
				i_169226 = x_169213[i_169234];
				write_12665(f_169209, i_169226);
				i_169234 += 1;
			} LA3: ;
		}
	}
	write_12665(f_169209, ((NimStringDesc*) &TMP1353));
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) &currexception_16045, (*currexception_16045).parent);
}

N_NIMCALL(NimStringDesc*, completegeneratedfilepath_169001)(NimStringDesc* f, NIM_BOOL createsubdir) {
	NimStringDesc* result;
	keyvaluepair130008 LOC1;
	NimStringDesc* head;
	NimStringDesc* tail;
	NimStringDesc* subdir;
	result = 0;
	memset((void*)&LOC1, 0, sizeof(LOC1));
	nossplitPath(f, &LOC1);
	head = 0;
	head = copyString(LOC1.Field0);
	tail = 0;
	tail = copyString(LOC1.Field1);
	subdir = getgeneratedpath_168429();
	{
		TSafePoint TMP1352;
		if (!createsubdir) goto LA4;
		pushSafePoint(&TMP1352);
		TMP1352.status = _setjmp(TMP1352.context);
		if (TMP1352.status == 0) {
			noscreateDir(subdir);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI3233))) {
				TY196301 LOC9;
				NimStringDesc* LOC10;
				TMP1352.status = 0;
				memset((void*)LOC9, 0, sizeof(LOC9));
				LOC10 = 0;
				LOC10 = rawNewString(subdir->Sup.len + 25);
appendString(LOC10, ((NimStringDesc*) &TMP1354));
appendString(LOC10, subdir);
				LOC9[0] = LOC10;
				writeln_169205(stdout, LOC9, 1);
				exit(1);
				popCurrentException();
			}
		}
		if (TMP1352.status != 0) reraiseException();
	}
	LA4: ;
	result = nosjoinPath(subdir, tail);
	return result;
}

N_NIMCALL(NimStringDesc*, togeneratedfile_168960)(NimStringDesc* path, NimStringDesc* ext) {
	NimStringDesc* result;
	keyvaluepair130008 LOC1;
	NimStringDesc* head;
	NimStringDesc* tail;
	TY168969 LOC2;
	result = 0;
	memset((void*)&LOC1, 0, sizeof(LOC1));
	nossplitPath(path, &LOC1);
	head = 0;
	head = copyString(LOC1.Field0);
	tail = 0;
	tail = copyString(LOC1.Field1);
	memset((void*)LOC2, 0, sizeof(LOC2));
	LOC2[0] = getgeneratedpath_168429();
	LOC2[1] = noschangeFileExt(tail, ext);
	result = nosjoinPathOpenArray(LOC2, 2);
	return result;
}

N_NIMCALL(NimStringDesc*, withpackagename_168946)(NimStringDesc* path) {
	NimStringDesc* result;
	NimStringDesc* x;
	result = 0;
	x = getpackagename_168825(path);
	{
		if (!(x->Sup.len == 0)) goto LA3;
		result = copyString(path);
	}
	goto LA1;
	LA3: ;
	{
		TY116204 LOC6;
		NimStringDesc* p;
		NimStringDesc* file;
		NimStringDesc* ext;
		NimStringDesc* LOC7;
		NimStringDesc* LOC8;
		NimStringDesc* LOC9;
		memset((void*)&LOC6, 0, sizeof(LOC6));
		nossplitFile(path, &LOC6);
		p = 0;
		p = LOC6.Field0;
		file = 0;
		file = LOC6.Field1;
		ext = 0;
		ext = LOC6.Field2;
		LOC7 = 0;
		LOC8 = 0;
		LOC8 = rawNewString(x->Sup.len + file->Sup.len + 1);
appendString(LOC8, x);
appendChar(LOC8, 95);
appendString(LOC8, file);
		LOC9 = 0;
		LOC9 = HEX2F_115899(p, LOC8);
		LOC7 = rawNewString(LOC9->Sup.len + ext->Sup.len + 0);
appendString(LOC7, LOC9);
appendString(LOC7, ext);
		result = LOC7;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, rawfindfile_169292)(NimStringDesc* f) {
	NimStringDesc* result;
	result = 0;
	{
		NimStringDesc* it_169296;
		tstrentry126024* it_169302;
		it_169296 = 0;
		it_169302 = ((tstrentry126024*) (searchpaths_168122.Head));
		{
			while (1) {
				if (!!((it_169302 == NIM_NIL))) goto LA3;
				it_169296 = (*it_169302).Data;
				result = nosjoinPath(it_169296, f);
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = nosexistsFile(result);
					if (!LOC6) goto LA7;
					result = canonicalizepath_168388(result);
					goto BeforeRet;
				}
				LA7: ;
				it_169302 = ((tstrentry126024*) ((*it_169302).Sup.Next));
			} LA3: ;
		}
	}
	result = copyString(((NimStringDesc*) &TMP39));
	BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, rawfindfile2_169318)(NimStringDesc* f) {
	NimStringDesc* result;
	tstrentry126024* it;
	result = 0;
	it = ((tstrentry126024*) (lazypaths_168123.Head));
	{
		while (1) {
			if (!!((it == NIM_NIL))) goto LA2;
			result = nosjoinPath((*it).Data, f);
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = nosexistsFile(result);
				if (!LOC5) goto LA6;
				bringtofront_126741(&lazypaths_168123, &it->Sup);
				result = canonicalizepath_168388(result);
				goto BeforeRet;
			}
			LA6: ;
			it = ((tstrentry126024*) ((*it).Sup.Next));
		} LA2: ;
	}
	result = copyString(((NimStringDesc*) &TMP39));
	BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, findfile_169356)(NimStringDesc* f) {
	NimStringDesc* result;
	result = 0;
	result = rawfindfile_169292(f);
	{
		NimStringDesc* LOC5;
		if (!(result->Sup.len == 0)) goto LA3;
		LOC5 = 0;
		LOC5 = nsuToLowerStr(f);
		result = rawfindfile_169292(LOC5);
		{
			if (!(result->Sup.len == 0)) goto LA8;
			result = rawfindfile2_169318(f);
			{
				NimStringDesc* LOC14;
				if (!(result->Sup.len == 0)) goto LA12;
				LOC14 = 0;
				LOC14 = nsuToLowerStr(f);
				result = rawfindfile2_169318(LOC14);
			}
			LA12: ;
		}
		LA8: ;
	}
	LA3: ;
	return result;
}

N_NIMCALL(NimStringDesc*, findmodule_169366)(NimStringDesc* modulename, NimStringDesc* currentmodule) {
	NimStringDesc* result;
	NimStringDesc* m;
	NimStringDesc* currentpath;
	TY116204 LOC1;
	result = 0;
	m = nosaddFileExt(modulename, ((NimStringDesc*) &TMP1384));
	memset((void*)&LOC1, 0, sizeof(LOC1));
	nossplitFile(currentmodule, &LOC1);
	currentpath = LOC1.Field0;
	result = HEX2F_115899(currentpath, m);
	{
		NIM_BOOL LOC4;
		LOC4 = 0;
		LOC4 = nosexistsFile(result);
		if (!!(LOC4)) goto LA5;
		result = findfile_169356(m);
	}
	LA5: ;
	return result;
}

N_NIMCALL(NimStringDesc*, removetrailingdirsep_168418)(NimStringDesc* path) {
	NimStringDesc* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 < path->Sup.len);
		if (!(LOC3)) goto LA4;
		LOC3 = ((NU8)(path->data[(NI32)(path->Sup.len - 1)]) == (NU8)(47));
		LA4: ;
		if (!LOC3) goto LA5;
		result = copyStrLast(path, 0, (NI32)(path->Sup.len - 2));
	}
	goto LA1;
	LA5: ;
	{
		result = copyString(path);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, existsconfigvar_168338)(NimStringDesc* key) {
	NIM_BOOL result;
	result = 0;
	result = nsthasKey(gconfigvars_168229, key);
	return result;
}

N_NIMCALL(NimStringDesc*, getconfigvar_168348)(NimStringDesc* key) {
	NimStringDesc* result;
	result = 0;
	result = nstGet(gconfigvars_168229, key);
	return result;
}

N_NIMCALL(NimStringDesc*, canondynlibname_169468)(NimStringDesc* s) {
	NimStringDesc* result;
	NI start;
	NI ende;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = nsuStartsWith(s, ((NimStringDesc*) &TMP1871));
		if (!LOC3) goto LA4;
		start = 3;
	}
	goto LA1;
	LA4: ;
	{
		start = 0;
	}
	LA1: ;
	ende = nsuFindCharSet(s, TMP1872, 0);
	{
		if (!(0 <= ende)) goto LA9;
		result = copyStrLast(s, start, (NI32)(ende - 1));
	}
	goto LA7;
	LA9: ;
	{
		result = copyStr(s, start);
	}
	LA7: ;
	return result;
}

N_NIMCALL(void, incldynliboverride_169481)(NimStringDesc* lib) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = canondynlibname_169468(lib);
	nstPut(gdlloverrides_168230, LOC1, ((NimStringDesc*) &TMP1873));
}

N_NIMCALL(void, setconfigvar_168358)(NimStringDesc* key, NimStringDesc* val) {
	nstPut(gconfigvars_168229, key, val);
}

N_NIMCALL(NIM_BOOL, isdynliboverride_169490)(NimStringDesc* lib) {
	NIM_BOOL result;
	NimStringDesc* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = canondynlibname_169468(lib);
	result = nsthasKey(gdlloverrides_168230, LOC1);
	return result;
}

N_NIMCALL(void, libcandidates_169409)(NimStringDesc* s, TY118408** dest) {
	NI le;
	NI ri;
	le = nsuFindChar(s, 40, 0);
	ri = nsuFindChar(s, 41, (NI32)(le + 1));
	{
		NIM_BOOL LOC3;
		NimStringDesc* prefix;
		NimStringDesc* suffix;
		LOC3 = 0;
		LOC3 = (0 <= le);
		if (!(LOC3)) goto LA4;
		LOC3 = (le < ri);
		LA4: ;
		if (!LOC3) goto LA5;
		prefix = copyStrLast(s, 0, (NI32)(le - 1));
		suffix = copyStr(s, (NI32)(ri + 1));
		{
			NimStringDesc* middle_169420;
			NimStringDesc* HEX3Atmp_169440;
			NI last_169444;
			middle_169420 = 0;
			HEX3Atmp_169440 = 0;
			HEX3Atmp_169440 = copyStrLast(s, (NI32)(le + 1), (NI32)(ri - 1));
			last_169444 = 0;
			{
				if (!(0 < HEX3Atmp_169440->Sup.len)) goto LA10;
				{
					while (1) {
						NI first_169446;
						NimStringDesc* LOC18;
						if (!(last_169444 <= HEX3Atmp_169440->Sup.len)) goto LA13;
						first_169446 = last_169444;
						{
							while (1) {
								NIM_BOOL LOC16;
								LOC16 = 0;
								LOC16 = (last_169444 < HEX3Atmp_169440->Sup.len);
								if (!(LOC16)) goto LA17;
								LOC16 = !(((NU8)(HEX3Atmp_169440->data[last_169444]) == (NU8)(124)));
								LA17: ;
								if (!LOC16) goto LA15;
								last_169444 += 1;
							} LA15: ;
						}
						middle_169420 = copyStrLast(HEX3Atmp_169440, first_169446, (NI32)(last_169444 - 1));
						LOC18 = 0;
						LOC18 = rawNewString(prefix->Sup.len + middle_169420->Sup.len + suffix->Sup.len + 0);
appendString(LOC18, prefix);
appendString(LOC18, middle_169420);
appendString(LOC18, suffix);
						libcandidates_169409(LOC18, dest);
						last_169444 += 1;
					} LA13: ;
				}
			}
			LA10: ;
		}
	}
	goto LA1;
	LA5: ;
	{
		NimStringDesc* LOC20;
		(*dest) = (TY118408*) incrSeq(&((*dest))->Sup, sizeof(NimStringDesc*));
		LOC20 = 0;
		LOC20 = (*dest)->data[(*dest)->Sup.len-1]; (*dest)->data[(*dest)->Sup.len-1] = copyStringRC1(s);
		if (LOC20) nimGCunrefNoCycle(LOC20);
	}
	LA1: ;
}

N_NIMCALL(NimStringDesc*, getoutfile_168368)(NimStringDesc* filename, NimStringDesc* ext) {
	NimStringDesc* result;
	result = 0;
	{
		if (!!(((outfile_168124) && (outfile_168124)->Sup.len == 0))) goto LA3;
		result = copyString(outfile_168124);
	}
	goto LA1;
	LA3: ;
	{
		result = noschangeFileExt(filename, ext);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, maincommandarg_168317)(void) {
	NimStringDesc* result;
	result = 0;
	{
		if (!(0 < commandargs_168259->Sup.len)) goto LA3;
		result = copyString(commandargs_168259->data[0]);
	}
	goto LA1;
	LA3: ;
	{
		result = copyString(gprojectname_168232);
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, resetpackagecache_168605)(void) {
	asgnRef((void**) &packagecache_168601, nstnewStringTable(((NU8) 1)));
}
NIM_EXTERNC N_NOINLINE(void, HEX00_optionsInit)(void) {
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	NimStringDesc* LOC4;
	NimStringDesc* LOC5;
	NimStringDesc* LOC6;
	NimStringDesc* LOC7;
	NimStringDesc* LOC8;
	NimStringDesc* LOC9;
	NimStringDesc* LOC10;
	goptions_168116 = 2202238;
	gglobaloptions_168118 = 134217728;
	gcmd_168120 = ((NU8) 0);
	gselectedgc_168121 = ((NU8) 3);
	LOC1 = 0;
	LOC1 = outfile_168124; outfile_168124 = copyStringRC1(((NimStringDesc*) &TMP39));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	LOC2 = 0;
	LOC2 = docseesrcurl_168125; docseesrcurl_168125 = copyStringRC1(((NimStringDesc*) &TMP39));
	if (LOC2) nimGCunrefNoCycle(LOC2);
	LOC3 = 0;
	LOC3 = headerfile_168126; headerfile_168126 = copyStringRC1(((NimStringDesc*) &TMP39));
	if (LOC3) nimGCunrefNoCycle(LOC3);
	gverbosity_168127 = 1;
	LOC4 = 0;
	LOC4 = gevalexpr_168130; gevalexpr_168130 = copyStringRC1(((NimStringDesc*) &TMP39));
	if (LOC4) nimGCunrefNoCycle(LOC4);
	isserving_168133 = NIM_FALSE;
	gdirtybufferidx_168134 = ((NI32) 0);
	gdirtyoriginalidx_168135 = ((NI32) 0);
	gnonimblepath_168136 = NIM_FALSE;
	asgnRef((void**) &gconfigvars_168229, nstnewStringTable(((NU8) 2)));
	asgnRef((void**) &gdlloverrides_168230, nstnewStringTable(((NU8) 1)));
	LOC5 = 0;
	LOC5 = libpath_168231; libpath_168231 = copyStringRC1(((NimStringDesc*) &TMP39));
	if (LOC5) nimGCunrefNoCycle(LOC5);
	LOC6 = 0;
	LOC6 = gprojectname_168232; gprojectname_168232 = copyStringRC1(((NimStringDesc*) &TMP39));
	if (LOC6) nimGCunrefNoCycle(LOC6);
	LOC7 = 0;
	LOC7 = gprojectpath_168233; gprojectpath_168233 = copyStringRC1(((NimStringDesc*) &TMP39));
	if (LOC7) nimGCunrefNoCycle(LOC7);
	LOC8 = 0;
	LOC8 = gprojectfull_168234; gprojectfull_168234 = copyStringRC1(((NimStringDesc*) &TMP39));
	if (LOC8) nimGCunrefNoCycle(LOC8);
	LOC9 = 0;
	LOC9 = nimcachedir_168236; nimcachedir_168236 = copyStringRC1(((NimStringDesc*) &TMP39));
	if (LOC9) nimGCunrefNoCycle(LOC9);
	LOC10 = 0;
	LOC10 = command_168237; command_168237 = copyStringRC1(((NimStringDesc*) &TMP39));
	if (LOC10) nimGCunrefNoCycle(LOC10);
	if (commandargs_168259) nimGCunrefNoCycle(commandargs_168259);
	commandargs_168259 = (TY118408*) newSeqRC1((&NTI118408), 0);
	gkeepcomments_168260 = NIM_TRUE;
	if (implicitimports_168282) nimGCunrefNoCycle(implicitimports_168282);
	implicitimports_168282 = (TY118408*) newSeqRC1((&NTI118408), 0);
	if (implicitincludes_168304) nimGCunrefNoCycle(implicitincludes_168304);
	implicitincludes_168304 = (TY118408*) newSeqRC1((&NTI118408), 0);
	asgnRef((void**) &packagecache_168601, nstnewStringTable(((NU8) 1)));
}

NIM_EXTERNC N_NOINLINE(void, HEX00_optionsDatInit)(void) {
static TNimNode* TMP758[22];
NI TMP760;
static char* NIM_CONST TMP759[22] = {
"optNone", 
"optObjCheck", 
"optFieldCheck", 
"optRangeCheck", 
"optBoundsCheck", 
"optOverflowCheck", 
"optNilCheck", 
"optNaNCheck", 
"optInfCheck", 
"optAssert", 
"optLineDir", 
"optWarns", 
"optHints", 
"optOptimizeSpeed", 
"optOptimizeSize", 
"optStackTrace", 
"optLineTrace", 
"optEndb", 
"optByRef", 
"optProfiler", 
"optImplicitStatic", 
"optPatterns"};
static TNimNode TMP21[24];
NTI168014.size = sizeof(NU8);
NTI168014.kind = 14;
NTI168014.base = 0;
NTI168014.flags = 3;
for (TMP760 = 0; TMP760 < 22; TMP760++) {
TMP21[TMP760+0].kind = 1;
TMP21[TMP760+0].offset = TMP760;
TMP21[TMP760+0].name = TMP759[TMP760];
TMP758[TMP760] = &TMP21[TMP760+0];
}
TMP21[22].len = 22; TMP21[22].kind = 2; TMP21[22].sons = &TMP758[0];
NTI168014.node = &TMP21[22];
NTI168016.size = sizeof(NU32);
NTI168016.kind = 19;
NTI168016.base = (&NTI168014);
NTI168016.flags = 3;
TMP21[23].len = 0; TMP21[23].kind = 0;
NTI168016.node = &TMP21[23];
}
