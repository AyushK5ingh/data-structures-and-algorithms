#include<bits/stdc++.h>
using namespace std;

void explainmultiset()
{
    multiset<int> s;
    //multiset is a container that stores elements in a specific order
    //it allows duplicate elements
    //it is a part of the STL (Standard Template Library) in C++

    s.insert(1);
    s.emplace(2);
    s.insert(3);
    s.emplace(4);

    s.erase(5);
    // erase() is used to remove an element from the multiset
    // it removes all occurrences of the element from the multiset
    // it shifts all the elements after the removed element to the left by one position
    // it does not return the value of the removed element

    int cnt = s.count(2);
    // count() returns the number of elements with the specified value in the multiset

    s.erase(s.find(2));
    //erase one occurance of one element from the multiset using the iterator
    
    auto it1 = s.find(1);
    auto it2 = it1;
    advance(it2, 2); // Move the iterator forward by 2 positions
    s.erase(it1, it2);
    //erase multiple occurrences of an element from the multiset using the iterator

}
int main()
{
    explainmultiset();
    return 0;
}