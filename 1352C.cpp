
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;

    int full_cycles = k / (n - 1);
    int remainder = k % (n - 1);
    
    int ans;
    if (remainder == 0) {
        ans = full_cycles * n - 1;
    } else {
        ans = full_cycles * n + remainder;
    }
    
    cout << ans << endl;
}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
    return 0;
}