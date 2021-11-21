//Find all odd occurring elements in an array having a limited range of elements
#include <stdio.h>

int main()
{
  int n=0,result=0;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

  for(int i=0;i<n;i++) {
    int temp;
    temp = arr[i];
    if(arr[i]!=i){
    arr[i] = arr[temp];
    arr[temp] = temp;
    }
    else{

    }
  }
  return 0;
}
