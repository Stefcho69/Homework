#include <stdio.h>

int compareasc(const void *a, const void *b){
  if(*(int *)a > *(int *)b){
    return 1;
  }
  else if(*(int *)a == *(int *)b){
    return 0;
  }
  else{
    return -1;
  }
}

int comparedesc(const void *a, const void *b){
  if(*(int *)a < *(int *)b){
    return 1;
  }
  else if(*(int *)a == *(int *)b){
    return 0;
  }
  else{
    return -1;
  }
}

void swapelements(void * a, void * b){
  int temp = *(int *)a;
  *(int *)a = *(int *)b;
  *(int *)b = temp;
}

void bubblesort(int arr[],int arrlen, int (*compare)(const void *, const void *), void (*swapelements)( void *, void *)){
  for(int i = 0; i < arrlen - 1; i++)
    {
      for(int j = 0; j < arrlen - i - 1; j++)
        {
          if(compare(&arr[j], &arr[j+1]) == 1)
          {
            swapelements(&arr[j], &arr[j+1]);
          }
        }
    }
}

int main(){
int arr[5] = {11, 2, 13, 4 ,15};
bubblesort(arr, 5, compareasc, swapelements);
printf("Ascending order: ");
for(int i = 0;i < 5; i++)
{
  printf("%d ", arr[i]);
}
  printf("\nDescending order: ");
bubblesort(arr, 5 , comparedesc, swapelements);
for(int i = 0;i < 5; i++)
{
  printf("%d ", arr[i]);
}
}