#include <stdio.h>
int main ()
{
    int n,a,b,w=0,v=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        w=w-a+b;
        if(w>=v){
            v=w;
        }
    }
    printf("%d\n",v);
 return 0;
}