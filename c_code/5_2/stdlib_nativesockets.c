/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <string.h>
#include <sys/select.h>
#include <unistd.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY525219 TY525219;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NIM_CHAR TY110371[256];
struct TY525219 {
  TGenericSeq Sup;
  int data[SEQ_DECL_SIZE];
};
N_NIMCALL(int, toint_516820)(NU8 domain);
N_NIMCALL(int, toint_516823)(NU8 typ);
N_NIMCALL(int, toint_516826)(NU8 p);
N_NIMCALL(NimStringDesc*, HEX24_7801)(NU64 x);
N_NOINLINE(void, raiseoserror_120803)(NI32 errorcode, NimStringDesc* additionalinfo);
N_NIMCALL(NI32, oslasterror_120819)(void);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(struct timeval, timevalfrommilliseconds_520822)(NI timeout);
N_NIMCALL(void, createfdset_520831)(fd_set* fd, TY525219* s, NI* m);
N_NIMCALL(void, prunesocketset_521022)(TY525219** s, fd_set* fd);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
int osinvalidsocket_516644;
int nativeafinet_516645;
int nativeafinet6_516646;
TNimType NTI516604; /* Domain */
TNimType NTI516606; /* SockType */
TNimType NTI516608; /* Protocol */

N_NIMCALL(int, toint_516820)(NU8 domain) {
	int result;
	result = 0;
	switch (domain) {
	case ((NU8) 0):
	{
		result = AF_UNIX;
	}
	break;
	case ((NU8) 2):
	{
		result = AF_INET;
	}
	break;
	case ((NU8) 23):
	{
		result = AF_INET6;
	}
	break;
	default:
	{
	}
	break;
	}
	return result;
}

N_NIMCALL(int, toint_516823)(NU8 typ) {
	int result;
	result = 0;
	switch (typ) {
	case ((NU8) 1):
	{
		result = SOCK_STREAM;
	}
	break;
	case ((NU8) 2):
	{
		result = SOCK_DGRAM;
	}
	break;
	case ((NU8) 5):
	{
		result = SOCK_SEQPACKET;
	}
	break;
	case ((NU8) 3):
	{
		result = SOCK_RAW;
	}
	break;
	default:
	{
	}
	break;
	}
	return result;
}

N_NIMCALL(int, toint_516826)(NU8 p) {
	int result;
	result = 0;
	switch (p) {
	case ((NU8) 6):
	{
		result = IPPROTO_TCP;
	}
	break;
	case ((NU8) 17):
	{
		result = IPPROTO_UDP;
	}
	break;
	case ((NU8) 18):
	{
		result = IPPROTO_IP;
	}
	break;
	case ((NU8) 19):
	{
		result = IPPROTO_IPV6;
	}
	break;
	case ((NU8) 20):
	{
		result = IPPROTO_RAW;
	}
	break;
	case ((NU8) 21):
	{
		result = IPPROTO_ICMP;
	}
	break;
	default:
	{
	}
	break;
	}
	return result;
}

N_NIMCALL(int, newnativesocket_517001)(NU8 domain, NU8 socktype, NU8 protocol) {
	int result;
	int LOC1;
	int LOC2;
	int LOC3;
	result = 0;
	LOC1 = 0;
	LOC1 = toint_516820(domain);
	LOC2 = 0;
	LOC2 = toint_516823(socktype);
	LOC3 = 0;
	LOC3 = toint_516826(protocol);
	result = socket(LOC1, LOC2, LOC3);
	return result;
}

N_NIMCALL(NI16, ntohs_518001)(NI16 x) {
	NI16 result;
	result = 0;
	result = (NI16)((NI16)((NU16)(x) >> (NU16)(((NI16) 8))) | (NI16)((NU16)(x) << (NU16)(((NI16) 8))));
	return result;
}

N_NIMCALL(NI32, ntohl_517806)(NI32 x) {
	NI32 result;
	result = 0;
	result = (NI32)((NI32)((NI32)((NI32)((NU32)(x) >> (NU32)(((NI32) 24))) | (NI32)((NI32)((NU32)(x) >> (NU32)(((NI32) 8))) & ((NI32) 65280))) | (NI32)((NI32)((NU32)(x) << (NU32)(((NI32) 8))) & ((NI32) 16711680))) | (NI32)((NU32)(x) << (NU32)(((NI32) 24))));
	return result;
}

N_NIMCALL(int, bindaddr_517208)(int socket, struct sockaddr* name, socklen_t namelen) {
	int result;
	result = 0;
	result = bind(socket, name, namelen);
	return result;
}

N_NIMCALL(struct addrinfo*, getaddrinfo_517402)(NimStringDesc* address, NU16 port, NU8 domain, NU8 socktype, NU8 protocol) {
	struct addrinfo* result;
	struct addrinfo hints;
	int gairesult;
	NimStringDesc* LOC1;
	result = 0;
	memset((void*)(&hints), 0, sizeof(hints));
	result = NIM_NIL;
	hints.ai_family = toint_516820(domain);
	hints.ai_socktype = toint_516823(socktype);
	hints.ai_protocol = toint_516826(protocol);
	LOC1 = 0;
	LOC1 = HEX24_7801(port);
	gairesult = getaddrinfo(address->data, LOC1->data, (&hints), &result);
	{
		NI32 LOC6;
		NCSTRING LOC7;
		NimStringDesc* LOC8;
		if (!!((gairesult == ((NI32) 0)))) goto LA4;
		LOC6 = 0;
		LOC6 = oslasterror_120819();
		LOC7 = 0;
		LOC7 = (char *)gai_strerror(gairesult);
		LOC8 = 0;
		LOC8 = cstrToNimstr(LOC7);
		raiseoserror_120803(LOC6, LOC8);
	}
	LA4: ;
	return result;
}

N_NIMCALL(void, dealloc_517802)(struct addrinfo* ai) {
	freeaddrinfo(ai);
}

N_NIMCALL(int, listen_517215)(int socket, int backlog) {
	int result;
	result = 0;
	result = listen(socket, backlog);
	return result;
}

N_NIMCALL(struct timeval, timevalfrommilliseconds_520822)(NI timeout) {
	struct timeval result;
	memset((void*)(&result), 0, sizeof(result));
	{
		NI seconds;
		if (!!((timeout == ((NI) -1)))) goto LA3;
		seconds = (NI)(timeout / ((NI) 1000));
		result.tv_sec = ((NI) (((NI32) (seconds))));
		result.tv_usec = ((NI) (((NI32) ((NI)((NI)(timeout - (NI)(seconds * ((NI) 1000))) * ((NI) 1000))))));
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, createfdset_520831)(fd_set* fd, TY525219* s, NI* m) {
	FD_ZERO(fd);
	{
		int i_521002;
		NI i_521019;
		NI L_521021;
		i_521002 = 0;
		i_521019 = ((NI) 0);
		L_521021 = (s ? s->Sup.len : 0);
		{
			while (1) {
				if (!(i_521019 < L_521021)) goto LA3;
				i_521002 = s->data[i_521019];
				(*m) = (((*m) >= ((NI) (i_521002))) ? (*m) : ((NI) (i_521002)));
				FD_SET(i_521002, fd);
				i_521019 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, prunesocketset_521022)(TY525219** s, fd_set* fd) {
	NI i;
	NI L;
	i = ((NI) 0);
	L = ((*s) ? (*s)->Sup.len : 0);
	{
		while (1) {
			if (!(i < L)) goto LA2;
			{
				int LOC5;
				LOC5 = 0;
				LOC5 = FD_ISSET((*s)->data[i], fd);
				if (!(LOC5 == ((NI32) 0))) goto LA6;
				(*s)->data[i] = (*s)->data[(NI)(L - ((NI) 1))];
				L -= ((NI) 1);
			}
			goto LA3;
			LA6: ;
			{
				i += ((NI) 1);
			}
			LA3: ;
		} LA2: ;
	}
	(*s) = (TY525219*) setLengthSeq(&((*s))->Sup, sizeof(int), ((NI) (L)));
}

N_NIMCALL(NI, select_521077)(TY525219** readfds, NI timeout) {
	NI result;
	struct timeval tv;
	fd_set rd;
	NI m;
	result = 0;
	tv = timevalfrommilliseconds_520822(timeout);
	memset((void*)(&rd), 0, sizeof(rd));
	m = ((NI) 0);
	createfdset_520831((&rd), (*readfds), (&m));
	{
		int LOC5;
		if (!!((timeout == ((NI) -1)))) goto LA3;
		LOC5 = 0;
		LOC5 = select(((int) ((NI)(m + ((NI) 1)))), (&rd), NIM_NIL, NIM_NIL, (&tv));
		result = ((NI) (LOC5));
	}
	goto LA1;
	LA3: ;
	{
		int LOC7;
		LOC7 = 0;
		LOC7 = select(((int) ((NI)(m + ((NI) 1)))), (&rd), NIM_NIL, NIM_NIL, NIM_NIL);
		result = ((NI) (LOC7));
	}
	LA1: ;
	prunesocketset_521022(readfds, (&rd));
	return result;
}

N_NIMCALL(void, close_517013)(int socket) {
	int LOC1;
	LOC1 = 0;
	LOC1 = close(socket);
}
NIM_EXTERNC N_NOINLINE(void, stdlib_nativesocketsInit000)(void) {
	osinvalidsocket_516644 = ((int) -1);
	nativeafinet_516645 = AF_INET;
	nativeafinet6_516646 = AF_INET6;
}

NIM_EXTERNC N_NOINLINE(void, stdlib_nativesocketsDatInit000)(void) {
static TNimNode* TMP5263[3];
NI TMP5265;
static char* NIM_CONST TMP5264[3] = {
"AF_UNIX", 
"AF_INET", 
"AF_INET6"};
static TNimNode* TMP5266[4];
NI TMP5268;
static char* NIM_CONST TMP5267[4] = {
"SOCK_STREAM", 
"SOCK_DGRAM", 
"SOCK_RAW", 
"SOCK_SEQPACKET"};
static TNimNode* TMP5269[6];
NI TMP5271;
static char* NIM_CONST TMP5270[6] = {
"IPPROTO_TCP", 
"IPPROTO_UDP", 
"IPPROTO_IP", 
"IPPROTO_IPV6", 
"IPPROTO_RAW", 
"IPPROTO_ICMP"};
static TNimNode TMP1191[16];
NTI516604.size = sizeof(NU8);
NTI516604.kind = 14;
NTI516604.base = 0;
NTI516604.flags = 3;
for (TMP5265 = 0; TMP5265 < 3; TMP5265++) {
TMP1191[TMP5265+0].kind = 1;
TMP1191[TMP5265+0].offset = TMP5265;
TMP1191[TMP5265+0].name = TMP5264[TMP5265];
TMP5263[TMP5265] = &TMP1191[TMP5265+0];
}
TMP1191[0].offset = 0;
TMP1191[1].offset = 2;
TMP1191[2].offset = 23;
TMP1191[3].len = 3; TMP1191[3].kind = 2; TMP1191[3].sons = &TMP5263[0];
NTI516604.node = &TMP1191[3];
NTI516604.flags = 1<<2;
NTI516606.size = sizeof(NU8);
NTI516606.kind = 14;
NTI516606.base = 0;
NTI516606.flags = 3;
for (TMP5268 = 0; TMP5268 < 4; TMP5268++) {
TMP1191[TMP5268+4].kind = 1;
TMP1191[TMP5268+4].offset = TMP5268;
TMP1191[TMP5268+4].name = TMP5267[TMP5268];
TMP5266[TMP5268] = &TMP1191[TMP5268+4];
}
TMP1191[4].offset = 1;
TMP1191[5].offset = 2;
TMP1191[6].offset = 3;
TMP1191[7].offset = 5;
TMP1191[8].len = 4; TMP1191[8].kind = 2; TMP1191[8].sons = &TMP5266[0];
NTI516606.node = &TMP1191[8];
NTI516606.flags = 1<<2;
NTI516608.size = sizeof(NU8);
NTI516608.kind = 14;
NTI516608.base = 0;
NTI516608.flags = 3;
for (TMP5271 = 0; TMP5271 < 6; TMP5271++) {
TMP1191[TMP5271+9].kind = 1;
TMP1191[TMP5271+9].offset = TMP5271;
TMP1191[TMP5271+9].name = TMP5270[TMP5271];
TMP5269[TMP5271] = &TMP1191[TMP5271+9];
}
TMP1191[9].offset = 6;
TMP1191[10].offset = 17;
TMP1191[11].offset = 18;
TMP1191[12].offset = 19;
TMP1191[13].offset = 20;
TMP1191[14].offset = 21;
TMP1191[15].len = 6; TMP1191[15].kind = 2; TMP1191[15].sons = &TMP5269[0];
NTI516608.node = &TMP1191[15];
NTI516608.flags = 1<<2;
}

