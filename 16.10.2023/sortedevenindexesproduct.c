#include <stdio.h>
//Грешка на 22 ред при for цикъла трябва да е j и j+1 вместо и i и i+1 ; product=1 не 0; във функцията sortedevenindexesproduct i трябва да почва
//от 0 ,защото първия елемент на масив е на нулев индекс.
void bubblesort(int * arr, int arrlen);
int sortedevenindexesproduct(int *arr, int arrlen);

int main(void) {
  int array[5] = {1,9,3,2,5};
  
  int product = sortedevenindexesproduct(array, 5);

  printf("%d\n", product);
 
  return 0;
}

void bubblesort(int *arr, int arrlen) {
  int sorted = 0;
  for (int i = 0; i < arrlen - 1 && !sorted; i++) {
    sorted = 1;
    for (int j = 0; j < arrlen - i - 1; j++) {
      if (arr[j] > arr[j+1]) {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        sorted = 0;
      }
    }
  }
}

int sortedevenindexesproduct(int *arr, int arrlen) {
  bubblesort(arr, arrlen);
  int product = 1;
  for (int i = 0; i < arrlen; i+=2) {
    product *= arr[i];
  }
  return product;
}