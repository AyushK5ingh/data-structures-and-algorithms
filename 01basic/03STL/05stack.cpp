#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    //stack is a container adapter that gives the functionality of a stack
    //it is a LIFO (Last In First Out) data structure

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    // push() is used to add an element at the top of the stack
    s.emplace(5);

    cout<<s.top()<<endl;
    // top() returns the top element of the stack
    // it does not remove the element from the stack
    // it is used to access the top element of the stack

    s.pop();
    // pop() is used to remove the top element of the stack
    // it does not return the value of the removed element

    cout<<s.size()<<endl;
    
    cout<<s.empty()<<endl;
    // empty() returns true if the stack is empty, false otherwise
    // it is used to check if the stack is empty or not

    stack<int> s1, s2;
    // s1 and s2 are two stacks
    s.swap(s1);
    // swap() is used to swap the elements of the two stacks
}