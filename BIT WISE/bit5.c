//Find the total number of bits needed to be flipped to convert a given integer to another
#include <stdio.h>
#include <math.h>

int main()
{
  int n1,n2,count=0;
  //converting n1 to n2
  scanf("%d %d",&n1,&n2);
  int opr = n1 ^ n2;
  int place;
  int temp = (opr & (-opr));
  while(temp) {
    place = log2(temp);
    count++;
    opr &= ~(1<<place);
    temp = (opr & (-opr));
    printf("%d ",place);
  }
  printf("\nno of bit to flip is %d",count);
  return 0;
}
