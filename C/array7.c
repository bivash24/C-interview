//Largest subarray having an equal number of 0’s and 1’s

#include <stdio.h>

void subarray(int *arr, int n) {
  int count = 0;
  int start,res = 0;
  for(int i=0; i<n; i++){
    if(arr[i]!=arr[i+1]){
      count++;
    }
    else
      count = 0;

     if(res<count){
        res = count;
        start = (i+1) - res;
     }
  }
  for(int i=start; i<start+res; i++)
    printf("%d ",arr[i]);
}

int main()
{
  int n=0;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  subarray(arr, n);

  return 0;
}
