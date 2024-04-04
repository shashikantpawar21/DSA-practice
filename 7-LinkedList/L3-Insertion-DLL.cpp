#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;

    Node(int data, Node *next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev = prev;
    }
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

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

// TODO -
// INSERT BEFORE AND AFTER - HEAD TAIL AT K AT VALUE

// case 1 - Insert before head
// 1. keep the head safe in another node
// 2. Create a new node and update it next with head node
// 2. Update head prev with new node

Node *InsertBeforeHead(Node *head, int value)
{
    if (head == NULL)
        return new Node(value);
    Node *node = head;
    Node *newNode = new Node(value, node, nullptr);
    node->prev = newNode;

    head = newNode;
    return head;
}

// case 1 - Insert after head
Node *InsertAfterHead(Node *head, int value)
{
    if (head == NULL)
        return new Node(value);
    Node *node = head;
    Node *newNode = new Node(value, node->next, node);
    node->next = newNode;
    return head;
}

// case 2 - Insert value before tail
// 1. head till we reach tail
// 2. take the prev element
// 3. change it next to new element
// 4. change tail prev to new element
// 5. change new eleme prev to prev and next to tail
Node *InsertBeforeTail(Node *head, int value)
{
    if (head == NULL)
        return NULL;
    Node *node = head;
    while (node->next != nullptr)
    {
        node = node->next;
    }

    Node *prevNode = node->prev;

    Node *newNode = new Node(value, node, prevNode);
    prevNode->next = newNode;
    node->prev = newNode;
    return head;
}
Node *InsertAfterTail(Node *head, int value)
{
    if (head == NULL)
        return NULL;
    Node *node = head;
    while (node->next != nullptr)
    {
        node = node->next;
    }
    Node *newNode = new Node(value, nullptr, node);
    node->next = newNode;
    return head;
}

// 3. Insert before kth element
// kth = 1 insert before head
//  kth = last does not matter as we need to insert before it - null ptr will not cause issue
//  kth out of context , if node.next reaches nullptr then it last index and no k there
//  kth - 3 ,  (k-1)->next = new k , new k prev - (k-1), new k next old k , old k prev -> new k

Node *InsertBeforeKthElement(Node *head, int k, int value)
{
    if (head == NULL)
        return NULL;

    Node *node = head;
    if (k == 1)
    {
        Node *newNode = new Node(value, node, nullptr);
        node->prev = newNode;
        head = newNode;
        return head;
    }
    int index = 1;
    while (node->next != nullptr)
    {
        if (k - 1 == index)
        {
            Node *prevNode = node;
            Node *newNode = new Node(value, prevNode->next, prevNode);
            prevNode->next->prev = newNode;
            prevNode->next = newNode;
            return head;
        }
        index++;
        node = node->next;
    }
    return head;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    Node *head = ConvertArrToDll(arr, 5);
    Transverse(head);

    // // 1. Insert Head Before
    // head = InsertBeforeHead(head, 8);
    // Transverse(head);

    // // 1. Insert Head After
    // head = InsertAfterHead(head, 8);
    // Transverse(head);

    // 2. Insert Tail
    // head = InsertBeforeTail(head, 9);
    // Transverse(head);
    // 2. Insert Tail  after
    // head = InsertAfterTail(head, 9);
    // Transverse(head);

    // // 3. Insert Before Kth Element
    head = InsertBeforeKthElement(head, 8, 6);
    Transverse(head);

    // // 4. Delete at matched value
    // head = DeleteValue(head, 1);
    // Transverse(head);
}
