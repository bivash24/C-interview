//Circular shift on the binary representation of an integer by `k` positions

#include <stdio.h>
#define size sizeof(int)*8
int main()
{
  int num,k;
  scanf("%d%d",&num,&k);

  printf("num=%d\n",num);
  for(int i=0;i<k;i++)
  num = ((num>>size-1)&1) | (num<<1);

  for(int i=size-1;i>=0;i--)
    printf("%d",((num>>i)&1) && 1);

  return 0;
}
