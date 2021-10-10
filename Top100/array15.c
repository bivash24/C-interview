/*Sort binary array in linear time

Given a binary array, sort it in linear time and constant space. The output should print all zeroes, followed by all ones.
For example,
Input:  { 1, 0, 1, 0, 1, 0, 0, 1 }
Output: { 0, 0, 0, 0, 1, 1, 1, 1 }
*/
#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void sortarr(int *arr, int n) {
  int start=0,mid=0;
  int end=n-1;
  int pivot=1;
  while(mid<end){
    if(arr[mid]<pivot){
      swap(&arr[mid],&arr[start]);
      start++;
      mid++;
    }
    if(arr[mid]>=pivot){
      swap(&arr[mid],&arr[end]);
      end--;
    }
    else
      mid++;
  }
}

int main()
{
  int n=0;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  sortarr(arr,n);
  for(int i=0;i<n;i++)
    printf("%d ",arr[i]);

  return 0;
}
