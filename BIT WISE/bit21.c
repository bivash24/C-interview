//Check if binary representation of a number is palindrome or not
#include <stdio.h>

int main()
{
  int number;
  scanf("%d",&number);

  int i=0, j=0;
  int temp=0;
  while(number>>i)
    i++;

  for(--i;i>=0;i--) {
    temp |= (((number>>i)&1) <<j);
    j++;
  }
  while(j>=0){
  printf("%d",(temp&(1<<j)) && 1);
  j--;
  }
  if(number^temp)
    printf("\nNot");
  else
    printf("\nYes");
return 0;
}

//2nd way
int main()
{
  int number;
  scanf("%d",&number);

  int n1=number;
  int temp = 0;
  while(n1) {
    temp = (n1&1) | (temp<<1);
    n1>>=1;
  }
  if(temp^number)
    printf("No");
  else
    printf("Yes");
return 0;
}
