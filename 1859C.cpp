#include <iostream>
using namespace std;

int max_cost(int n) {
    return n * (n + 1) / 2 - n;
}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;
        int result = max_cost(n);
        cout << result << endl;
    }

    return 0;
}





