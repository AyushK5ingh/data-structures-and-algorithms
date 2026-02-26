#include<bits/stdc++.h>
using namespace std;

void expaainPair()
{
    pair<int,int> p1;
    p1.first=10;
    p1.second=20;
    cout<<p1.first<<" "<<p1.second<<endl;

    pair<int,pair<int,int>> p2;
    p2.first=10;
    p2.second.first=20;
    p2.second.second=30;
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;

    pair<int,int> arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[0].first<<" "<<arr[0].second<<endl;
}
int main()
{
    expaainPair();
    return 0;
}