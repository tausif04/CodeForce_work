#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a;
    cin>>n;
    int min=110,max=0,mini=0,maxi=0;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>max){
            maxi=i;
            max=a;
        }
        if(a<=min){
            mini=i;
            min=a;
        }
    }
    if(maxi>mini){
        cout<<(maxi-1)+(n-mini)-1<<endl;
    }else{
        cout<<(maxi-1)+(n-mini)<<endl;
    }
  return 0;
}