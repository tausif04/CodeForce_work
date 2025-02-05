#include<bits/stdc++.h>
using namespace std;
void solve(){
    vector<int> num(3);
    for(int i=0;i<3;i++){
        cin>>num[i];
    }
    sort(num.begin(),num.end());
    cout<<num[1]<<endl;
}
int main()
{
  int tt;
  cin>>tt;
  while(tt--){
    solve();
  }
}