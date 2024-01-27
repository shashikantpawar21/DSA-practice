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
    if(n ==0)
        return NULL;
    Node *head = new Node(arr[0]);

    if(n==1)
        return head;

    Node *mover = head;

    for (int i = 1; i < n; i++)
    {
        Node *node = new Node(arr[i]);
        mover->next = node;
        mover = node; 
    }
    return head;
}

// after insert return head
// param -> new head value and old head 
//  
Node* insertHead(Node* head, int newHead)
{
    if(head == NULL)
        return new Node(newHead);
    else
        return new Node(newHead, head);
}

// return head 
// 1. if head == null , it is head only 
// 2. traverse until nullptr is found last node 
// 3. create a new node will next as null 
// 4. update node with previous last node
Node* insertTail(Node* head, int newTail)
{
    if(head == NULL)
        return new Node(newTail);

    Node *node = head;
    while(node->next != nullptr)
    {
        node = node->next;
    }

    Node *newTailNode = new Node(newTail);
    node->next = newTailNode;
    return head;
}

// Insert At Kth Element 
// 1. case 1 - insert at 1 or if LL is empty - head 
// 2. case 2 - keep cnt while trasverse , once loc is found 
//    create the new element and update next node to currnet node 
//       and value prev node next to this new element  
// 3. case 3 - if kth elemtn nt there dont do anything 

Node* insertAtKthElement(Node* head, int value, int k)
{
    if(head == NULL || k ==1)
    {
        return insertHead(head, value);
    }

    Node *node = head;
    int count = 0;
    while(node)
    {
        ++count;
        if(count == k-1)
        {
            Node *newNode = new Node(value, node->next);
            node->next = newNode;
            return head;
        }
        node = node->next;
    }

    return head;
}
// Insert before value matches 
// 1. case 1 - insert at 1 or if LL is empty - head 
// 2. case 2 - keep cnt while trasverse , once loc is found 
//    create the new element and update next node to currnet node 
//       and value prev node next to this new element  
// 3. case 3 - if kth elemtn nt there dont do anything 

Node* insertBeforeValue(Node* head, int value, int target)
{
    if(head == NULL || head->data == value)
    {
        return insertHead(head, target);
    }

    Node *node = head;
    while(node->next)
    {
        if(node->next->data == value)
        {
            Node *newNode = new Node(target, node->next);
            node->next = newNode;
            return head;
        }
        node = node->next;
    }
    return head;
}

// INSERT IF VALUE MATCHES 
void traverseLL(Node* head)
{
    if(head == NULL) 
    {
        cout << "No Linked list is present" << endl;
        return;
    }
    Node *node = head;
    while(node)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    int arr[3] = {1,2,3};
    
    Node *head = ConvertArrToLL(arr, 3);

    // // 1. INSERT INTO HEAD
    // cout << "Head before insert  - " << head->data << endl;
    // traverseLL(head);
    // head = insertHead(head, 4);
    // cout << "Head after insert - " << head->data << endl;
    // traverseLL(head); 

    // // 2. INSERT INTO TAIL
    // cout << "insert into tail before " << endl;
    // traverseLL(head);
    // head =insertTail(head, 5);
    // cout << "insert into tail after" << endl;
    // traverseLL(head);

    // 3. Add at kth element 
    // cout << "insert into tail before " << endl;
    // traverseLL(head);
    // head =insertAtKthElement(head, 6,5);
    // cout << "insert into tail after" << endl;
    // traverseLL(head);

    // 4. Add before value    
    cout << "LL before value insert " << endl;
    traverseLL(head);
    head = insertBeforeValue(head, 1, 5);
    cout << "LL after value insert " << endl;
    traverseLL(head);
}

 
