#include <bits/stdc++.h>
using namespace std;

// Method 1: Using an extra array
void solveWithTemp(int arr[], int n) {
    int temp[n];
    for (int i = 1; i < n; i++) {
        temp[i - 1] = arr[i];
    }
    temp[n - 1] = arr[0];

    cout << "Left Rotate by 1 (extra array): ";
    for (int i = 0; i < n; i++) {
        cout << temp[i] << " ";
    }
    cout << endl;
}

// Method 2: Shifting in-place
void solveInPlace(int arr[], int n) {
    int temp = arr[0]; // store first element
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp; // put first element at last

    cout << "Left Rotate by 1 (in-place): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 5;
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};

    solveWithTemp(arr1, n);
    solveInPlace(arr2, n);

    return 0;
}
