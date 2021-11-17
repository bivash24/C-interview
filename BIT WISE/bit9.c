//Reverse bits of an integer
#include <stdio.h>

int main()
{
  unsigned int num;
  scanf("%u",&num);
  int count = sizeof(unsigned int)*8-1;
  unsigned int rev = num;

  num = num>>1;
  while(num) {
    rev = rev << 1;
    rev = rev | (num & 1);
    num = num >> 1;
    count--;
  }
  printf("c=%u\n",count);
  rev = rev << count;
  printf("%u",rev);
  return 0;
}
