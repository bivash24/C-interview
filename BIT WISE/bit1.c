//count set bits in an integer
#include <stdio.h>
#include <math.h>

int main()
{
  int num=0;
  int count=0;
  int place;
  scanf("%d",&num);
  int temp = num;
  while(temp) {
    place = log2(temp & (-temp));
    count++;
    temp &= ~(1<<place);
  }
  printf("%d\n",count);
  return 0;
}
