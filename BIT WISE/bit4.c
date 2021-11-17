//Find a letter’s position in alphabet
#include <stdio.h>
#include <string.h>

int main()
{
  char arr[20];
  int diff,i=0;
  gets(arr,20,stdin);

  for(i;i<strlen(arr);i++) {
    if(arr[i]>='A' && arr[i]<='Z')
      diff = arr[i] - 'A';
    else if(arr[i]>='a' && arr[i]<='z')
      diff = arr[i] - 'a';
    else
        continue;
    printf("%c=%d\n",arr[i],diff+1);
  }
  return 0;
}
