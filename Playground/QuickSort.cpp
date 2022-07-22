#include<stdio.h>
#include <stdlib.h>


void swap(int* a, int *b);
void quicksort(int arr[10], int start, int end);
int partition(int arr[10], int start, int end);

int main() {
  int arr[] = {1,0,4,6,5,3,8,2,7,9};
  int n = sizeof(arr)/sizeof(arr[0]);
  quicksort(arr, 0, n-1);
  for (int i=0; i < n; i++) printf("%d ", arr[i]);
  printf("\n \n \n \n \n \n");
  return 0;
}

void swap(int* a, int* b){
  int t = *a;
  *a = *b;
  *b = t;
}

void quicksort(int arr[], int start, int end){
  if(start >= end) return;
  int i = partition(arr, start,end);
  quicksort(arr, i+1, end);
  quicksort(arr, start, i-1);

}

int partition(int arr[], int start, int end){
  int pivotVal = arr[end];
  int juiceIndex = start - 1;
  for (int i = start; i < end; i++) {
    if(arr[i] <=  pivotVal){
      juiceIndex ++;
      swap(&arr[i], &arr[juiceIndex]);
    }
  }
  swap(&arr[juiceIndex + 1], &arr[end]);
  return (juiceIndex + 1);

}
