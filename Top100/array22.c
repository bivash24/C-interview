//Merge two arrays by satisfying given constraints
/* Given two sorted arrays X[] and Y[] of size m and n each where m >= n and X[] has exactly n vacant cells, merge elements of Y[] in their correct position in array X[], i.e., merge (X, Y) by keeping the sorted order.
For example,
Input:
X[] = { 0, 2, 0, 3, 0, 5, 6, 0, 0 }
Y[] = { 1, 8, 9, 10, 15 }
The vacant cells in X[] is represented by 0
Output:
X[] = { 1, 2, 3, 5, 6, 8, 9, 10, 15 }
*/
#include <stdio.h>

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void heapify(int *arr, int n, int i)
{
  int left = 2*i+1;
  int right = 2*i+2;
  int largest = i;
  if(left<n && arr[left]>arr[largest])
    largest = left;
  if(right<n && arr[right]>arr[largest])
    largest = right;

  if(i!=largest){
    swap(&arr[i],&arr[largest]);
    heapify(arr,n,largest);
  }
}
void sortarray(int *arr1, int n1)
{
  for(int i=n1/2-1;i>=0;i--)
    heapify(arr1,n1,i);
  for(int i=n1-1;i>=0;i--){
    swap(&arr1[i],&arr1[0]);
    heapify(arr1,i,0);
  }
}
void mergearr(int *arr1, int n1, int *arr2, int n2)
{
  int j=0,i=0;
  for(i;i<n1;i++){
    if(arr1[i]==0){
      swap(&arr1[i],&arr2[j]);
      j++;
    }
  }
  sortarray(arr1,n1);
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
