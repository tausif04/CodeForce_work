#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int max_final_score(int n, vector<int>& nums) {
    sort(nums.begin(), nums.end()); 
    int score = 0;

  
    for (int i = 0; i < n; i++) {
        score += min(nums[2*i], nums[2*i + 1]);
    }

    return score;
}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n; 
        vector<int> nums(2 * n);
        for (int i = 0; i < 2 * n; i++) {
            cin >> nums[i];
        }
        cout << max_final_score(n, nums) << endl;
    }

    return 0;
}
