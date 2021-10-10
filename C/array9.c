//Sort an array of 0’s, 1’s, and 2’s

#include <stdio.h>

void sort(int *arr, int n) {
  int pivot = 1;
  int start = 0, trv = 0;
  int end = 0;
  while(trv <= end){
    if(arr[trv] < pivot){
      swap(&arr[start],&arr[trv]);
      start++;
      trv++;
    }
    else if(arr[trv] > pivot){
      swap(&arr[trv],&arr[end]);
      end--;
    }
    else
      trv++;
  }
}

int main()
{
  int n=0;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  sort(arr, n);

  return 0;
}
