#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node* next;
};
void traversal(struct node * pointr){
    while (pointr != NULL)
    {
       cout<<"Element: "<<pointr->data<<endl;
       pointr=pointr->next;
    }   
    
}
int IsFull(struct node *top){
    struct node *n=(struct node *) malloc (sizeof(struct node));
    if (n==NULL)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}

int isEmpty(struct node * top){
    if (top==NULL)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}

struct node * push(struct node * top,int x){
    
    if (IsFull(top))
    {
        cout<<"Stack overflow"<<endl;
    }
    else{
        struct node *n=(struct node *) malloc (sizeof(struct node));
        n->data=x;
        n->next=top;
        top=n;
        return top;
    }
    
}
int pop(struct node ** top){
    
    if (isEmpty(*top))
    {
        cout<<"Stack underflow"<<endl;
    }
    else{
        struct node *n=(*top);
        (*top)=(*top)->next;
        int x=n->data;
        free(n);
        return x;
    }
    
}
int main(){
    struct node * top=NULL;
    top= push(top,55);
    top= push(top,65);
    top= push(top,75);
    top= push(top,85);
    top= push(top,95);
    traversal(top);
    int element=pop(&top);
    cout<<"Pop element is: "<<element<<endl;
    traversal(top);


}