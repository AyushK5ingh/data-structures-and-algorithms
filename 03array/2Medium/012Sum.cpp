#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; // value -> index

        for (int i = 0; i < nums.size(); i++) {
            int first = nums[i];
            int second = target - first;

            // if complement exists, return the pair of indices
            if (mp.find(second) != mp.end()) {
                return {mp[second], i}; // earlier index first
            }

            // store current value with index
            mp[first] = i;
        }

        return {-1, -1}; // not found
    }
};

int main() {
    Solution sol;

    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter target: ";
    cin >> target;

    // Call the function
    vector<int> result = sol.twoSum(nums, target);

    // Print the result
    if (result[0] != -1) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
        cout << "Values: " << nums[result[0]] << " + " << nums[result[1]]
             << " = " << target << endl;
    } else {
        cout << "No pair found!" << endl;
    }

    return 0;
}
