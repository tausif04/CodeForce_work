#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> b(m);
    for (int i = 0; i < m; i++)
        cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    int i = 0, j = 0, l = n - 1, k = m - 1, res = 0;
    while (i <= l) {
        int left = abs(a[i] - b[j]);
        int right = abs(a[l] - b[k]);
        int diff = max(left, right);
        res += diff;
        if (diff == left) {
            i++;
            j++;
        } else {
            l--;
            k--;
        }
    }
    cout << res << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
