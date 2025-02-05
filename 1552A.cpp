#include<bits/stdc++.h>
using namespace std;

int main(){

    long t; std::cin >> t;
    while(t--){
        long n;cin >> n;
        string s;cin >> s;
        string t = s; sort(t.begin(), t.end());
        long cnt(0);
        for(long p = 0; p < t.size(); p++){cnt += (s[p] != t[p]);}
        cout << cnt << endl;
    }
   return 0;
}