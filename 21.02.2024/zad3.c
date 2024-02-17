#include <stdio.h>
void swap(void *a, void *b){
    int temp = *(int *)a;
    *(int *)a = *(int *)b;
    *(int *)b = temp;
}

int main(){
    int a = 6;
    int b = 7;
    printf("Before swap: %d %d \n",a ,b);
    int * pa = &a;
    int * pb = &b;
    swap(pa, pb);
    printf("After swap: %d %d ",*pa ,*pb);
    return 0;
}
