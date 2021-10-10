//Find the maximum product of two integers in an array
/*Given an integer array, find the maximum product of two integers in it.
For example, consider array {-10, -3, 5, 6, -2}. The maximum product is the (-10, -3) or (5, 6) pair.
*/
#include <stdio.h>

void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}
void heapify(int *arr,int n,int i) {
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

void maxproduct(int *arr, int n) {
  int sum1,sum2;
  sort(arr,n);
  sum1 = arr[0]*arr[1];
  sum2 = arr[n-1]*arr[n-2];
  if(sum1>sum2)
    printf("%d*%d=%d",arr[0],arr[1],sum1);
  else
    printf("%d*%d=%d",arr[n-2],arr[n-1],sum2);
}

int main()
{
  int n=0;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  maxproduct(arr,n);

  return 0;
}
