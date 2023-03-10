#include<stdio.h>
#include<stdlib.h>
void printArr(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d " ,A[i]);
    }
    printf("\n");
    
}
void insertion(int * A, int n){
    int key,j;
    for (int i = 1; i <= n-1; i++)
    {
        key=A[i];
        j=i-1;
        while (j>=0 && A[j]>key)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
        
    }
    
}

int main(){
    int A[]={8,1,2,3,4,6};
    int n=6;
    printArr(A, n);
    insertion(A,n);
    printArr(A, n);
}