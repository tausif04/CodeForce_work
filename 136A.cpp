#include<iostream>
using namespace std;
int main(){
     int n,temp;
     cin>>n;
     int a[n+1];
     for(int i=1;i<=n;i++){
        cin>>temp;
        a[temp]=i;
     }
       for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
     }   
     cout<<endl;
   return 0;
}