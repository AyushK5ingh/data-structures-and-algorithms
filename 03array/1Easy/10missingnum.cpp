#include <bits/stdc++.h>
using namespace std;

// -----------------------------------------------------
// 1. Brute Force O(N^2)
// -----------------------------------------------------
int missingNumberBrute(vector<int>& a, int N) {
    for (int i = 1; i <= N; i++) {
        int flag = 0;
        for (int j = 0; j < N - 1; j++) {
            if (a[j] == i) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) return i;
    }
    return -1;
}

// -----------------------------------------------------
// 2. Hashing O(N) space
// -----------------------------------------------------
int missingNumberHash(vector<int>& a, int N) {
    vector<int> hash(N + 1, 0);

    for (int i = 0; i < N - 1; i++)
        hash[a[i]]++;

    for (int i = 1; i <= N; i++) {
        if (hash[i] == 0) return i;
    }
    return -1;
}

// -----------------------------------------------------
// 3. Sorting O(N log N)
// -----------------------------------------------------
int missingNumberSort(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        if (nums[i] != i) return i;
    }
    return n;
}

// -----------------------------------------------------
// 4. Summation Formula O(N)
// -----------------------------------------------------
int missingNumberSum(vector<int>& a, int N) {
    int sum = (N * (N + 1)) / 2;
    int s2 = 0;
    for (int i = 0; i < N - 1; i++) {
        s2 += a[i];
    }
    return sum - s2;
}

// -----------------------------------------------------
// 5. XOR Method O(N)
// -----------------------------------------------------
int missingNumberXor(vector<int>& a, int N) {
    int xor1 = 0, xor2 = 0;

    for (int i = 0; i < N - 1; i++) {
        xor2 ^= a[i];        // XOR of array elements
        xor1 ^= (i + 1);     // XOR of 1..N-1
    }
    xor1 ^= N;               // include N
    return xor1 ^ xor2;      // missing number
}

// -----------------------------------------------------
// Main function
// -----------------------------------------------------
int main() {
    vector<int> arr = {1, 2, 4, 5}; // Example input
    int N = 5; // numbers are from 1..N

    cout << "Missing Number (Brute Force): " << missingNumberBrute(arr, N) << endl;
    cout << "Missing Number (Hashing): "    << missingNumberHash(arr, N)  << endl;
    cout << "Missing Number (Sorting): "    << missingNumberSort(arr)     << endl;
    cout << "Missing Number (Summation): "  << missingNumberSum(arr, N)   << endl;
    cout << "Missing Number (XOR): "        << missingNumberXor(arr, N)   << endl;

    return 0;
}
