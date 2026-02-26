#include <bits/stdc++.h>
using namespace std;

// --------------------------------------------------
// 1. Using vector + sum add/remove trick
// --------------------------------------------------
class SolutionVector {
public:
    int singleNumber(vector<int>& nums) {
        vector<int> seen;
        int k = 0;
        for (int num : nums) {
            if (find(seen.begin(), seen.end(), num) == seen.end()) {
                k += num;
                seen.push_back(num);
            } else {
                k -= num;
            }
        }
        return k;
    }
};

// --------------------------------------------------
// 2. Using XOR (Optimal)
// --------------------------------------------------
class SolutionXOR {
public:
    int singleNumber(vector<int>& nums) {
        int k = 0;
        for (int num : nums) {
            k ^= num; // cancels duplicates
        }
        return k;
    }
};

// --------------------------------------------------
// 3. Using HashMap
// --------------------------------------------------
int getSingleElement(vector<int> &arr) {
    int n = arr.size();
    map<int, int> mpp;

    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    for (auto it : mpp) {
        if (it.second == 1)
            return it.first;
    }

    return -1; // should never happen if input is valid
}

// --------------------------------------------------
// Main function
// --------------------------------------------------
int main() {
    vector<int> nums = {4, 1, 2, 1, 2};

    // Method 1: Vector trick
    SolutionVector solVec;
    cout << "Single Number (Vector Method): " << solVec.singleNumber(nums) << endl;

    // Method 2: XOR (Best)
    SolutionXOR solXor;
    cout << "Single Number (XOR Method): " << solXor.singleNumber(nums) << endl;

    // Method 3: HashMap
    cout << "Single Number (HashMap Method): " << getSingleElement(nums) << endl;

    return 0;
}
