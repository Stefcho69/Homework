#include<stdio.h>
//#undef _WIN32
//#define __linux__
//#define __APPLE__

#ifdef _WIN32
void BubbleSort(int arr[], int n);
int main(){
    int arr[] = {32, 40, 26, 49, 100, 200};
    //6
   BubbleSort(arr, 6);
    printf("Windows bubble sort: ");
   for(int j = 0;j < 6;j++)
   {
   printf("%d ", arr[j]);
   }
   return 0;
}
void BubbleSort(int arr[], int n){
     int temp = 0;
    for(int i = 0;i < n - 1 ;i++)
    {for(int j = 0;j < n - i - 1;j++) 
    {
        if(arr[j] < arr[j+1])
        {
    temp = arr[j];
    arr[j] = arr[j+1];
    arr[j+1] = temp;
        }
    }
        
    }
       
}
#elif defined(__linux__) 
void SelectionSort(int arr[], int n);
int main(){
int arr[] = {24, 22, 36, 14, 5};
SelectionSort(arr, 5);
printf("Linux selction sort: ");
for(int i = 0;i < 5;i++)
{
    printf("%d ",arr[i]);
}
return 0;
}
void SelectionSort(int arr[], int n)
{
 for(int i = 0;i < n - 1;i++)
 {int min_index = i;
    for(int j = i + 1;j < n - i - 1;j++)
    {
       if(arr[min_index] < arr[j])
    {
        min_index = j;
    } 
    }
int temp = arr[i];
arr[i] = arr[min_index];
arr[min_index] = temp;
 }
 
}

#elif defined(__APPLE__) 
void InsertionSort(int arr[], int n);
int main(){
    int arr[] = {10, 30, 20, 50, 40};
    InsertionSort(arr, 5);
    printf("Apple Insertion sort: ");
    for(int i = 0;i < 5;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
void InsertionSort(int arr[], int n){
    int temp;
for(int i = 1;i < n ;i++)
{
    for(int j = i;j > 0;j--)
    {
        if(arr[j] > arr[j-1])
        {
    temp = arr[j];
    arr[j] = arr[j-1];
    arr[j-1] = temp;
        }
        else 
        break;
    }
}
}
#else
void InvertArray(int arr[], int n);
int main(){
    int arr[] = {2, 3, 1, 8, 5};
InvertArray(arr, 5);
printf("inverted array:");
for(int i = 0;i < 5;i++)
{
    printf("%d ",arr[i]);
}
    return 0;
}
void InvertArray(int arr[], int n){
int temp;
for(int i = 0;i < n / 2;i++)
{
    temp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = temp;
}
}
#endif