//compare two string lexicographically
#include <stdio.h>
#include <string.h>
int func(int num)
{
  if(num > 0)
     return 1;
  else if (num < 0)
    return -1;
  else
    return num;
}
int main ()
{
  char s1[100],s2[100];
  int p=0,q=0;        
  scanf("%s",s1);
  scanf("%s",s2);
  
  }
   for(int i=0 ; i<strlen(s2) ; i++){
    if(s2[i] >= 'A' && s2[i] <= 'Z')
       s2[i] += 'a'-'A';
  }
 printf("%d\n",func(strcmp(s1,s2)));
 return 0;
}  