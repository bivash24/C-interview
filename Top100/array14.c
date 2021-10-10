//Check if a subarray with 0 sum exists or not
/*
Given an integer array, check if it contains a subarray having zero-sum.
For example,
Input:  { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 }
Output: Subarray with zero-sum exists
*/
#include <stdio.h>

void ZeroSum(int *arr, int n) {
  int sum;
  for(int i=0;i<n;i++){
    sum = 0;
    for(int j=i;j<n;j++){
      sum +=arr[j];
      if(sum == 0){
        for(int k=i;k<=j;k++)
          printf("%d ",arr[k]);
        printf("\n");
      }
    }
  }
}
int main()
{
  int n=0;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  ZeroSum(arr,n);

  return 0;
}
