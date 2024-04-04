#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n-1;i++){
        if(a[i-1]<0){
            cout<<"NO"<<endl;
            return;
        }
        int op=a[i-1];
        a[i-1] -= op;
        a[i] -=2*op;
        a[i+1] -= op;
    }
     if (a[n - 1] != 0 || a[n - 2] != 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
       solve();
    }
}