#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,initial=1,time=0;
    cin>>n>>m;
    for(int i=0;i<m;i++){
     int present;
     cin>>present;
     if(present > initial){
        time += present-initial;
     }else{
        time += n - (initial-present);
     }
    }
    cout<<time<<endl;
}