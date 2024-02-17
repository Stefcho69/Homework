#include <stdio.h>

void main(){
    double a;
    double b;
    printf("Value of a: ");
    scanf("%lf",&a);
    printf("Value of b: ");
    scanf("%lf",&b);
    double * pa = &a;
    double * pb = &b;
    printf("The value of a is %lf on adress %p",*pa, pa);
    printf("The value of b is %lf on adress %p",*pb, pb);
    

}