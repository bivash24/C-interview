//Given a binary array, sort it in linear time and constant space. The output should print all zeroes, followed by all ones.
#include <stdio.h>

void print(int *arr, int n)
{
  for(int i=0;i<n;i++)
  printf("%d ",arr[i]);
}

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void sort(int *arr, int n)
{
  int pivot = 1;
  for(int i=0; i<=n; i++){
    while(arr[i]>=pivot && n>i){
      swap(&arr[i], &arr[n]);
      n--;
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
  sort(arr, n-1);
  print(arr, n);

  return 0;
}
