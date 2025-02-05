#include<stdio.h>
#include<conio.h>
#include <string.h>
int main()
{
    int i,j,len,count=0;
    char s[100],chTemp=0;
    gets(s);
    len=strlen(s);
     for(i=0; i<len; i++)
    {
        for(j=0; j<(len-1); j++)
        {
            if(s[j]>s[j+1])
            {
                chTemp = s[j];
                s[j] = s[j+1];
                s[j+1] = chTemp;
            }
        }
    }
 for(int j=0;j<i;j++){
    if(s[j]!=s[j+1])
    {
        count++;
    }
 }
    if(count % 2 == 0){
        printf("CHAT WITH HER!\n");
    }
    else{
     printf("IGNORE HIM!\n");
    }
   return 0;
}