//Given an integer array, duplicates are present in it in a way that all duplicates appear an even number of times except one which appears an odd number of times. Find that odd appearing element in linear time and without using any extra memory.
#include <stdio.h>

int main()
{
  int n=0,result=0;
  int remain=0,resxor;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

  for(int i=0;i<n;i++)
    result ^= arr[i];

  resxor = result & ~(result-1);
  for(int i=0;i<n;i++) {
    if(resxor & arr[i])
    remain ^= arr[i];
  }
  printf("1st no is %d\n",remain);
  printf("2nd no is %d",result^remain);
  printf("%d",result);
  return 0;
}
