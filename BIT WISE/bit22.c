//Efficiently implement power function
#include <stdio.h>

int main()
{
  int number,pow;
  scanf("%d%d",&number,&pow);
  int power = 1;
  if(number==0)
    return 0;
  for(int i=0;i<pow/2;i++)
    power *=number;
  power *=power;
  if(pow%2!=0)
    power *=number;

  printf("%d\n",power);
return 0;
}
