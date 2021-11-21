//Given a set S, generate all subsets of it, i.e., find the power set of set S. A power set of any set S is the set of all subsets of S, including the empty set and S itself.
#include <stdio.h>

int main()
{
  int n=0;
  scanf("%d",&n);
  char arr[n];
  scanf("%s",arr);

  int totalset=1;
  for(int i=0;i<n;i++)
    totalset = totalset * 2;

  for(int i=0;i<totalset;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(i&(1<<j))
        printf("%c",arr[j]);
    }
    printf("\n");
  }
return 0;
}
