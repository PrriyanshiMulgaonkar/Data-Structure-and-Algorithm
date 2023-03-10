#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node * next;
};
void traversal(struct node * pointr){
    while (pointr != NULL)
    {
       cout<<pointr->data<<" ";
       pointr=pointr->next;
    }
    
    
}

int main()
{
    struct node * head;
    struct node * second;
    struct node * third;

    // Allocate memory for nodes in heap
    head= (struct node *) malloc (sizeof(struct node));
    second= (struct node *) malloc (sizeof(struct node));
    third= (struct node *) malloc (sizeof(struct node));
    // linking
    head->data=7;
    head->next=second;

    second->data=11;
    second->next=third;

    third->data=23;
    third->next=NULL;

    traversal(head);
    
}