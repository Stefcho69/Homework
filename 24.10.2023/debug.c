#include <stdio.h>
#define DEBUG

int sort(int a[], int n);
int sum(int a[], int n);


int main()
{
    int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    sort(arr, 10);
    #ifdef DEBUG
    for(int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    #endif
    sum(arr, 10);    
    return 0;
}

int sort(int a[], int n)
{
    int temp = 0;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int sum(int a[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(i%3 == 0){
            printf("\nOn index divisible by 3: %d ", a[i]);
            sum += a[i];
        }
    }
    printf("\nsum = %d\n", sum);
}