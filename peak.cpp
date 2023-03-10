#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct stack
{
    int size;
    int top;
    int * arr;
};
int isEmpty(struct stack  *ptr){
    if (ptr->top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }   
}

int isFull(struct stack  *ptr){
    if (ptr->top==ptr->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }   
}
void push(struct stack * ptr, int value){
    if (isFull(ptr))
    {
        cout<<"Stack overflow"<<endl;
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=value;
        
    }
    
}

int pop(struct stack * ptr){
    if (isEmpty(ptr))
    {
        cout<<"Stack Underflow"<<endl;
    }
    else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
        
    }
    
}

int peak(struct stack *sp,int i){
    // position to array index=sp->top-i+1
    if (sp->top-i+1<0)
    {
        cout<<"Not valid";
        return -1;
    }
    else{
        return sp->arr[sp->top-i+1];
    }
    
}
int main(){
    struct stack * sp=(struct stack *) malloc (sizeof(struct stack));
    sp->size=10;
    sp->top=-1;
    sp->arr=new int [sp->size * sizeof(int)];
    push(sp,895);
    push(sp,458);
    push(sp,90);
    push(sp,908);
    push(sp,45);
    push(sp,45);
    push(sp,45);
    push(sp,45);
    push(sp,95);
    push(sp,5);
    for (int j = 1; j <= sp->top+1; j++)
    {
        cout<<"Peak is at "<<j<<": " <<peak(sp,j)<<endl;
    }
    


}