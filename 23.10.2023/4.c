#include<stdio.h> 

#define COMMAND(NAME,TYPE) TYPE ## _ ## NAME ## _command
#define DEFINE_COMMAND(NAME,TYPE) void COMMAND(NAME,TYPE)(void) 

DEFINE_COMMAND(pony, myLittle) {
  printf("This is the output of function myLittle_pony_command() \n");
}
DEFINE_COMMAND(function, another) {
  printf("This is the output of function another_function_command() \n ");
}
void main() {
  COMMAND(pony, myLittle)();
  COMMAND(function, another)();
  
}