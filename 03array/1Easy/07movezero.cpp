#include <bits/stdc++.h>
using namespace std;

// Optimal in-place approach
void moveZeroes(vector<int>& arr) {
    int j = -1;
    int n = arr.size();

    // Find the first zero
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            j = i;
            break;
        }
    }

    // If no zero, just return
    if (j == -1) return;

    // Swap non-zero with zero positions
    for (int i = j + 1; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

// Extra array approach (brute force)
vector<int> moveZeros(int n, vector<int> a) {
    vector<int> temp;

    // Copy non-zero elements
    for (int i = 0; i < n; i++) {
        if (a[i] != 0)
            temp.push_back(a[i]);
    }

    int nz = temp.size();

    // Put back into original array
    for (int i = 0; i < nz; i++) {
        a[i] = temp[i];
    }

    // Fill remaining with zeros
    for (int i = nz; i < n; i++) {
        a[i] = 0;
    }

    return a;
}

int main() {
    // Test 1: In-place optimal
    vector<int> nums1 = {0, 1, 0, 3, 12};
    moveZeroes(nums1);
    cout << "Optimal In-place: ";
    for (int x : nums1) cout << x << " ";
    cout << endl;

    // Test 2: Extra array brute-force
    vector<int> nums2 = {0, 1, 0, 3, 12};
    nums2 = moveZeros(nums2.size(), nums2);
    cout << "Brute Force (extra array): ";
    for (int x : nums2) cout << x << " ";
    cout << endl;

    return 0;
}
