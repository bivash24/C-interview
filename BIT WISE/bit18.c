//Given an array of n-1 distinct integers in the range of 1 to n, find the missing number in it in linear time
#include <stdio.h>

int main()
{
  int n=0,sum=0;
  int result;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

  for(int i=0;i<n;i++)
    sum += arr[i];
  result = (((n*n)+n)/2)-sum;
  printf("%d",result);
  return 0;
}
