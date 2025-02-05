#include<bits/stdc++.h>
using namespace std;
int a[105];
void solve(){
	int q,k,n;cin>>n>>k;
	for(int i=1;i<=n;i++) 
       cin>>a[i];
	for(int i=1;i<=k;i++){
		cin>>q;
		cout<<min(a[1]-1,q)<<' ';
	}
	cout<<endl;
}
int main(){
	
	int t;cin>>t;
	while(t--){ 
      solve(); 
    }
}