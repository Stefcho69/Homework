#include <stdio.h>
#include <math.h>

int main(void)
{
    long number[5] = {2, 4, 3, 1, 8};
    for(int i = 0; i < 5; i++){
        number[i] = pow(number[i], 4);
        printf("%ld ", number[i]);
    }
}

//komanda: gcc zadcha4.c -o zadacha4.exe (za windows) 