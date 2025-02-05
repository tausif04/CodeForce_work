#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> p(n);
    
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    sort(p.begin(),p.end());
    int q = (n + 1) / 2 - 1;
    int res=count(p.begin()+q,p.end(),p[q]);
    cout<<res<<endl;
}

int main(){
  int tt;
  cin>>tt;
  for(int i=0;i<tt;i++){
    solve();
  }
}