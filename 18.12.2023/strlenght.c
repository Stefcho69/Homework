#include<stdio.h>
#include"mystrings.h"

void main(int argc, char **argv){
if(argc != 2)
{
   printf("Please type only one argument\n");
}
  else
{
  printf("%d\n", strlength(argv[1]));
}


}

