#include<bits/stdc++.h>
using namespace std;

int main() {
    int a[5] = {1,2,3,4,5};
    //int a[5] = {1};
    //int a[5] = {0};
    //int a[5] = {};
    //int a[5];
    //int a[] = {1,2,3,4,5};
    //int a[] = {1,2,3};
    //int a[] = {1};
    //int a[] = {0};
    //int a[] = {};
    //int a[];
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<&a[0]<<endl;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(a)/sizeof(a[0])<<endl;
    cout<<sizeof(a)/sizeof(int)<<endl;
    cout<<sizeof(a)/sizeof(int*)<<endl;

    //2d array
    int b[2][3] = {{1,2,3},{4,5,6}};
    cout<<b<<endl;
}
// Compare this snippet from 04loop.cpp: 