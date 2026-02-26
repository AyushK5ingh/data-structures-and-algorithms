#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    //provides sorted storage of unique elements
    //no duplicate elements are allowed
    //set is a container that stores unique elements in a specific order
    //it is a part of the STL (Standard Template Library) in C++

    s.insert(1);
    s.emplace(2);
    s.insert(3);
    s.emplace(4);

    //functionality of insert and emplace is similar to vector

    auto it = s.begin();

    auto it1 = s.find(2);
    // find() returns an iterator to the element if found, else it returns s.end()

    s.erase(5);
    s.erase(it1);
    // erase() is used to remove an element from the set

    int cnt = s.count(2);
    // count() returns the number of elements with the specified value in the set

    auto it3=s.find(2);
    auto it4=s.find(4);
    s.erase(it3);
    // erase() is used to remove an element from the set using the iterator

    auto it2 = s.lower_bound(2);
    // lower_bound() returns an iterator to the first element that is not less than the specified value4

    auto it5 = s.upper_bound(2);
    // upper_bound() returns an iterator to the first element that is greater than the specified value


    
}