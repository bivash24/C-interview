//Merge two arrays by satisfying given constraints
#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void mergearr(int *arr1, int n1, int *arr2, int n2) {
  int j,i=0;
  while(i<n2){
      j=0;
    while(arr1[j]!=0)
      j++;
    swap(&arr1[j],&arr2[i]);
      i++;
    while(arr1[j] < arr1[j-1] && (j > 0)){ //at 0 j-1= -1
      swap(&arr1[j],&arr1[j-1]);
      j--;
    }
    while(arr1[j] > arr1[j+1] && j< n1-1){
      swap(&arr1[j],&arr1[j+1]);
      j++;
    }
  }
}

int main()
{
  int n1=0,n2=0;
  scanf("%d%d",&n1,&n2);
  int arr1[n1],arr2[n2];
  for(int i=0;i<n1;i++)
    scanf("%d",&arr1[i]);
  for(int i=0;i<n2;i++)
    scanf("%d",&arr2[i]);
  mergearr(arr1,n1,arr2,n2);

  for(int i=0;i<n1;i++)
    printf("%d ",arr1[i]);

  return 0;
}
