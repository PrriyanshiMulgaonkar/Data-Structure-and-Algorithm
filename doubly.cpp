#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node * next;
    struct node * prev;
};

void linkListTraversal(struct node * head){
    struct node *p = head;
    while(p->next!=NULL){
        cout<<p->data<<endl;
        p = p->next;
    }
    cout<<p->data<<endl<<endl;
    while(p!=NULL){
        cout<<p->data<<endl;
        p = p->prev;
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
    head->prev=NULL;

    second->data=11;
    second->next=third;
    second->prev=head;

    third->data=23;
    third->next=NULL;
    third->prev=second;

    linkListTraversal(head);
}