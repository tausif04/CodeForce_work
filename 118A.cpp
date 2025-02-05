#include<bits/stdc++.h>
using namespace std;
int main()
{
   string a;
   getline(cin,a);
   string res="";
   for(int i=0;i<a.size();i++){
     if(a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u' && a[i]!='y'
        && a[i]!='A' && a[i]!='E' && a[i]!='I' && a[i]!='O' && a[i]!='U' && a[i]!='Y'){
        res += ".";
        res += towlower(a[i]);
     }
   }
  cout<<res<<endl;
  return 0;
}
