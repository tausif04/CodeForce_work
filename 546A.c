#include <stdio.h>
int main ()
{
    int k,n,w,cost=0;
    scanf("%d %d %d",&k,&n,&w);

    for(int i=1 ; i<=w ;i++){
        cost = cost + (i*k);
    }
    if(cost - n > 0)
    printf("%d\n",cost-n);
    else
      printf("0\n");
 return 0;
}