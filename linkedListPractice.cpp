#include <iostream>

struct node {
    int data;
    node* next;
};

void printList(node* ptr) {
    while (ptr) {
        std::cout << ptr -> data << std::endl;
        ptr = ptr -> next;
    }
    return;
}

int main()
{
    node* pCurrent;
    node* pHead;

    // Head Node
    pCurrent = new node;
    pCurrent -> data = 0;
    pHead = pCurrent;
    // New Nodes
    for (int i = 1; i < 10; i++) {
        pCurrent -> next = new node;
        pCurrent = pCurrent -> next;
        pCurrent -> data = i;
    }
    // Terminate List
    pCurrent -> next = NULL;

    // Print List
    printList(pHead);

    return 0;
}
