#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
    int data;
    struct node * left;
    struct node * right;
     
};

struct node * create(int data){
    struct node * n;
    n=(struct node *)malloc (sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

void preOrder(struct node *root){
    if (root!=NULL)
    {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
    
}
int main(){

    struct node*p=create(2);
    struct node*p1=create(1);
    struct node*p2=create(5);
    struct node*p3=create(3);
    struct node*p4=create(6);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;

    preOrder(p);



    
}