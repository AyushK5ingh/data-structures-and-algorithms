#include <bits/stdc++.h>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
// Bubble Sort function
//O(n^2) time complexity
//O(n) best case time complexity
void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
            //compare adjacent elements and swap them if they are in the wrong order
        }
    }
}
void sortopt(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true; 
            }
            //compare adjacent elements and swap them
        }
        if (!swapped) {
                break; 
            }
    }
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, n); 
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
