#include "mystrings.h"

int strlength(char a[]){
  int b = 0;
  for(int i = 0; a[i] != '\0'; i++){
  b++;
  }
  return b;
}


void strconcat(char *a, const char *b) {
    char *end = a + strlength(a);

    while (*b != '\0') {
        *end++ = *b++;
    }
    *end = '\0';
}


int strcompare(char a[], char b[]){
for(int i = 0; a[i] != '\0' && b[i] != '\0'; i++){
  if(a[i] < b[i]){
    return -1;
}
  else if(a[i] > b[i])
  {
      return 1;
  }

}
  return 0;
}

