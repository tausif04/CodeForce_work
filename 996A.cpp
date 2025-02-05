#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={100,20,10,5,1};
    int amount , ans=0;
    cin>>amount;
    for(int i=0;i<5;i++){
     ans+=amount/a[i];
        amount=amount%a[i];
    }
    cout<<ans<<endl;
}