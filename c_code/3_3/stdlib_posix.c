/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <sys/types.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
int Mappopulate_112320;
TNimType NTI110274; /* Pid */
NIM_EXTERNC N_NOINLINE(void, stdlib_posixInit000)(void) {
	Mappopulate_112320 = ((int) 0);
}

NIM_EXTERNC N_NOINLINE(void, stdlib_posixDatInit000)(void) {
NTI110274.size = sizeof(pid_t);
NTI110274.kind = 31;
NTI110274.base = 0;
NTI110274.flags = 3;
}

