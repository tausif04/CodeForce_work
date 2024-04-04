#include <stdio.h>
int main ()
{
    int n,arr[]={5,4,3,2,1},c=0;
    scanf("%d",&n);
    for(int i=0;i<5;i++){
        c += n / arr[i];
        n = n%arr[i];
    }
    printf("%d\n",c);
 return 0;
}
