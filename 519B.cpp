#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n],c[n],sumA=0,sumB=0,sumC=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sumA += a[i];
    }
     for(int i=0;i<n-1;i++){
        cin>>b[i];
        sumB += b[i];
    }
     for(int i=0;i<n-2;i++){
        cin>>c[i];
        sumC += c[i];
    }
    cout<<sumA-sumB<<endl<<sumB-sumC<<endl;
   return 0;
}