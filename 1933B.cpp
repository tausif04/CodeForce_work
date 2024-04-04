#include <iostream>
#include <vector>
using namespace std;

int minMovesToDivisibleBy3(vector<int>& nums) {
    int sum = 0, cnt[3] = {0, 0, 0};
    for (int num : nums) {
        sum += num;
        cnt[num % 3]++;
    }

    int res = 0, target = sum % 3;
    if (target == 1) {
        if (cnt[1] >= 1) res = 1;
        else if (cnt[2] >= 2) res = 2;
        else res = -1;
    } else if (target == 2) {
        if (cnt[2] >= 1) res = 1;
        else if (cnt[1] >= 2) res = 2;
        else res = -1;
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; ++i) {
            cin >> nums[i];
        }
        cout << minMovesToDivisibleBy3(nums) << endl;
    }
    return 0;
}