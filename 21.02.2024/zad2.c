#include <stdio.h>
#include <string.h>

int  main (){
    char name[255];
    fgets(name, 255, stdin);
    char * p = strchr(name, '\n');
    if(p != NULL)
    {
        *p = '\0';
      
    }
    else{
        printf("Error");
    }
  puts(name);
  return 0;
}