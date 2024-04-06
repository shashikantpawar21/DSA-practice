// https: // www.naukri.com/code360/problems/reverse-a-doubly-linked-list_1116098?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

// Problem statement
// You are given a doubly-linked list of size 'N', consisting of positive integers. Now your task is to reverse it and return the head of the modified list.

// Note:
// A doubly linked list is a kind of linked list that is bidirectional, meaning it can be traversed in both forward and backward directions.
// Example:

// Input: 
// 4
// 4 3 2 1

// This means you have been given doubly linked list of size 4 = 4 <-> 3 <-> 2 <-> 1.

// Output: 
// 1 2 3 4

// This means after reversing the doubly linked list it becomes 1 <-> 2 <-> 3 <-> 4

#include <iostream>
#include <vector>
using namespace std;

class Node
{
    public:
        int data;
        Node *next,*prev;
        Node()
        {
            this->data = 0;
            next = nullptr;
            prev= nullptr;
        }
        Node(int data)
        {
            this->data = data; 
            this->next = nullptr;
            this->prev= nullptr;
        }
        Node(int data, Node* next, Node *prev)
        {
            this->data = data;
            this->next = next;
            this->prev= prev;
        }
};

//  4  3  2  1 
//  4 - null  3        3   null 
//  3  - 4    2        2    4 
//  2  - 3   1      --  1    3
//  1  - 2  - null      null   2

Node* reverseDLL(Node* head)
{   
   Node* node = head; 
   Node* prev = nullptr;
   while(node != nullptr)
   {
        Node* temp = node->next;
        node->next = node->prev;
        node->prev = temp;

        if(node->prev == nullptr)
        {
            head = node;
            return head;
        }
        node = node->prev;
   }
   return head;
}


Node *ConvertArrToDll(int arr[], int n)
{
    if (n == 0)
        return nullptr;

    Node *head = new Node(arr[0]);
    Node *prev = head;

    for (int i = 1; i < n; i++)
    {
        Node *node = new Node(arr[i], nullptr, prev);
        prev->next = node;
        prev = node;
    }
    return head;
}

void Transverse(Node *head)
{
    Node *node = head;
    while (node)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}


int main()
{
    int arr[4] = {4,3,2,1};
    Node *head = ConvertArrToDll(arr, 4);
    Transverse(head);
    head =  reverseDLL(head);
     Transverse(head);
}