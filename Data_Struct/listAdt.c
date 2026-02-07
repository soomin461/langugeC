#include <stdio.h>

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

// Head: &Node / Tail : &Node
// Head.next : &NewNode
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

int main()
{
    // CreateNode, DestroyNode
    // AppendNode
    // GetNodeAt
    // RemoveNode
    // InsertAfter, InsertNewHead

    
    
    return 0;
}