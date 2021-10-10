//Find maximum length subarray having a given sum
/*
Given an integer array, find the maximum length subarray having a given sum.
For example, consider the following array:
A[] = { 5, 6, -5, 5, 3, 5, 3, -2, 0 }
target = 8
Subarrays with sum 8 are
{ -5, 5, 3, 5 }
{ 3, 5 }
{ 5, 3 }
The longest subarray is { -5, 5, 3, 5 } having length 4
*/
#include <stdio.h>

void maxlengarr(int *arr, int n, int target) {
  int sum = 0;
  int j1=0,i1=0;
  for(int i=0;i<n;i++){
    sum = 0;
    for(int j=i;j<n;j++){
      sum +=arr[j];
      if(sum == target)
        if((j1-i1)<(j-i)){
          i1=i;
          j1=j;
        }
    }
  }
  while(i1<=j1)
    printf("%d ",arr[i1++]);
}

int main()
{
  int n=0,target=0;
  scanf("%d%d",&n,&target);
  int arr[n];
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  maxlengarr(arr,n,target);

  return 0;
}
