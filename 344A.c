#include<stdio.h>
#include<string.h>
int main()
{
   int n,ans=1;
   scanf("%d",&n);
   char a[3],b[3];
   scanf("%s",a);
   for(int i=1;i<n;i++){
       scanf("%s",b);
     if(a[0] != b[0]){
          ans++;
     }
     strcpy(a,b);
   }
   printf("%d\n",ans);
   return 0;
}