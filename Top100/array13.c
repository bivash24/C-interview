//Find a pair with the given sum in an array
/*Given an unsorted integer array, find a pair with the given sum in it.

For example,
Input:

arr = [8, 7, 2, 5, 3, 1]
target = 10

Output:

Pair found (8, 2)
or
Pair found (7, 3)
*/
#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void heapify(int *arr,int n,int i){
  int left = 2*i+1;
  int right = 2*i+2;
  int largest = i;
  if(left<n && arr[largest]<arr[left])
    largest = left;
  if(right<n && arr[largest]<arr[right])
    largest = right;

  if(i!=largest){
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
}

void pair(int *arr, int n, int target) {
  int i=0;
  int j=n-1;
  sort(arr,n);
  while(i<j){
    if(arr[i]+arr[j]>target)
        j--;
    if(arr[i]+arr[j]==target && i<j){
        printf("pair(%d,%d)",arr[i],arr[j]);
        if(arr[i]+arr[j-1]==target && (j-1)<n)
            j--;
    }
    i++;
  }
}

int main()
{
  int n=0,target;
  scanf("%d%d",&n,&target);
  int arr[n];
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  pair(arr,n,target);

  return 0;
}
