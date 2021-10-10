//Find maximum length subarray having a given sum
#include <stdio.h>

void subarray(int *arr, int n, int target) {

  int sum = 0,largest=0;
  int start=0,end=0;
  for(int i=0;i<n;i++){
      sum = 0;
  for(int j=i;j<n;j++){
      sum += arr[j];
      if(sum == target && (j-i)>largest){
        largest = j-i;
        start = i;
        end = j;
      }
    }
  }
  for(int i=start;i<=end;i++)
    printf("%d ",arr[i]);
}

int main()
{
  int n=0,target=0;
  scanf("%d%d",&n,&target);
  int arr[n];
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  subarray(arr, n, target);

  return 0;
}
