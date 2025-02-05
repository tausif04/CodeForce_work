#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    char c;
    cin>>n>>c;
    string s;
    cin>>s;
    if(c=='g'){
        cout<<"0"<<endl;
        return;
    }
    vector<int> green;
    s +=s;
    for(int i=0;i<2*n;i++){
      if(s[i]=='g'){
        green.push_back(i);
      }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]==c){
            int ub=lower_bound(green.begin(),green.end(),i)-green.begin();
            ans = max(ans,green[ub]-i);
        }
    }
   cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}