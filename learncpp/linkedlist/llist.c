#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


struct Node
{
    struct Node* next;
    int val;
};

typedef struct Node Node;

Node* createNode(int v)
{
    Node* ptr;
    ptr = (Node*)malloc(sizeof(Node));
    ptr->val = v;
    ptr->next = NULL;
    return ptr;
}

void deleteList(Node* Head)
{
    Node* ptr = Head;
    while(ptr!=NULL)
    {
        Node* nextptr = ptr->next;
        free(ptr);
        ptr = nextptr;
    }
}

int main()
{
    Node* Head = createNode(10);
    Head->next = createNode(11);
    Head->next->next = createNode(13);

    Node* ptr = Head;

    while(ptr!=NULL)
    {
        printf("(%d) ",ptr->val);
        ptr = ptr->next;
    }

    deleteList(Head);
    return 0;
}