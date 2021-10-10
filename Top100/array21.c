//In-place merge two sorted arrays
/* Given two sorted arrays, X[] and Y[] of size m and n each, merge elements of X[] with elements of array Y[] by maintaining the sorted order, i.e., fill X[] with the first m smallest elements and fill Y[] with remaining elements.
Do the conversion in-place and without using any other data structure.
For example,
Input:
X[] = { 1, 4, 7, 8, 10 }
Y[] = { 2, 3, 9 }
Output:
X[] = { 1, 2, 3, 4, 7 }
Y[] = { 8, 9, 10 }
*/
#include <stdio.h>

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void mergearr(int *arr1, int n1, int *arr2, int n2)
{
  int i=0;
  int j=0;
  while(i<n1 && j<n2){
    j=0;
    if(arr1[i]>arr2[j]){
      swap(&arr1[i],&arr2[j]);
      while(arr2[j]>arr2[j+1] && j<(n2-1)){
        swap(&arr2[j],&arr2[j+1]);
        j++;
      }
    }
    i++;
  }
}

int main()
{
  int n1=0,n2=0;
  scanf("%d%d",&n1,&n2);
  int arr1[n1];
  int arr2[n2];
  for(int i=0;i<n1;i++)
    scanf("%d",&arr1[i]);
  for(int i=0;i<n1;i++)
    scanf("%d",&arr2[i]);
  mergearr(arr1,n1,arr2,n2);

  for(int i=0;i<n1;i++)
    printf("%d ",arr1[i]);
  printf("\n");
  for(int i=0;i<n2;i++)
    printf("%d ",arr2[i]);
  return 0;
}
