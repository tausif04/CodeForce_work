#include<stdio.h>
#include<string.h>
int main ()
{
    int i,j,n=0,f=0;
    char s[101],t[101];
    scanf("%s",s);
    scanf("%s",t);
    n=strlen(s);
    for(i=0,j=n-1;i<n;i++,j--){
        if(s[i]==t[j]){
            f=1;
        }
        else{
            f=0;
            break;
        }
    }
    if(f==1){
      printf("YES\n");
    }
    else if(f==0){
     printf("NO\n");
    }
return 0;
}