// Generated by python test-mulN.py 256

#include <stdio.h>
#include <stdlib.h>
#include "cpucycles.h"

#define WARMCACHE 30
#define NUMTESTS  100
#define QQ 4591

//#include "polymul_NxN.h"

//extern unsigned long cpucycles(void);
//extern void init_perfcounters (int do_reset, int enable_divider);
void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*));
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
extern void gf_polymul_256x256_divR(int *h, int *f, int *g);
int times[NUMTESTS+WARMCACHE];

void print16n (short *b, int n) {
  int i;
  printf("(%-5d) + (%-5d) * x",b[0],b[1]);
  for (i=2; i<16*n; i++) {
    if ((i&7)==0) printf ("\n ");
    printf ("+(%-5d)*x^%d",b[i],i);
  }
  printf("\n");
}

void rand16n (short *b, int n) {
  int i;
  
  for (i=0; i<16*n; i++) b[i] = rand() % QQ - (QQ >> 1);
}

int main (void) {
  int i, delta;
  int ff[128], gg[128], hh[256];
  short * f=(short *)ff; short * g=(short *)gg;
  unsigned long cycles, time1, time2;
  int c,j;
  
  init_perfcounters(1,0);  
  cycles = 0;
  for (i=0; i< NUMTESTS + WARMCACHE ; i++) { 

    do {
      rand16n(f,16);
    } while (f[0]==0);
    rand16n(g,16);

#if _NO_DEBUG_ != 1
    printf("f=GF4591x(");
    print16n(f,16);
    printf(")\ng=GF4591x(");
    print16n(g,16);
    printf(")\n");
#endif

    time1  = cpucycles();
    gf_polymul_256x256_divR(hh,ff,gg);
    time2  = cpucycles();    

#if _NO_DEBUG_ != 1
    printf("h=GF4591x(");
    print16n((short *)hh,32);
    printf(")\n");
#endif


    times[i] = time2-time1;
    if (i>= WARMCACHE) {
      cycles += (time2 - time1);
    }
  }
  for (i=0; i<WARMCACHE+NUMTESTS; i++) printf("%d ",times[i]);
  printf("%d cycles ",(cycles)/NUMTESTS);
  qsort(times+WARMCACHE, NUMTESTS, sizeof(int), cmpfunc);
  printf("%d cycles median\n",times[WARMCACHE+NUMTESTS/2]);
  //printf("fails %d\n",fail);
  return(0);
}
