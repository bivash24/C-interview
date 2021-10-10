//Find the largest subarray having an equal number of 0’s and 1’s
/*
Given a binary array containing 0’s and 1’s, find the largest subarray with equal numbers of 0’s and 1’s.
For example,
Input:  { 0, 0, 1, 0, 1, 0, 0 }
Output: Largest subarray is { 0, 1, 0, 1 } or { 1, 0, 1, 0 }
*/
#include <stdio.h>

void larsubarray(int *arr, int n) {
  int count = 0;
  int pcount = 0;
  int start = 0;
  for(int i=0;i<n;i++){
    if(arr[i]!=arr[i+1] && (i+1)<n)
      count++;
    else if(arr[i]==arr[i+1] && (i+1)<n){
      if(count>pcount){
        pcount = count;
        start = i-pcount;
      }
      count = 0;
    }
  }
  for(int i=start;i<start+(pcount-1);i++)
    printf("%d ",arr[i]);
}
int main()
{
  int n=0;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  larsubarray(arr,n);

  return 0;
}
