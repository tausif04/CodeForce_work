#include <stdio.h>
#include <string.h>
int main ()
{   
  int i,j,e,temp=0;
    char s[100];
    scanf("%s",s);
    e=strlen(s);
    for(i=0 ; i < e -1 ; i+=2){
      for(j=0 ; j < e - 1 -i ; j+=2){
     if(s[j] > s[j+2])
     {
       temp=s[j];
       s[j]=s[j+2];
       s[j+2]=temp;
     }
    }
  }
  printf("%s\n",s);
  return 0;
}