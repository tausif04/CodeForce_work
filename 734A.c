#include<stdio.h>
#include<string.h>
int main ()
{
    int n,d=0,a=0;
    scanf("%d",&n);
    getchar();
    char s[n+1];
    fgets(s , sizeof(s),stdin);
    for(int i=0 ; i<n; i++){
      if(s[i]=='A')
        a++;
     else if(s[i]=='D')
       d++;
    }
    if(a>d)
    printf("Anton\n");
    else if(a<d)
    printf("Danik\n");
    else if(a==d)
    printf("Friendship\n");
 return 0;
}