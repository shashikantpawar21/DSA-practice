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

//  C1 - head, first value and null nul for next and prev
//  C2 copy head into prev, make move next to new ele and and new elem prev to prev
//  move prev to new elem and continue

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

// Case 1 - DELETE HEAD
// 1. No head return null 
// 2. head with next null ptr return null 
// 3. if head next has value , then make its prev as null ptr and return it 

Node* DeleteHead(Node* head)
{
    if(head == NULL || head->next == nullptr)
    {
        return NULL;
    }
    Node* prev = head;
    head = head->next;
    head->prev = nullptr;
    delete prev;
    return head;
}

// 2. DELETE TAIL
// 1. If head not return null and head next is null ptr return null
// 2. check if node -> next _>next is null pyt 
// 3. if so, then is 2nd last node so update it next with nullptr and

Node* DeleteTail(Node *head)
{
    if(head == NULL || head->next == nullptr) return NULL;

    Node* tail = head;
    while(tail->next != nullptr)
    {
        tail = tail->next;
    }
    
    Node* prevToTail = tail->prev;
    prevToTail->next = nullptr;
    delete tail;
    return head;
}

// case 3 - Delete at kth position
// 1. if head is null return null 
// 2. if k =1 delete head 
// 3. if k in btn , go to previous as update next to it next 
// 4. go to next and update prev as it prev 
// 5. out of bound k did not found as return LL 

Node* DeleteKthElement(Node* head, int k)
{
    if(head == NULL) return NULL;
    Node* node = head;

    int count=0;
    while (node)
    {
        ++count;
        if(count ==k)
        {
            break;
        }
        node = node->next;
    }
    if(count < k) return head;
    Node* prevNode =  node->prev;
    Node* nextNode = node->next;

    if(prevNode == NULL && nextNode==NULL)
    {
        delete node;
        return NULL;
    }

    if(prevNode == NULL)
       return DeleteHead(node);

    if(nextNode == NULL)    
      {
        return DeleteTail(head);
      } 

    prevNode->next = nextNode;
    nextNode->prev = prevNode;
    delete node;
    return head;
}

// 4. Delete match element
Node* DeleteValue(Node* head, int value)
{
    if(head == NULL) return NULL;
    Node* node = head;

    if(node->data == value && node->prev == nullptr && node->next ==nullptr)
    {
        delete node;
        return NULL;
    }
    bool isFound = false;
    while (node)
    {
        if(node->data == value)
        {
            isFound= true;
            break;
        }
        node = node->next;
    }
    if(!isFound) return head;
    Node* prevNode =  node->prev;
    Node* nextNode = node->next;

    if(prevNode == NULL)
       return DeleteHead(node);

    if(nextNode == NULL)    
      {
        return DeleteTail(head);
      } 

    prevNode->next = nextNode;
    nextNode->prev = prevNode;
    delete node;
    return head;
}


int main()
{
    int arr[5] = {1,2,3,4,5};
    Node *head = ConvertArrToDll(arr, 5);
    Transverse(head);
    
    // // 1. Delete Head 
    // head = DeleteHead(head);
    // Transverse(head);

    // // 2. Delete Tail 
    // head = DeleteTail(head);
    // Transverse(head);

    // // 3. Delete at kth index 
    // head = DeleteKthElement(head, 6);
    // Transverse(head);

    // // 4. Delete at matched value  
    head = DeleteValue(head, 1);
    Transverse(head);

}
