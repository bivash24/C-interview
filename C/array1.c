//Find a pair with the given sum in an array

#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void heapify(int *arr, int n, int i) {
  int left = 2*i+1;
  int right = 2*i+2;
  int largest = i;
  if(left<n && arr[left]>arr[largest])
    largest = left;
  if(right<n && arr[right]>arr[largest])
    largest = right;

  if(largest != i){
    swap(&arr[i],&arr[largest]);
    heapify(arr,n,largest);
  }
}

void sort(int *arr, int n) {
  for(int i=n/2-1;i>=0;i--)
    heapify(arr,n,i);
  for(int i=n-1;i>=0;i--){
    swap(&arr[0],&arr[i]);
    heapify(arr,i,0);
  }
  for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
}
void pair(int *arr, int n, int target) {
  sort(arr,n);
  int j = n-1;
  for(int i=0;i<n;i++) {
    if(arr[i]+arr[j]==target && i<j)
      printf("(%d %d)\n",arr[i],arr[j]);
    else if(arr[i]+arr[j]>target && i<j){
      j--;
      i--;
    }
  }
}
int main()
{
  int n=0;
  int target;
  scanf("%d%d",&n,&target);
  int arr[n];
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

  pair(arr, n, target);
return 0;
}
