#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        if(a[1]!=n){
            cout<<"NO"<<endl;
            continue;
        }
        vector<int> b;
        for(int i=n;i>=1;i--){
            while(b.size()<a[i]){
                b.push_back(i);
            }
        }
        bool ans=true;
        for(int i=1;i<=n;i++){
            if(a[i] != b[i-1]){
                cout<<"NO"<<endl;
                ans=false;
                break;
            }
        }
        if(ans){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}