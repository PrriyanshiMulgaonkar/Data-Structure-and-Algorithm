#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node * next;
};
void traversal(struct node * head){
    struct node*p=head;
    
    do
    {
       cout<<p->data<<" ";
       p=p->next;
    }while (p != head);
    cout<<endl;
    
}
struct node * Insertion(struct node * head, int data){
    struct node * ptr= (struct node *) malloc (sizeof(struct node));
    ptr->data=data;
    struct node * p= head->next;
    
    while (p->next!=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
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
    third->next=head;
    traversal(head);

    head=Insertion(head,55);
    traversal(head);
    
}