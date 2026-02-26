#include <iostream>
using namespace std;

// Rotate to the right by k
void Rotatetoright(int arr[], int n, int k) {
    if (n == 0) return;
    k = k % n;
    int temp[k];

    // Store last k elements
    for (int i = n - k; i < n; i++) {
        temp[i - (n - k)] = arr[i];
    }

    // Shift rest of the elements to the right
    for (int i = n - k - 1; i >= 0; i--) {
        arr[i + k] = arr[i];
    }

    // Put temp elements in front
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

// Rotate to the left by k
void Rotatetoleft(int arr[], int n, int k) {
    if (n == 0) return;
    k = k % n;
    int temp[k];

    // Store first k elements
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }

    // Shift remaining elements to the left
    for (int i = 0; i < n - k; i++) {
        arr[i] = arr[i + k];
    }

    // Put temp elements at the end
    for (int i = n - k; i < n; i++) {
        arr[i] = temp[i - (n - k)];
    }
}

int main() {
    int n = 7;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7};
    int arr2[] = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;

    // Rotate right
    Rotatetoright(arr1, n, k);
    cout << "After Rotating the elements to right by " << k << ": ";
    for (int i = 0; i < n; i++) cout << arr1[i] << " ";
    cout << endl;

    // Rotate left
    Rotatetoleft(arr2, n, k);
    cout << "After Rotating the elements to left by " << k << ": ";
    for (int i = 0; i < n; i++) cout << arr2[i] << " ";
    cout << endl;

    return 0;
}
