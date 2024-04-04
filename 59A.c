#include <stdio.h>
#include <string.h>
int main ()
{
    char s[101];
    int len=0,up=0,low=0;
    fgets(s,sizeof(s),stdin);
    len = strlen(s);
    if(len>=0 && len<=100){ 
    for(int i=0;i<len ; i++){
       if(s[i]>=65 && s[i]<=90) {
        up++;
       }
       else if(s[i]>=97 && s[i]<=122){
        low++;
       }
    }
    for(int i=0;i<len ; i++){
       if(up>low){
        if(s[i]>=97 && s[i]<=122){
            s[i]=s[i]-32 ;
        }
        }
       else if(up<=low){
       if(s[i]>=65 && s[i]<=90){
          s[i]=s[i]+32;
       }
       }
    }
    printf("%s\n",s);
    }
   return 0;
}