//Maximum product of two integers in an array
#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void heapify(int *arr, int n, int i) {
  int largest = i;
  int left = 2*i+1;
  int right = 2*i+2;
  if(left < n && arr[largest]<arr[left])
    largest = left;
  if(right < n && arr[largest]<arr[right])
    largest = right;

  if(i != largest){
    swap(&arr[i],&arr[largest]);
    heapify(arr,n,largest);
  }
}

void sort(int *arr, int n) {
  for(int i=n/2-1;i>=0;i--)
    heapify(arr,n,i);
  for(int i=n-1;i>=0;i--){
    swap(&arr[i],&arr[0]);
    heapify(arr,i,0);
  }
  for(int i=0;i<n;i++)
  printf("%d ",arr[i]);
}

void max_prod(int *arr, int n) {
  int res = 0;
  sort(arr,n);
  res = arr[n-1]*arr[n-2];
  if(arr[0]*arr[1]>res){
    res = arr[1]*arr[0];
    printf("pair is (%d,%d)\n",arr[0],arr[1]);
  }
  printf("res=%d",res);
}

int main()
{
  int n=0;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  max_prod(arr, n);

  return 0;
}
