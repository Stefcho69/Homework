#include <stdio.h>
#define DEBUG(X)\
printf("The name of the variable is: " #X "\n");\
printf("The value of variable " #X " is %d \n",X );\
printf("The file this variable is used in is called %s\n",__FILE__);\
printf("The information you are currently reading is typed on line %d\n",__LINE__);\

void main(){
    int Variable=1234;
    DEBUG(Variable)
}