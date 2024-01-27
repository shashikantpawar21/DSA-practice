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

Node* removesHead(Node* head)
{
    if(head == NULL)
        return head;
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node*  removesTail(Node* head)
{
    if (head == NULL || head->next == nullptr)
    {
        delete head;
        return NULL;
    }
    
    Node *node = head;
    while(node->next->next != nullptr)
    {
        node = node->next;
    }

    delete node->next;
    node->next = nullptr;
    return head;
}

Node* removesKthElement(Node* head, int k)
{
    // if LL do not contain any element
    if(head == NULL)
    {
        cout << "kth element not present" << endl;
        return head;
    }
    //  if k is first elemetn it means remove head
    if(k==1)
        return removesHead(head);

    // if k is not somehting in LL
    if(k <=0)
            return head;

    Node *node = head;
    Node *prevNode = head;
    int count = 0;
    while (node)
    {
        ++count;
        if(count ==k)
        {
            // if element to be removed is last element 
            if(node->next == nullptr)
            {
                prevNode->next = nullptr;
                delete node;
                return head;
            }
            else{
            // if element to be removed is middle element 
                prevNode->next = node->next;
                delete node;
                return head;
            }
        }
        else{
            prevNode = node;
            node = node->next;
        }
    }
    cout << "kth element not present" << endl;
    return head;
}


Node* removesValue(Node* head, int value)
{
    // if LL do not contain any element
    if(head == NULL)
    {
        cout << "kth element not present" << endl;
        return head;
    }
    //  if value is first elemetn it means remove head
    if(head->data==value)
        return removesHead(head);

    Node *node = head;
    Node *prevNode = head;
    while (node)
    {
        if(node->data == value)
        {
            // if element to be removed is last element 
            if(node->next == nullptr)
            {
                prevNode->next = nullptr;
                delete node;
                return head;
            }
            else{
            // if element to be removed is middle element 
                prevNode->next = node->next;
                delete node;
                return head;
            }
        }
        else{
            prevNode = node;
            node = node->next;
        }
    }
    cout << "kth element not present" << endl;
    return head;
}


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

    // cout << "Head before delete - " << head->data << endl;
    // head = removesHead(head);
    // cout << "Head after delete - " << head->data << endl;

    // cout << "LL before tail removed " << endl;
    // traverseLL(head);
    // head =removesTail(head);
    // cout << "LL after tail removed " << endl;
    // traverseLL(head);

    
    // cout << "LL before kth element removed " << endl;
    // traverseLL(head);
    // head = removesKthElement(head, 2);
    // cout << "LL after kth element removed " << endl;
    // traverseLL(head);

    cout << "LL before value removed " << endl;
    traverseLL(head);
    head = removesValue(head, 2);
    cout << "LL after value removed " << endl;
    traverseLL(head);
}

 
