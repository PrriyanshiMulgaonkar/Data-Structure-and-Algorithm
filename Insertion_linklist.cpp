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

struct node * insertFirst(struct node * head, int data)
{
    struct node * ptr= (struct node *) malloc (sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
};

struct node * insertIndex(struct node * head, int data,int index)
{
    struct node * ptr= (struct node *) malloc (sizeof(struct node));
    struct node * p=head;
    int i=0;
    while (i!=index-1)
    {
        p=p->next;
        i++;
    } 
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
};

struct node * insertEnd(struct node * head, int data)
{
    struct node * ptr= (struct node *) malloc (sizeof(struct node));
    // ptr->data=data;
    struct node * p=head;
    
    while (p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->data=data;
    ptr->next=NULL;
    
    return head;
    
};

struct node * insertafterNode(struct node * head, struct node * preNode, int data)
{
    struct node * ptr= (struct node *) malloc (sizeof(struct node));
    ptr->data=data;
    ptr->next=preNode->next;
    preNode->next=ptr;
    return head;

};
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
    cout<<"Insertion before: ";
    traversal(head);
    cout<<endl;
    // head=insertFirst(head,78);
    // head=insertIndex(head,56,2);
    cout<<"Insertion after: ";
    // head=insertEnd(head,56);
    head=insertafterNode(head,second,56);
    traversal(head);
    
}