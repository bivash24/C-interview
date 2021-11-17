//Check if a number is a power of 4 or not
#include <stdio.h>

int main()
{
  int num,count=0;
  scanf("%d",&num);
  if(num && !(num & (num-1))) {
    while(num>>=1)
      count++;

  if(count%2==0)
      printf("No is power of 4\n");
  }
  return 0;
}
