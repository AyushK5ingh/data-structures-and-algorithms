#include <bits/stdc++.h>
using namespace std;

/*
==========================================================
Approach 1: Brute Force (Sorting)
----------------------------------------------------------
Algorithm:
- Since the array contains only 0, 1, and 2, we can simply
  use the built-in sort function.
- Time Complexity: O(N log N)
- Space Complexity: O(1)
==========================================================
*/
void sortColorsBrute(vector<int>& arr) {
    sort(arr.begin(), arr.end());
}

/*
==========================================================
Approach 2: Counting Approach
----------------------------------------------------------
Algorithm:
- Count the frequency of 0’s, 1’s, and 2’s.
- Overwrite the array with the correct number of 0’s, then 1’s, then 2’s.
- Time Complexity: O(N)
- Space Complexity: O(1)
==========================================================
*/
void sortColorsCounting(vector<int>& arr) {
    int n = arr.size();
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;

    for (int num : arr) {
        if (num == 0) cnt0++;
        else if (num == 1) cnt1++;
        else cnt2++;
    }

    int index = 0;
    while (cnt0--) arr[index++] = 0;
    while (cnt1--) arr[index++] = 1;
    while (cnt2--) arr[index++] = 2;
}

/*
==========================================================
Approach 3: Dutch National Flag Algorithm (Optimal)
----------------------------------------------------------
Algorithm:
- Use three pointers: low (for 0), mid (for current), high (for 2).
- Traverse the array:
    - If arr[mid] == 0 → swap with arr[low], increment both.
    - If arr[mid] == 1 → just move mid forward.
    - If arr[mid] == 2 → swap with arr[high], decrement high.
- Time Complexity: O(N)
- Space Complexity: O(1)
==========================================================
*/
void sortColorsDutchFlag(vector<int>& arr) {
    int low = 0, mid = 0, high = arr.size() - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

/*
==========================================================
Main Function: Compare all three approaches
==========================================================
*/
int main() {
    vector<int> arr = {0, 2, 1, 2, 0, 1};

    cout << "Original Array:\n";
    for (int x : arr) cout << x << " ";
    cout << "\n\n";

    // Brute Force
    vector<int> arr1 = arr;
    sortColorsBrute(arr1);
    cout << "After Brute Force Sorting (O(N log N)):\n";
    for (int x : arr1) cout << x << " ";
    cout << "\n\n";

    // Counting Approach
    vector<int> arr2 = arr;
    sortColorsCounting(arr2);
    cout << "After Counting Approach (O(N)):\n";
    for (int x : arr2) cout << x << " ";
    cout << "\n\n";

    // Dutch National Flag Algorithm
    vector<int> arr3 = arr;
    sortColorsDutchFlag(arr3);
    cout << "After Dutch National Flag Algorithm (O(N)):\n";
    for (int x : arr3) cout << x << " ";
    cout << "\n";

    return 0;
}
