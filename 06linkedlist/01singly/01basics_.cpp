#include <bits/stdc++.h>
using namespace std;

//memory used
//for 64 bit system per node
//4 bit(int) + 8 bit(pointer) = 12 bit
//for 32 bit system per node
//4 bit(int) + 4 bit(pointer) = 8 bit

struct node
{
    int data;
    struct node *next;
    node(int data1, node *next1 = NULL)
    {
        data = data1;
        next = next1;
    }
};

int main()
{
    int n = 3;
    int *p = &n;
    cout << "Value pointed by p: " << *p << endl;
    cout << "Addre   ss stored in p: " << p << endl;


    struct node *head = new node(10, NULL);
    //it is a pointer of type node
    //created on heap
    //uses -> operator to access members
    //object is deleted when delete is used
    //high risk of memory leak if delete is not used
    cout<<typeid(head).name() << endl;
    cout<< head << endl;      // Address of heap object
    cout<< head->data << endl;// 10
    
    
    node head2 = node(10, NULL);
    //it is a object of type node
    //created on stack
    //uses . operator to access members
    //object is deleted when goes out of scope
    //low risk of memory leak
    cout << "Cannot print object directly" << endl;
    cout << &head2 << endl;   // Address of stack object
    cout<< head2.data << endl;// 10
    return 0;
}