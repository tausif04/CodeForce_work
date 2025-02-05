#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        int one=0 , two=0 , count=0;
        for(int i=0;i<n;i++){
            if(s1[i]=='1'){
                one++;
            }
            if(s2[i]=='1'){
                two++;
            }
            if(s2[i] != s1[i] && s2[i]=='1'){
                count++;
            }
        }
        if(one>two){
            count += (one-two) ;
        }
        cout<<count<<endl;
    }
    return 0;
}