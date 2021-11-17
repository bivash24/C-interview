//Round up to the next highest power of 2
#include <stdio.h>
#include <math.h>

int main()
{
  int number,place = 0;
  scanf("%d",&number);
  int num2 = number & (-number);
  if(number & (number-1))
  while(num2) {
    place = log2(num2);
    number &= ~(1<<place);
    num2 = number & (-number);
  }
  if(!place)
    printf("%d\n",number);
  else
    printf("%d\n",1<<(place+1));
  return 0;
}
