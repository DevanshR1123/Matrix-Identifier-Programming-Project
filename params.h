#define MAX_ROWS 10
#define MAX_COLS 10

void swap(int*, int*);
int rank(int[MAX_ROWS][MAX_ROWS], int, int);
int nullity(int[MAX_ROWS][MAX_ROWS], int, int);
int trace(int[MAX_ROWS][MAX_COLS], int, int);
void rref(int[MAX_ROWS][MAX_COLS], int, int);

int upperT(int[MAX_ROWS][MAX_COLS], int, int);
int lowerT(int[MAX_ROWS][MAX_COLS], int, int);
int diagmat(int[MAX_ROWS][MAX_COLS], int, int);

void transpose(int[MAX_ROWS][MAX_COLS], int, int);
void copy(int[MAX_ROWS][MAX_COLS], int[MAX_ROWS][MAX_COLS], int, int);
void multiply(int[MAX_ROWS][MAX_ROWS], int[MAX_ROWS][MAX_COLS], int[MAX_ROWS][MAX_COLS], int, int, int);
int orthogonal(int[MAX_ROWS][MAX_COLS], int, int);

#include "copy.c"
#include "diagmat.c"
#include "lowerT.c"
#include "multiply.c"
#include "orthogonal.c"
#include "rank.c"
#include "rref.c"
#include "swap.c"
#include "trace.c"
#include "transpose.c"
#include "upperT.c"