#include <bits/stdc++.h>
using namespace std;

// ---------- Method 1: Two Pointer (works if arrays are sorted) ----------
vector<int> FindUnionTwoPointer(int arr1[], int arr2[], int n, int m) {
    int i = 0, j = 0;
    vector<int> Union;
    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            if (Union.empty() || Union.back() != arr1[i])
                Union.push_back(arr1[i]);
            i++;
        } else {
            if (Union.empty() || Union.back() != arr2[j])
                Union.push_back(arr2[j]);
            j++;
        }
    }
    while (i < n) {
        if (Union.back() != arr1[i])
            Union.push_back(arr1[i]);
        i++;
    }
    while (j < m) {
        if (Union.back() != arr2[j])
            Union.push_back(arr2[j]);
        j++;
    }
    return Union;
}

// ---------- Method 2: Using Set (works even if arrays unsorted) ----------
vector<int> FindUnionSet(int arr1[], int arr2[], int n, int m) {
    set<int> s;
    vector<int> Union;
    for (int i = 0; i < n; i++)
        s.insert(arr1[i]);
    for (int i = 0; i < m; i++)
        s.insert(arr2[i]);
    for (auto &it : s)
        Union.push_back(it);
    return Union;
}

int main() {
    int n = 10, m = 7;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};

    // Method 1: Two-Pointer
    vector<int> unionTP = FindUnionTwoPointer(arr1, arr2, n, m);
    cout << "Union using Two-Pointer method:" << endl;
    for (auto &val : unionTP) cout << val << " ";
    cout << "\n\n";

    // Method 2: Set
    vector<int> unionSet = FindUnionSet(arr1, arr2, n, m);
    cout << "Union using Set method:" << endl;
    for (auto &val : unionSet) cout << val << " ";
    cout << endl;

    return 0;
}
