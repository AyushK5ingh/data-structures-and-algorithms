#include <bits/stdc++.h>
using namespace std;

//character hashing also possible
//using hash and map
//hashing is used to store the frequency of elements in an array

int main() {
    int n;
    cin>>n;
    int arr[n];
    
    unordered_map <int,int> map;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        map[arr[i]]++;
    }
    for(auto it : map)
    {
        cout<<it.first<<"->"<<it.second;
        cout<<endl;
    }

    int hash[n+1]={0}; 

    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int num;
        cin>>num;
        cout<<num<<" "<<hash[num]<<endl;
    }


    return 0;
}