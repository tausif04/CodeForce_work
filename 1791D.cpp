#include<bits/stdc++.h>
using namespace std;
int main(){ 
 int t;
 cin>>t;
 while ( t--)
 {
    int n;
    cin>>n;
     string s;
     cin>>s;

     set<char>st;
     vector<int>res(n);
     for ( int i = 0; i <  n; i++)
     {
         st.insert(s[i]);
         res[i]=st.size();
     }

     vector<int>res1(n);
     st.clear();
     for ( int i =n-1; i >=0; i--)
     {
        st.insert(s[i]);
        res1[i]=st.size();
     }

     int ans=0;
     for ( int i = 0; i <  n-1; i++)
     {
         ans=max(ans,res[i]+res1[i+1]);
     }

     cout<<ans<<endl;
 }
}