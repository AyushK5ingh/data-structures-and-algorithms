#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> ls;
    //list is a doubly linked list which can grow and shrink in size
    //it can store any data type
    //costlier than vector but faster for insertion and deletion
    //it is a sequence container that allows non-contiguous memory allocation
    //similar to vector but it is not a dynamic array
    
    ls.push_back(1);
    ls.emplace_back(2);

    ls.push_front(3);

    ls.emplace_front(4);

    //rest of the code is similar to vector
}