#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        map<int,char> ma;
        int ind,n;
        string s;
        cin>>s;
        n=s.length();
        stack <int> upper, lower;
        for(int i=0;i<n;i++){
            if(s[i] == 'B'){
                if(!upper.empty()){
                    ind =upper.top();
                    ma[ind]='$';
                    upper.pop();
                }
                continue;
            }
            if(s[i]=='b'){
                if(!lower.empty()){
                    ind=lower.top();
                    ma[ind]='$';
                    lower.pop();
                }
                continue;
            }
            ma[i]=s[i];
            if(isupper(s[i])){
                upper.push(i);
            }else{
                lower.push(i);
            
            }
        }
        for(int i=0;i<n;i++){
            if(ma.count(i) and ma[i] != '$'){
                cout<<ma[i];
            }
        }
        cout<<endl;
    }
}