#include <stdio.h>
#define SWAP(A, B, TYPE) \
{\
TYPE t = A; \
    A = B; \
    B = t; \
}
    


#define SORT(NAME, SIZE, TYPE, COMPARE ) \
{ \
    TYPE t; \
    for(int i = 0; i < SIZE - 1; i++) \
    { \
        for(int j = 0 ; j < SIZE - 1 - i; j++) \
        { \
            if(NAME[j] COMPARE NAME[j+1]) \
            SWAP(NAME[j], NAME[j+1], TYPE) \
        } \
    } \
}

void main() {
    int arr[] = {34, 23, 56, 78, 89, 91, 21, 31, 41};

  printf("Array in ascending order:");
    SORT(arr, 9, int, >);
    for (int i = 0; i < 9; i++) {
        printf("%d ", arr[i]);
    }

  printf("\nArray in descending order:");
  SORT(arr,9,int,<);
    for (int i = 0; i < 9; i++) {
        printf("%d ", arr[i]);
    }
}