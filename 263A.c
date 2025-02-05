#include<stdio.h>
 #include<math.h>
 int main()
 {
     int a[5][5];
     int i,j,x,y;
     for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&a[i][j]);
        }
     }
      for(i=0;i<5;i++){
        for(j=0;j<5;j++){
          if(a[i][j]==1){
            x=i+1;y=j+1;
          }
        }
     }
     printf("%d",(abs(3-x)+abs(3-y)));
  return 0;
 }
