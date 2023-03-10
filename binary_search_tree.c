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

void InOrder(struct node *root){
    if (root!=NULL)
    {
        
        InOrder(root->left);
        printf("%d ", root->data);
        InOrder(root->right);
        
    }
    
}
int InBST(struct node *root){
    static struct node *prev=NULL;
    if (root!=NULL)
    {
        if (!InBST(root->left))
        {
            return 0;
        }
        if (prev!=NULL && root->data <=prev->data)
        {
            return 0;
        }
        prev=root;
        return InBST(root->right);
    }
    else{
        return 1;
    }    
}

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

    InOrder(p);
    printf("\n");
    printf("%d", InBST(p));
}