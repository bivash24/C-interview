//Add binary representation of two integers
#include <stdio.h>

int main()
{
  int num1,num2;
  int size = sizeof(int)*8;
  scanf("%d%d",&num1,&num2);
  int sum=0;
  int carry=0,i=0;

  while(size>i) {
    sum |= ((num1&1<<i) + (num2&1<<i) + (sum&1<<i));
    i++;
  }
  while(size>=0){
  printf("%d",sum&1<<size);
  size--;
  }

  return 0;
}

//To be done
