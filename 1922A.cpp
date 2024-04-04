#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;

    for(int i=0;i<t;i++){ 
        cin>>n;
    string a,b,c;
      cin>>a>>b>>c;
      int ok=0;
      for(int i=0;i<n;i++){
        if(a[i]!=c[i] && b[i]!=c[i]){
          ok=1;
        }
      }
      if(ok==1){
        cout<<"YES"<<endl;
      }else{
        cout<<"NO"<<endl;
      }
    }
    return 0;
}
