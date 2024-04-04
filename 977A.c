#include<stdio.h>
int main()
{
    int k,n;
    scanf("%d %d",&n,&k);
     if(2 <= n <=10000000000){
        for(int i=0 ;i<k;i++){
       if(n%10==0)
       {
        n=n/10;
       }
       else{
        n--;
       }
    }
 }
   printf("%d\n",n);
}