#include <bits/stdc++.h>
using namespace std;

void explianMap()
{
    //store key-value pairs in a specific order
    //key is unique and value can be duplicate
    //map is a container that stores elements in a specific order

    map<int, int> m;

    map<int, pair<int,int>> mpp;

    map<pair<int,int>, int> map;

    mpp[1] = {2, 3};
    mpp[2] = {3, 4};

    mpp.emplace(3, make_pair(4, 5));
    mpp.insert({4, {5, 6}});

    for(auto it: mpp)
    {
        cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<endl;

    }
    //it is used to iterate through the map using the iterator

    cout<<mpp[1].first<<" "<<mpp[1].second<<endl;

    auto it = mpp.find(1);
    cout<<it->first<<" "<<it->second.first<<" "<<it->second.second<<endl;
    //find() returns an iterator to the element if found, else it returns m.end()

    auto it=mpp.find(5);

    auto it1=mpp.lower_bound(2);
    //lower_bound() returns an iterator to the first element that is not less than the specified value

    auto it2=mpp.upper_bound(2);
    //upper_bound() returns an iterator to the first element that is greater than the specified value

    //erase swap size empty are same as others
}
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}