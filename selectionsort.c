#include<stdio.h>
#include<stdlib.h>
void printArr(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d " ,A[i]);
    }
    printf("\n");
    
}
void selection(int * A, int n){
    int temp,min;
    for (int i = 0; i < n-1; i++)
    {
        min=i;
        for (int j = i+1; j < n; j++)
        {
            if(A[j] < A[min]){
                min = j;
            }
        }
        temp=A[i];
        A[i]=A[min];
        A[min]=temp;    
    } 
}
int main(){
    int A[]={8,1,2,3,4,6};
    int n=6;
    printArr(A, n);
    selection(A,n);
    printArr(A, n);
}