//Swap adjacent bits of a number
#include <stdio.h>

#define size sizeof(int)*8
int main()
{
  int num;
  scanf("%d",&num);
  int result=0;

  result = ((num & 0xAAAAAAAA)>>1) | ((num & 0x55555555)<<1);
  for(int i=size-1;i>=0;i--)
  printf("%d",(result&1<<i)&&1);
  return 0;
}
