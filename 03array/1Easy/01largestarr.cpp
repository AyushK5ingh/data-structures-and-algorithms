#include<bits/stdc++.h>
using namespace std;

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

int larges(int arr[],int n)
{
	int index=0;
	for(int i=0; i<n; i++)
	{
		if(arr[i]>=arr[index])
		{
			index=i;
		}
	}
	return arr[index];
}
int largesort (int arr[],int n)
{
    sort(arr,n);
    return arr[n-1];
}
int main()
{
	int arr[]= {1,10,22,02,56,3};
	int n= sizeof(arr)/sizeof(arr[0]);
	cout<<larges(arr,n);
	cout<<largesort (arr,n);
	return 0;
}