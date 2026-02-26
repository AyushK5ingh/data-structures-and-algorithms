#include<bits/stdc++.h>

using namespace std;

bool isSorted(int arr[], int n) {
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] > arr[(i + 1) % n]) {
                count++;
            }
        }

        // At most one drop allowed in sorted & rotated array
        return count <= 1;
}

int main() {

  int arr[] = {1, 2, 3, 4, 5}, n = 5;

  printf("%s", isSorted(arr, n) ? "True" : "False");

}