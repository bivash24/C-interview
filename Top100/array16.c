//Find the duplicate element in a limited range array
/*given a limited range array of size n containing elements between 1 and n-1 with one element
repeating, find the duplicate number in it without using any extra space
for exampleInput:  { 1, 2, 3, 4, 4 }
Output: The duplicate element is 4
*/
#include <stdio.h>

void duplicatearr(int *arr, int n) {
  int sum1=0;
  int sum2=0;
  for(int i=0;i<n;i++){
    sum1 += (i+1);
    sum2 += arr[i];
  }
  printf("Duplicate:%d",n-(sum1-sum2));
}

int main()
{
  int n=0;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  duplicatearr(arr,n);

  return 0;
}
