//Convert uppercase character to lowercase
#include <stdio.h>
#include <string.h>
int main()
{
  char arr[20];
  int diff = 'A'-'a';
  fgets(arr,20,stdin);

  int len = strlen(arr);
  for(int i =0; i<len; i++)
    if(arr[i]>='A' && arr[i]<='Z')
        arr[i] -= diff;

    for(int i=0; i<strlen(arr);i++)
      printf("%c",arr[i]);

  return 0;
}
