#include <iostream>
using namespace std;

void display(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void indDeletion(int arr[],int index,int size){
    for (int i = index; i <size-1; i--)
    {
        arr[i]=arr[i+1];
    } 
}
int main()
{
    int n;
    int arr[100]={1,2,3,4};
    int size=4, index=1;

    display(arr,size);
    indDeletion(arr,index,size);
    size-=1;
    display(arr,size);
}



