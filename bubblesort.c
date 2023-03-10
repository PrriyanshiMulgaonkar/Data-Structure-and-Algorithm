#include<stdio.h>
#include<stdlib.h>
void printArr(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d " ,A[i]);
    }
    printf("\n");
    
}

// void bubble(int *A,int n){
//     int temp;
//     for (int i = 0; i < n-1; i++) //no of passes
//     {
//         for (int j = 0; i < n-1-i; i++) //no of comparison
//         {
//             if (A[j]>A[j+1])
//             {
//                 temp =A[j];
//                 A[j]=A[j+1];
//                 A[j+1]=temp;
//             }
            
//         }
        
//     }
    
// }

void bubbleSort(int *A, int n){
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n-1; i++) // For number of pass
    {
        printf("Working on pass number %d\n", i+1); 
        for (int j = 0; j <n-1-i ; j++) // For comparison in each pass
        {
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp; 
            }
        }  
    } 
}
void bubbleSortAdaptive(int *A, int n){
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n-1; i++) // For number of pass
    {
        printf("Working on pass number %d\n", i+1);
        isSorted = 1;
        for (int j = 0; j <n-1-i ; j++) // For comparison in each pass
        {
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                isSorted = 0;
            }
        } 
        if(isSorted){
            return;
        }
    } 
}

int main(){
    int A[]={8,1,2,3,4,6};
    int n=6;
    printArr(A, n);
    bubbleSort(A,n);
    printArr(A,n);
    bubbleSortAdaptive(A,n);
    printArr(A,n);
  
}