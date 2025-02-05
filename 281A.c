#include<stdio.h>
#include <string.h>
int main ()
{
    int i;
    char s[1000];
    gets(s);
  if(s[0]>=97 && s[0]<=122){
    s[0] = s[0] - 32 ;
  }
  printf("%s",s);
 return 0;
}
