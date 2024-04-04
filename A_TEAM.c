#include <stdio.h>
int main ()
{
    int n,p,v,t,count=0;
      scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&p,&v,&t);
        if((p==1&&v==1&&t==1) ||(p==1&&v==1&&t==0) || (p==0&&v==1&&t==1) || (p==1&&v==0&&t==1))
         count++;
    }
    printf("%d",count);
  return 0;
}