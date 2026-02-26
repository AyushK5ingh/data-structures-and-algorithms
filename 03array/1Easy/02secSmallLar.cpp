#include <bits/stdc++.h>
using namespace std;

void second(int arr[], int n) {
    if (n < 2) {
        cout << "-1 -1";
        return;
    }

    int fs = INT_MAX, ss = INT_MAX; // smallest and second smallest
    int fl = INT_MIN, sl = INT_MIN; // largest and second largest

    for (int i = 0; i < n; i++) {
        // Smallest
        if (arr[i] < fs) {
            ss = fs;
            fs = arr[i];
        } else if (arr[i] < ss && arr[i] != fs) {
            ss = arr[i];
        }

        // Largest
        if (arr[i] > fl) {
            sl = fl;
            fl = arr[i];
        } else if (arr[i] > sl && arr[i] != fl) {
            sl = arr[i];
        }
    }

    if (ss == INT_MAX) ss = -1; // no second smallest
    if (sl == INT_MIN) sl = -1; // no second largest

    cout << ss << " " << sl;
}

int main() {
    int arr[] = {1, 10, 22, 2, 56, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    second(arr, n);
    return 0;
}
