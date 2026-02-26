#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
    node(int val, node *n = nullptr, node *p = nullptr)
    {
        data = val;
        next = n;
        prev = p;
    }
};

node *convertarraytodll(const vector<int> &arr)
{
    node *head = new node(arr[0]);
    node *perv = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node(arr[i], nullptr, perv);
        perv->next = temp;
        perv = temp;
    }
    return head;
}

node *deletehead(node *head)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    head->next->prev = nullptr;
    node *newHead = head->next;
    delete head;
    return newHead;
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
    node *tail = temp->next;
    delete tail;
    temp->next = nullptr;
    return head;
}
node* deletebyindex(node* head, int index)
{
    if (head == nullptr || index < 1)
        return head;

    node* curr = head;

    // move to the index-th node
    for (int i = 1; i < index; i++)
    {
        curr = curr->next;
        if (curr == nullptr)  // index out of range
            return head;
    }

    // deleting the head node
    if (curr == head)
    {
        head = head->next;
        if (head != nullptr)
            head->prev = nullptr;
        delete curr;
        return head;
    }

    // connect prev and next
    if (curr->prev != nullptr)
        curr->prev->next = curr->next;

    if (curr->next != nullptr)
        curr->next->prev = curr->prev;

    delete curr;
    return head;
}


node *reversedll(node *head)
{
	if(head==nullptr||head->next==nullptr)
	{
		return head;
	}
	node *current=head;
	node *newhead=nullptr;
	while(current!=nullptr)
	{	node *temp=current->next;
		current->next=current->prev;
		current->next=temp;
		newhead=current;
		current=temp;
	}
	return newhead;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};
    node *head = convertarraytodll(arr);
    return 0;
}