#include<stdio.h>
#include"mystrings.h"

void main(int argc, char **argv){
  if(argc != 3)
    printf("Please type 2 arguments\n");
  else
  {
    int output = strcompare( argv[1], argv[2] );
  printf("%d\n", output);
  }
  
  
 }

