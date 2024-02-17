#include <stdio.h>

 int compareasc(const void *a, const void *b){
  if(*(int *)a > *(int *)b){
    return 1;
  }
  else if(*(int *)a == *(int *)b){
    return 0;
  }
  else{
    return -1;
  }
}

int comparedesc(const void *a, const void *b){
  if(*(int *)a < *(int *)b){
    return 1;
  }
  else if(*(int *)a == *(int *)b){
    return 0;
  }
  else{
    return -1;
  }
}

int main(void){
int a = 2;
int b = 1;
int result1 = compareasc(&a, &b);
printf("%d\n", result1);
int result2 = comparedesc(&a, &b);
printf("%d\n", result2);
}