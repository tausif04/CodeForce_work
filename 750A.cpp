#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,count=0;
    cin>>n>>k;
    int b=240-k;
        for(int i=1;i<=n;i++){
            if((b-i*5)<0){
                break;
            }
            b = b - i*5;
            count++;
        }
   cout<<count<<endl;
}