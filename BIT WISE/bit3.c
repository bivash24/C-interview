//Convert lowercase character to uppercase
#include <stdio.h>
#include <string.h>

int main()
{
  char arr[20];
  int diff,i=0;
  fgets(arr,20,stdin);

  diff = 'A' - 'a';
  while(arr[i]) {
    if(arr[i]>='a' && arr[i]<='z') {
      arr[i] += diff;
    }
    i++;
  }
  for(i=0;i<strlen(arr);i++)
    printf("%c",arr[i]);

  return 0;
}
