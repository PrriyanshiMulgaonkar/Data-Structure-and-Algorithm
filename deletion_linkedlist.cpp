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

struct node * deletionFirst(struct node * head)
{
    struct node * ptr= head;
    head=head->next;
    free(ptr);
    return head;
}

struct node * deleteIndex(struct node * head, int index){
    struct node * p= head;
    struct node * q= head->next;
    for (int i = 0; i < index-1; i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
    
}

struct node * deleteEnd(struct node * head){
    struct node * p= head;
    struct node * q= head->next;
    while (q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
    
}

struct node * deleteValue(struct node * head, int value){
    struct node * p= head;
    struct node * q= head->next;
    while(q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if (q->data==value)
    {
        p->next=q->next;
        free(q);
    }
    
    return head;
    
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

    cout<<"Insertion before: ";
    traversal(head);
    cout<<endl;

    // head=deletionFirst(head);
    // head=deleteIndex(head,1);
    // head=deleteEnd(head);
    head=deleteValue(head,23);
    cout<<"Insertion after: ";
    traversal(head);
    
}