#include<bits/stdc++.h>
using namespace std;

//vector is a dynamic array which can grow and shrink in size
//it is a part of the STL (Standard Template Library) in C++
//it is a sequence container that encapsulates dynamic size arrays
//it is a template class which means it can store any data type

void explainvector()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    // push_back is used to add an element at the end of the vector

    v.emplace_back(5);
    // emplace_back is used to add an element at the end of the vector
    // it is faster than push_back because it does not create a copy of the object
    // it directly constructs the object in the memory location of the vector

    vector<pair<int,int>> v1;
    v1.push_back({1,2});
    v1.emplace_back(3,4);

    vector<int> v2(5,10);
    // v2 is a vector of size 5 and all elements are initialized to 10
    vector<int> v4(6);
    //v4 is a vector of size 6 and all elements are 0
    vector<int> v3(v2);
    // v3 is a copy of v2
    
    vector<int>::iterator it = v.begin();
    // it is an iterator which points to the first element of the vector
    cout<<*it<<endl;
    it++;
    //iterator points to the psoition if the element in the vector
    // it++ is used to move the iterator to the next element
    //*it is used to access the iterator and get the value of the element

    vector<int>::iterator it1 = v.end();
    // end() returns an iterator to the past-the-end element in the vector
    vector<int>::reverse_iterator it2 = v.rend();
    // rend() returns a reverse iterator to the past-the-end element in the vector
    vector<int>::reverse_iterator it3 = v.rbegin();
    // rbegin() returns a reverse iterator to the first element in the vector
    //reverse moves in the opposite direction of the iterator

    cout<<v[0]<<" "<<v.at(0)<<endl;
    // v[0] and v.at(0) are used to access the first element of the vector
    cout<<v.front()<<" "<<v.back()<<endl;
    // front() returns the first element of the vector
    // back() returns the last element of the vector

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    // it is used to iterate through the vector using the iterator

    for(auto it = v.begin(); it != v.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    // auto is used to automatically deduce the type of the iterator
    for(auto it : v)
    {
        cout<<it<<" ";
    }
    //auto is used to automatically deduce the type of the iterator
    //it is used to iterate through the vector using the range-based for loop

    v.erase(v.begin()+1);
    // erase() is used to remove an element from the vector
    // v.begin()+1 is used to get the iterator to the second element of the vector
    // erase() removes the element at the iterator position
    // it shifts all the elements after the removed element to the left by one position

    v.erase(v.begin(),v.begin()+2);
    //delete the first two elements of the vector
    //[)
    
    vector<int>v(2,100);
    v.insert(v.begin(),2,200);

    vector<int>copy(2,100);
    copy.insert(copy.begin(),v.begin(),v.end());
    //insert the elements of the vector v into the vector copy

    cout<<v.size();

    v.pop_back();
    // pop_back() is used to remove the last element of the vector
    // it does not return the value of the removed element

    v.swap(v2);
    //swap the elements of the vector v with the elements of the vector v1

    copy.clear();
    // clear() is used to remove all the elements of the vector

    cout<<v.empty()<<endl;
    // empty() returns true if the vector is empty, false otherwise

    cout<<v.capacity()<<endl;
    // capacity() returns the size of the allocated storage capacity of the vector
    // it is the maximum size of the vector before it needs to reallocate memory

    cout<<v.at(2)<<endl;
    cout<<v.front()<<endl;
    //front() returns the first element of the vector
    cout<<v.back()<<endl;
    //back() returns the last element of the vector
    cout<<v.data()<<endl;
    //data() returns a pointer to the underlying array used by the vector to store its elements
}
int main()
{
    explainvector();
    return 0;
}