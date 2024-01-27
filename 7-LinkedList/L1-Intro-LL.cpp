//  Notes - https://takeuforward.org/linked-list/linked-list-introduction/

// It is a linear data structure that can be visualized as a chain with different nodes connected, where each node represents a different element. The difference between arrays and linked lists is that, unlike arrays, the elements are not stored at a contiguous location.

// Since for any element to be added in an array, we need the exact next memory location to be empty, and it is impossible to guarantee that it is possible. Hence adding elements to an array is not possible after the initial assignment of size.

// A linked list is a data structure containing two crucial pieces of information, the first being the data and the other being the pointer to the next element. The ‘head’ is the first node, and the ‘tail’ is the last node in a linked list.

#include <iostream>
using namespace std;

struct Node{
    public:
        int data;  // data 
        Node *next; // ptr to next data location 
        Node *head;
        Node *mover;

    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

Node* ConvertArrToLL(int* arr, int n)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < n; i++)
    {
        Node *node = new Node(arr[i]);
        mover->next = node;
        mover = node; 
    }
    return head;
}
int lengthofLL(Node* head)
{
    int count = 0;
    Node *node = head;
    while (node)
    {
        node = node->next;
        count++;
    }
    return count;
}

bool check(Node* head, int target)
{
    Node *node = head;

    while(node)
    {
        if(node->data == target)
            return true;
        node = node->next;
    }
    return false;
}

int main() {
    int arr[3] = {1, 2, 3};
    Node *node = new Node(arr[2]);

    cout << "data of LL node " <<node->data << endl;
    cout << "next pointer of LL node " <<node->next << endl;

    Node *head = ConvertArrToLL(arr, 3);
    cout << "Head node data " << head->data << endl;

    cout << "traversing the LL converted from array " << endl<< endl;
    Node *node1 = head;
    while(node1)
    {
        cout << "current data - " << node1->data << " ";
        cout << ", next node address "  << node1->next << " " << endl;
        node1 = node1->next;
        //  This break while we try to print for last element 
        // cout << "After current node updated" << endl;
        // cout << ", updated current node address " <<  node1 << " " ;
        // cout << "updated current data - " << node1->data << " ";
        // cout << ", updated current node next node address " << node1->next << " " << endl << endl;
    }
    cout << endl; 

    int length = lengthofLL(head);
    cout << "Length of LL " << length << endl;

    bool isPresent = check(head, 12);
    if(isPresent)
        cout << "No is present in LL" << endl;
    else 
        cout << "No is not present in LL" << endl;
}