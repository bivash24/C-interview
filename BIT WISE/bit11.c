//Print binary representation of a number
#include <stdio.h>

int main()
{
  int num;
  scanf("%d",&num);
  int count = sizeof(int)*8 - 1;
  while(!(num>>count) && count>0)
    count--;
  while(count>=0) {
    printf("%d",(num&(1<<count)&&1));
    count--;
  }
  return 0;
}
