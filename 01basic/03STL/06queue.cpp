#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    //queue is a container adapter that gives the functionality of a queue
    //it is a FIFO (First In First Out) data structure
    //it is a sequence container that allows non-contiguous memory allocation
    //it is similar to stack but it allows insertion and deletion at both ends

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    // push() is used to add an element at the back of the queue
    q.emplace(5);

    cout<<q.front()<<endl;
    // front() returns the first element of the queue
    // it does not remove the element from the queue

    cout<<q.back()<<endl;
    // back() returns the last element of the queue
    // it does not remove the element from the queue

    q.pop();
    // pop() is used to remove the first element of the queue
    // it does not return the value of the removed element

    cout<<q.size()<<endl;
    
    cout<<q.empty()<<endl;
    // empty() returns true if the queue is empty, false otherwise
    
}