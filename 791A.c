#include <stdio.h>
int main()
{
    int l,b,count=0;
    scanf("%d %d",&l,&b);
   if(l>b){
    count=0;
   }
   else{
     while(l <= b){
      l=l*3;
      b=b*2;
      count++;
     }   
   }  
 printf("%d\n",count);
    }