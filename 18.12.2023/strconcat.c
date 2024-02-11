#include<stdio.h>
#include"mystrings.h"

void main(int argc, char **argv)
{
  if(argc != 3)
 printf("Error: too much arguments\n"); 
  else
  {
    strconcat(argv[1], argv[2]);
printf("%s\n", argv[1]);
  }

}
  
