#include <bits/stdc++.h>
using namespace std;

// Brute force method (using set)
int removeDuplicatesBrute(vector<int>& nums) {
    int n = nums.size();
    set<int> st(nums.begin(), nums.end());
    int k = st.size();
    int i = 0;
    for (int val : st) {
        nums[i++] = val;
    }
    return k;
}

// Optimal method (two-pointer approach)
// Works only if nums is already sorted
int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;
    int i = 0;
    for (int j = 1; j < n; j++) {
        if (nums[i] != nums[j]) {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}

int main() {
    vector<vector<int>> testCases = {
        {1, 1, 2},
        {0,0,1,1,1,2,2,3,3,4},
        {1,2,3,4,5},
        {1,1,1,1},
        {}
    };

    cout << "Testing Brute Force Approach:\n";
    for (auto nums : testCases) {
        int k = removeDuplicatesBrute(nums);
        cout << "k = " << k << " | Array = ";
        for (int i = 0; i < k; i++) cout << nums[i] << " ";
        cout << "\n";
    }

    cout << "\nTesting Optimal Two-Pointer Approach:\n";
    for (auto nums : testCases) {
        int k = removeDuplicates(nums);
        cout << "k = " << k << " | Array = ";
        for (int i = 0; i < k; i++) cout << nums[i] << " ";
        cout << "\n";
    }

    return 0;
}
