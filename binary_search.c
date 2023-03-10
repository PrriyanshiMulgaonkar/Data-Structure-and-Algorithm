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

struct node* search(struct node * root, int key)
{
    if (root==NULL)
    {
        return NULL;
    }
    if (root->data==key)
    {
        return root;
    }
    else if (root->data>key)
    {
        return search(root->left,key);
    }
    else{
        return search(root->right,key);
    }
    
    
    
};


int main(){

    struct node*p=create(5);
    struct node*p1=create(3);
    struct node*p2=create(6);
    struct node*p3=create(1);
    struct node*p4=create(4);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;

    struct node* n = search(p, 6);
    if(n!=NULL){
    printf("Found: %d", n->data);
    }
    else{
        printf("Element not found");
    }
}