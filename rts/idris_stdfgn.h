#ifndef _IDRISSTDFGN_H
#define _IDRISSTDFGN_H

#include "idris_rts.h"

// A collection of useful standard functions to be used by the prelude.

void putStr(char* str);
//char* readStr();

void* fileOpen(char* f, char* mode);
void fileClose(void* h);
int fileEOF(void* h);
int fileError(void* h);
// return 0 on success
int idris_writeStr(void*h, char* str);

void* do_popen(const char* cmd, const char* mode);
int fpoll(void* h);

int idris_eqPtr(void* x, void* y);
int isNull(void* ptr);
void* idris_stdin();

char* getEnvPair(int i);

VAL idris_time();

void idris_forceGC();

#endif
