#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int n = nums.size();
    int conse = 0; // store max consecutive ones
    int k = 0;     // counter for current streak

    for (int i = 0; i < n; i++) {
        if (nums[i] == 0) {
            k = 0;  // reset on zero
        } else {
            k++;    // increase streak
        }
        conse = max(conse, k);
    }
    return conse;
}

int main() {
    // Example input
    vector<int> nums = {1, 1, 0, 1, 1, 1};

    int result = findMaxConsecutiveOnes(nums);

    cout << "Maximum consecutive ones: " << result << endl;

    return 0;
}
