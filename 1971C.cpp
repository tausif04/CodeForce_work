#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    string s;
    for(int i=1;i<=12;i++){
        if(i==a || i==b){
            s += "a";
        }
        if(i==c || i==d){
            s += "b";
        }
    }
    if(s=="abab" || s=="baba"){
         cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        solve();
    }
}
