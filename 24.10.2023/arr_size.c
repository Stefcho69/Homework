#include<stdio.h>
#include<math.h>

#define ARRAY_SIZE 11


void main(){
    #ifdef ARRAY_SIZE
    #if ARRAY_SIZE < 11 && ARRAY_SIZE > 0
    int arr[ARRAY_SIZE];
    for(int i = 0;i < ARRAY_SIZE;i++)
{
   arr[i] = pow(2, i);
   printf("%d\n",arr[i]);
  
}
    #else 
    printf("The size of the array is wrong. \n");
    #endif
    #else 
    printf("The size of the array is not defined.\n");
    #endif
}
