#include<stdio.h>
int main ()
{
    int m,n;
    scanf("%d %d",&m,&n);
    if(1<=m<=n<=16)
    printf("%d",(m*n)/2);
  return 0;
}