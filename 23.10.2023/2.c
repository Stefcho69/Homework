#include <stdio.h>
#define BIGGER_NUM(X, Y) \
    if ((X) > (Y))  \
        printf("%d", (X)); \
    else  \
        printf("%d", (Y)); \
    

void main() {
    int X = 3, Y = 6;
    BIGGER_NUM(X, Y)
}