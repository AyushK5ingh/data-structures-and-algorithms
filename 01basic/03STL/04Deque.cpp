#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int>dq;
    //deque is a double-ended queue which can grow and shrink in size
    //it is a sequence container that allows non-contiguous memory allocation   
    //it is similar to vector but it allows insertion and deletion at both ends
    //dynamic array which can grow and shrink in size

    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(3);
    dq.emplace_front(4);

    dq.pop_back();
    dq.pop_front();

    dq.back() = 10;
    dq.front() = 20;

    //rest of the code is similar to vector
    
}
