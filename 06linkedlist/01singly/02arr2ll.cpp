#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *next;
    node(int val, node *n = nullptr)
    {
        data = val;
        next = n;
    }
};

node *convertArrayToLinkedList(const vector<int> &arr)
{
    node *head = new node(arr[0]);
    node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

node *convertArrayToLinkedListRecursive(const vector<int> &arr, int index = 0)
{
    if (index == arr.size())
    {
        return nullptr;
    }
    node *head = new node(arr[index]);
    head->next = convertArrayToLinkedListRecursive(arr, index + 1);
    return head;
}
int lengthll(node *head)
{
    int cnt = 0;
    node *temp = head;
    while (temp != nullptr)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

int searchll(node *head, int key)
{
    node *temp = head;
    int index = 0;
    while (temp != nullptr)
    {
        if (temp->data == key)
        {
            return index; // key found
        }
        index++;
        temp = temp->next;
    }
    return -1; // key not found
}

node *deletehead(node *head)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

node *deletetail(node *head)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    if (head->next == nullptr)
    {
        delete head;
        return nullptr;
    }
    node *temp = head;
    while (temp->next->next != nullptr)
    {
        
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

node *deleteatindex(node *head, int index)
{
    if (head == nullptr)
    {
        return nullptr;  
    }
    if (index == 0)
    {
        node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    node *temp = head;
    for (int i = 0; i < index - 1; i++)
    {
        if (temp->next == nullptr)
        {
            return head; // index out of bounds
        }
        temp = temp->next;
    }
    node *nodeToDelete = temp->next;
    if (nodeToDelete == nullptr)
    {
        return head; // index out of bounds
    }
    temp->next = nodeToDelete->next;
    delete nodeToDelete;
    return head;
}
node *removebyindex(node *head, int index)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    if (index == 0)
    {
        node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    node *temp = head;
    int cnt = 0;
    node *prev = nullptr;
    while (temp != nullptr)
    {
        if (cnt == index)
        {
            prev->next = prev->next->next;
            delete temp;
            return head;
        }
        prev = temp;
        temp = temp->next;
        cnt++;
    }
    return head; // index out of bounds
}

node *removebyvalue(node *head, int value)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    node *temp = head;
    node *prev = nullptr;
    while (temp != nullptr)
    {
        if (temp->data == value)
        {
            if (prev == nullptr)
            {
                head = head->next;
                delete temp;
                return head;
            }
            else
            {
                prev->next = temp->next;
                delete temp;
                return head;
            }
        }
        prev = temp;
        temp = temp->next;
    }
    return head; // value not found
}

node *inserthead(node *head, int value)
{
    return new node(value, head);
}

node *inserttail(node *head, int value)
{
    if (head == nullptr)
    {
        return new node(value);
    }
    node *temp = head;
    node *newNode = new node(value);
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

node *insertatkindex(node *head, int index, int value)
{
    if (index == 0)
    {
        return new node(value, head);
    }
    node *temp = head;
    int cnt = 0;
   while(temp!=nullptr && cnt<index-1)
   {
       temp = temp->next;
       cnt++;
   }
    if (temp == nullptr)
    {
        return head; // index out of bounds
    }
    node *newNode = new node(value, temp->next);
    temp->next = newNode;
    return head;
}
node* insertbeforevalue(node* head, int target, int value)
{
    if(head == nullptr)
    {
        return nullptr;
    }
    if(head->data == target)
    {
        return new node(value, head);
    }
    node* temp = head;
    while(temp->next != nullptr && temp->next->data != target)
    {
        temp = temp->next;
    }
    if(temp->next == nullptr)
    {
        return head; // target not found
    }
    node* newNode = new node(value, temp->next);
    temp->next = newNode;
    return head;
}
node* insertbeforeval(node* head, int target, int value)
{
    if(head == nullptr)
    {
        return nullptr;
    }
    if(head->data == target)
    {
        return new node(value, head);
    }
    node* temp = head;
    while(temp-> next!=nullptr)
    {
        if(temp->next->data == target)
        {
            node* newNode = new node(value, temp->next);
            temp->next = newNode;
            return head;
            break;
        }
        temp = temp->next;
    }
    return head; // target not found
}
int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};
    node *head = convertArrayToLinkedList(arr);
    cout << head->data << endl; // Output: 10
    cout << "looping through linked list:" << endl;
    for (node *mover = head; mover != nullptr; mover = mover->next)
    {
        cout << mover->data << endl; // Output: 20 30 40 50
    }
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << endl;
        node *nextNode = temp->next;
        temp = nextNode;
    }
    cout << "Length of linked list is: " << lengthll(head) << endl;
    int key = 30;
    cout << "Element " << key << " found at index: " << searchll(head, key) << endl;
    // cout<<"Deleting head node..."<<endl;
    // head=deletehead(head);
    // cout<<"New head is: "<<head->data<<endl;
    return 0;
}