#include<stdio.h>

int obshtoKratno(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int NOK(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    }
    return (a * b) / obshtoKratno(a, b);

  
}

void main(){
  int  a = 12, b = 16;
  int lcm = NOK(a, b);

  printf("NOK of %d and %d is: %d\n", a, b, lcm);
}