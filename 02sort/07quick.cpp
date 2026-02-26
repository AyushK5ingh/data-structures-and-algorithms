#include <bits/stdc++.h>
using namespace std;


void quicksort2(int arr[], int low, int high) {
	if (low >= high) return;
	int pivot=arr[low];
	int i=low+1;
	int j=high;
	while(i<=j)
	{
		while (i <= high && arr[i] <= pivot) i++;
		while (j >= low && arr[j] > pivot) j--;
		if(i<j) swap(arr[i],arr[j]);
	}
	swap(arr[low],arr[j]);

	quicksort2(arr,low,j-1);
	quicksort2(arr,j+1,high);
}


int partition(vector<int>& arr, int low, int high) {
  
    // choose the pivot
    int pivot = arr[high];
  
    // undex of smaller element and indicates 
    // the right position of pivot found so far
    int i = low - 1;

    // Traverse arr[low..high] and move all smaller
    // elements on left side. Elements from low to 
    // i are smaller after every iteration
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    
    // move pivot after smaller elements and
    // return its position
    swap(arr[i + 1], arr[high]);  
    return i + 1;
}

// the QuickSort function implementation
void quickSort(vector<int>& arr, int low, int high) {
  
    if (low < high) {
      
        // pi is the partition return index of pivot
        int pi = partition(arr, low, high);

        // recursion calls for smaller elements
        // and greater or equals elements
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
 
int main() {
	int n;
	cin >> n;
	vector<int> arr;
	for (int i = 0; i < n; i++) {
		arr.push_back(i);
	}
	quickSort(arr , 0, n - 1);

	cout << "Sorted array:\n";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
