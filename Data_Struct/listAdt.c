#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct tagNode
{
    ElementType Data;
    struct tagNode* NextNode;
} Node;

Node* SLL_CreateNode(ElementType NewData)
{
    Node* NewNode = (Node*)malloc(sizeof(Node));
    NewNode->Data = NewData;
    NewNode->NextNode = NULL;
    return NewNode;
}

void SLL_AppendNode(Node** Head, Node* NewNode)
{
    if ((*Head) == NULL)
    {
        *Head = NewNode;
    }
    else
    {
        Node* Tail = (*Head);
        while (Tail->NextNode != NULL)
        {
            Tail = Tail->NextNode;
        }
        Tail->NextNode = NewNode;
    }
}

Node* SLL_GetNodeAt(Node* Head, int Loc)
{
    Node* Current = Head;
    while ((Current != NULL) && (--Loc) >= 0)
    {
        Current = Current->NextNode;
    }
    return Current;
}

int main()
{
    Node* List = NULL;
    Node* MyNode = NULL;

    SLL_AppendNode(&List, SLL_CreateNode(117));
    SLL_AppendNode(&List, SLL_CreateNode(119));

    MyNode = SLL_GetNodeAt(List, 1);
    printf("%d", MyNode->Data);
}