//Sort an array of 0’s, 1’s, and 2’s (Dutch National Flag Problem)
/* Given an array containing only 0’s, 1’s, and 2’s, sort it in linear time and using constant space.
For example,
Input:  { 0, 1, 2, 2, 1, 0, 0, 2, 0, 1, 1, 0 }
Output: { 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2 }
*/
#include <stdio.h>

void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void arrsort(int *arr, int n)
{
  int pivot = 1;
  int start = 0;
  int end = n-1;
  int mid = 0;
  while(mid<=end){
    if(arr[mid]<pivot){
      swap(&arr[mid],&arr[start]);
      start++;
      mid++;
    }
    else if(arr[mid]>pivot){
      swap(&arr[end],&arr[mid]);
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
  arrsort(arr,n);
  for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
  return 0;
}
