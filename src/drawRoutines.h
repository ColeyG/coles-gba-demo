#ifndef DRAWROUTINES
#define DRAWROUTINES

int coleRoutine[2340] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 3, 1, 3, 3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 1, 0, 1, 1, 1, 3, 1, 1, 1, 1, 1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1, 1, 1, 0, 1, 3, 3, 3, 1, 1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1, 0, 1, 3, 1, 1, 1, 1, 1, 1, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 1, 1, 1, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 1, 1, 1, 3, 3, 4, 4, 4, 4, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 1, 1, 1, 0, 1, 3, 1, 1, 1, 1, 1, 1, 3, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 1, 1, 1, 3, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 1, 1, 1, 3, 5, 4, 4, 4, 4, 4, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 1, 1, 1, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 1, 1, 1, 3, 4, 4, 4, 4, 4, 5, 3, 2, 2, 2, 2, 2, 2, 2, 2, 1, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 3, 3, 4, 4, 4, 4, 6, 6, 6, 6, 6, 4, 4, 4, 4, 3, 1, 1, 3, 3, 4, 4, 4, 4, 6, 6, 6, 6, 6, 4, 4, 4, 4, 3, 1, 1, 3, 3, 4, 4, 4, 4, 6, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 4, 4, 4, 6, 6, 6, 6, 4, 4, 4, 5, 3, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 3, 5, 4, 4, 4, 5, 6, 6, 6, 6, 5, 4, 4, 4, 5, 3, 1, 1, 3, 5, 4, 4, 4, 5, 6, 6, 6, 6, 5, 4, 4, 4, 5, 3, 1, 1, 3, 5, 4, 4, 4, 5, 6, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 5, 4, 4, 5, 6, 6, 6, 5, 4, 4, 5, 5, 3, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 3, 3, 4, 4, 4, 4, 6, 6, 3, 3, 3, 4, 4, 4, 4, 3, 3, 1, 3, 3, 4, 4, 4, 4, 6, 6, 1, 6, 6, 4, 4, 4, 4, 3, 3, 1, 3, 3, 4, 4, 4, 4, 6, 6, 3, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 4, 4, 4, 6, 6, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 3, 3, 4, 4, 4, 4, 6, 6, 3, 1, 3, 4, 4, 4, 4, 3, 3, 1, 3, 3, 4, 4, 4, 4, 6, 6, 1, 6, 6, 4, 4, 4, 4, 3, 3, 1, 3, 3, 4, 4, 4, 4, 6, 6, 3, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 4, 4, 4, 4, 6, 6, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 3, 5, 4, 4, 4, 5, 6, 3, 1, 1, 3, 4, 4, 4, 5, 3, 1, 1, 3, 5, 4, 4, 4, 5, 6, 1, 1, 6, 5, 4, 4, 4, 5, 3, 1, 1, 3, 5, 4, 4, 4, 5, 6, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 5, 4, 4, 4, 5, 6, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 3, 3, 4, 4, 4, 4, 6, 6, 3, 1, 1, 3, 4, 4, 4, 3, 3, 1, 3, 3, 4, 4, 4, 4, 6, 6, 1, 6, 6, 4, 4, 4, 4, 3, 3, 1, 3, 3, 4, 4, 4, 4, 6, 6, 3, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 4, 4, 4, 4, 6, 6, 3, 3, 3, 3, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 3, 3, 4, 4, 4, 4, 6, 6, 3, 1, 1, 1, 3, 3, 3, 1, 1, 1, 3, 3, 4, 4, 4, 4, 6, 6, 1, 6, 6, 4, 4, 4, 4, 3, 3, 1, 3, 3, 4, 4, 4, 4, 6, 6, 3, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 3, 5, 4, 4, 4, 5, 6, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 5, 4, 4, 4, 5, 6, 1, 1, 6, 5, 4, 4, 4, 5, 3, 1, 1, 3, 5, 4, 4, 4, 5, 6, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 3, 3, 4, 4, 4, 4, 6, 6, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 3, 4, 4, 4, 4, 6, 6, 1, 6, 6, 4, 4, 4, 4, 3, 3, 1, 3, 3, 4, 4, 4, 4, 6, 6, 3, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 3, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 3, 3, 4, 4, 4, 4, 6, 6, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 3, 4, 4, 4, 4, 6, 6, 1, 6, 6, 4, 4, 4, 4, 3, 3, 1, 3, 3, 4, 4, 4, 4, 6, 6, 3, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 4, 4, 4, 4, 6, 6, 6, 6, 6, 3, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 3, 5, 4, 4, 4, 5, 6, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 3, 5, 4, 4, 4, 5, 6, 1, 1, 6, 5, 4, 4, 4, 5, 3, 1, 1, 3, 5, 4, 4, 4, 5, 6, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 5, 4, 4, 4, 5, 3, 3, 3, 3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 3, 3, 4, 4, 4, 4, 6, 6, 3, 1, 1, 1, 3, 3, 3, 1, 1, 1, 3, 3, 4, 4, 4, 4, 6, 6, 1, 6, 6, 4, 4, 4, 4, 3, 3, 1, 3, 3, 4, 4, 4, 4, 6, 6, 3, 2, 2, 2, 3, 3, 3, 2, 2, 3, 3, 4, 4, 4, 4, 3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 3, 3, 4, 4, 4, 4, 6, 6, 3, 3, 3, 3, 4, 4, 4, 3, 1, 1, 3, 3, 4, 4, 4, 4, 6, 6, 1, 6, 6, 4, 4, 4, 4, 3, 3, 1, 3, 3, 4, 4, 4, 4, 6, 6, 3, 3, 3, 3, 4, 4, 4, 3, 2, 3, 3, 4, 4, 4, 4, 3, 1, 1, 1, 1, 3, 3, 3, 3, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 3, 5, 4, 4, 4, 5, 6, 3, 3, 6, 5, 4, 4, 4, 5, 3, 1, 1, 3, 5, 4, 4, 4, 5, 6, 1, 1, 6, 5, 4, 4, 4, 5, 3, 1, 1, 3, 5, 4, 4, 4, 5, 6, 3, 3, 6, 5, 4, 4, 4, 5, 3, 2, 3, 5, 4, 4, 4, 5, 3, 1, 1, 1, 3, 4, 4, 5, 3, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 3, 4, 4, 4, 4, 6, 6, 6, 6, 6, 4, 4, 4, 4, 3, 3, 1, 3, 3, 4, 4, 4, 4, 6, 6, 6, 6, 6, 4, 4, 4, 4, 3, 3, 1, 3, 3, 4, 4, 4, 4, 6, 6, 6, 6, 6, 4, 4, 4, 4, 3, 3, 2, 3, 4, 4, 4, 4, 6, 3, 3, 1, 6, 4, 4, 4, 4, 3, 1, 1, 1, 1, 1, 1, 0, 1, 1, 3, 3, 4, 4, 4, 4, 6, 6, 6, 6, 6, 4, 4, 4, 4, 3, 3, 1, 3, 3, 4, 4, 4, 4, 6, 6, 6, 6, 6, 4, 4, 4, 4, 3, 3, 1, 3, 3, 4, 4, 4, 4, 6, 6, 6, 6, 6, 4, 4, 4, 4, 3, 2, 3, 3, 4, 4, 4, 4, 6, 6, 3, 3, 3, 4, 4, 4, 4, 3, 1, 1, 1, 1, 1, 1, 0, 1, 1, 3, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 3, 1, 1, 3, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 3, 1, 1, 3, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 3, 2, 3, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 3, 1, 1, 1, 1, 1, 1, 0, 1, 1, 3, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 1, 1, 3, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 1, 1, 3, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 2, 3, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 1, 1, 1, 1, 3, 1, 0, 1, 1, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 1, 1, 1, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 1, 1, 1, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 2, 2, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 1, 1, 1, 1, 1, 3, 1, 0, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1, 3, 3, 3, 1, 0, 1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1, 1, 1, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1, 1, 3, 1, 1, 1, 0, 1, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 3, 3, 1, 3, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0};
int coleMap[] = {0x25f9, 0x371b, 0x2ce4, 0x460b, 0x39ab, 0x20f5};

int lnr[574] = {1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 0, 1, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 2, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 2, 2, 2, 1, 1, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2, 0, 1, 2, 1, 2, 2, 2, 2, 2, 2, 2, 1, 1, 2, 2, 2, 1, 1, 2, 2, 1, 1, 2, 2, 2, 1, 1, 2, 1, 2, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 2, 1, 2, 1, 1, 2, 2, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 2, 0, 1, 1, 2, 2, 1, 2, 1, 2, 2, 1, 2, 2, 1, 2, 1, 2, 2, 2, 1, 2, 2, 2, 2, 2, 1, 1, 2, 1, 2, 1, 1, 2, 2, 2, 2, 1, 2, 2, 2, 2, 1, 1, 2, 2, 1, 1, 1, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 1, 2, 1, 2, 2, 2, 1, 2, 2, 0, 1, 2, 2, 2, 1, 1, 2, 1, 2, 1, 1, 1, 2, 2, 2, 1, 1, 2, 2, 1, 1, 2, 2, 2, 1, 1, 2, 2, 2, 1, 1, 2, 2, 2, 1, 1, 1, 2, 2, 2, 1, 1, 2, 1, 2, 1, 1, 2, 2, 2, 1, 2, 2, 2, 2, 1, 2, 2, 2, 2, 1, 1, 2, 2, 1, 2, 2, 2, 2, 1, 2, 2, 1, 1, 2, 1, 2, 2, 1, 2, 2, 0, 1, 2, 2, 2, 1, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 1, 2, 2, 1, 1, 2, 1, 2, 1, 1, 2, 2, 2, 2, 1, 2, 2, 2, 2, 1, 1, 2, 2, 2, 1, 1, 2, 2, 2, 1, 2, 1, 2, 1, 2, 1, 2, 2, 2, 2, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 2, 2, 2, 2, 1, 2, 1, 0, 1, 2, 2, 2, 1, 2, 2, 2, 2, 2, 1, 1, 2, 2, 2, 1, 1, 2, 2, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 1, 2, 2, 2, 1, 2, 2, 2, 2, 1, 1, 2, 2, 2, 1, 2, 2, 2, 1, 1, 2, 1, 2, 2, 2, 2, 2, 2, 1, 2, 0};
int lnrMap[] = {0x1864, 0x739c};

void drawRoutine(volatile unsigned short vram[], int Routine[], int size, int colorMap[], int offsetX, int offsetY)
{
  int i = 0;
  int x = 0;
  int y = 0;

  for (i = 0; i < size; i++)
  {
    if (Routine[i] == 0)
    {
      x = 0;
      y++;
    }
    else
    {
      place(vram, x + offsetX, y + offsetY, colorMap[Routine[i] - 1]);
      x++;
    }
  }
}

#endif
