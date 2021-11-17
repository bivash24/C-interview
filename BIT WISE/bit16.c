//Find XOR of two numbers without using the XOR operator
#include <stdio.h>
#define size sizeof(int)*8
int main()
{
  int num1,num2;
  scanf("%d%d",&num1,&num2);
  for(int i=size-1;i>=0;i--){
    if((((num1>>i)&1)&&1) != (((num2>>i)&1)&&1))
      printf("1");
    else
      printf("0");
  }
  return 0;
}
