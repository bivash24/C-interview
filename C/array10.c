// merge two sorted arrays
#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void sortarr(int *arr1, int *arr2, int n1, int n2) {
  for(int i=0;i<n1;i++){
    int j=0;
    if(arr1[i] > arr2[0]){
      swap(&arr1[i],&arr2[0]);
      while(arr2[j] > arr2[j+1] && j <(n2-1)){
        swap(&arr2[j],&arr2[j+1]);
        j++;
      }
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
  sortarr(arr1, arr2, n1, n2);
  for(int i=0;i<n1;i++)
    printf("%d ",arr1[i]);
  printf("\n");
  for(int i=0;i<n2;i++)
    printf("%d ",arr2[i]);
  return 0;
}
