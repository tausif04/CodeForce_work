#include<stdio.h>
int main()
{
    int n,q,k,arr[50],count=0;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    q=arr[k-1];
    for(int i=0;i<n;i++){
        if(arr[i] > 0 && arr[i] >= q)
        count++;
    }
    printf("%d\n",count);
 return 0;
}