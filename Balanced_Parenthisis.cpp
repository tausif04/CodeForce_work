#include<bits/stdc++.h>
using namespace  std;
 unordered_map<char,int> symbol = {{'[',-1},{'{',-2},{'(',-3},{']',1},{'}',2},{')',3}};
 string isBalanced(string s){
    stack <char> st;
    for(auto i : s){
      if(symbol[i]<0){
        st.push(i);
      }else{
        if(st.empty()){
            return "NO";
        }
        char top=st.top();
        st.pop();
        if(symbol[top]+symbol[i] != 0){
            return "NO";
        }
      }
    }
    if(st.empty()){
        return "YES";
    }else{
        return "NO";
    }
 }
int main(){
    int t;
    cin>>t;
    while(t--){ 
    string s;
    cin>>s;
    cout<<isBalanced(s)<<endl;
    }
}