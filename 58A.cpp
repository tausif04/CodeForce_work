#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,k="hello";
    cin>>s;
    int flag=0,j=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==k[j]){
            j++;
            flag++;
            if(flag==5){
                break;
            }
        }
    }
    if(flag==5){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}