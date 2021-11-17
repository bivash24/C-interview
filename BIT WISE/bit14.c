//Check if adjacent bits are set in the binary representation of a number

#include <stdio.h>

int main()
{
int num;
scanf("%d",&num);

if(num & (num>>1))
  printf("yes");
else
  printf("No");
return 0;
}
