//Swap two bits at a given position in an integer
#include <stdio.h>

int main()
{
  int num,p1,p2;
  scanf("%d%d%d",&num,&p1,&p2);
  p1--;
  p2--;
  if(((num & 1<<p1)>>p1) != ((num & 1<<p2)>>p2))
    num ^= ((1<<p1)|(1<<p2));

  printf("res=%d\n",num);
  return 0;
}
