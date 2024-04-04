#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
      int n,count=0;
      cin>>n;
      string a;
      cin>>a;
      for(int i=1;i<n;i++){
        if(a[i]=='*' && a[i+1]=='*'){
            break;
        }
        else if(a[i]=='@'){
            count++;
        }else if(a[i]=='.'|| a[i]=='*'){
            continue;
        }
       
        }
       cout<<count<<endl;
    }
}