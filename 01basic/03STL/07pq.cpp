#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;
    //priority_queue is a container adapter that gives the functionality of a priority queue
    //it is a FIFO (First In First Out) data structure
    
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.emplace(4);

    cout<<pq.top()<<endl;

    pq.pop();
    // pop() is used to remove the top element of the priority queue

    //min heap
    priority_queue<int, vector<int>, greater<int>> pq1;
    // priority_queue is a container adapter that gives the functionality of a priority queue
    pq1.push(1);
    pq1.push(2);
    pq1.push(3);
    pq1.emplace(4);

    cout<<pq1.top()<<endl;
    // top() returns the top element of the priority queue
}