#include<bits/stdc++.h>
using namespace std;
int minColoredCells(int n, int k) {
    if (k != 4*n-2) {
        return (k + 1)/2;
    } else {
        return n*2;
    }
}
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << minColoredCells(n, k) << endl;
    }

    return 0;
}
