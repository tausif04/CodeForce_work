#include <iostream>
#include <vector>
using namespace std;
string generate_permutation(int n) {
    string permutation;
    for (int i = 1; i<=n; i++) {
        permutation += to_string(i) + " ";
    }
    return permutation;
}

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n; 
        
        cout << generate_permutation(n) << endl;
    }

    return 0;
}
