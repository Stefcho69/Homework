#include <stdio.h>
#define SWAP(A,B,TYPE)\
TYPE t;\
t = A;\
A = B;\
B = t;

int main(void) {
int chislo1=123;
int chislo2=321; 
  
  SWAP(chislo1,chislo2,int)
  
  printf("chislo1=%d\n",chislo1);
  printf("chislo2=%d\n",chislo2);
  return 0;
}