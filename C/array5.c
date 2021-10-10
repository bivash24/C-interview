//Find the duplicate element in a limited range array

#include <stdio.h>

void duplicate(int *arr, int n) {
  for(int i=0;i<n;i++) {
    if((arr[i]^(i+1)) != 0)
      printf("No is %d",arr[i]);
  }
}

int main()
{
  int n=0;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

  duplicate(arr, n);

  return 0;
}
