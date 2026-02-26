#include<bits/stdc++.h>
using namespace std;

void explainUnorderedMap()
{
    //unordered set simlar to this, but it stores unique elements in no particular order
    unordered_map <int, int> umap;
    //unordered_map is a container that stores elements in no particular order
    //it allows duplicate elements
    //it is a part of the STL (Standard Template Library) in C++

    umap[1] = 2;
    umap[2] = 3;
    umap[3] = 4;
    umap[4] = 5;

    for(auto it : umap)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    //it is used to iterate through the unordered_map using the iterator

}
int main()
{
    explainUnorderedMap();
    return 0;
}