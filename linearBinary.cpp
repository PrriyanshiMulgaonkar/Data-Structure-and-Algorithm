#include <iostream>
using namespace std;
// int linear(int arr[], int size, int element){
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i]==element)
//         {
//             return i;
//         } 
//     }
//     return -1;
    
// }

int binary(int arr[], int size, int element){
    int mid,high,low;
    low=0;
    high=size-1;
    while (low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==element){
            return mid;
        }
        if(arr[mid]<element){
            low=mid+1;
        }
        else{
            low=mid-1;
        }
    }
    return -1;
    
}
int main()
{
    int arr[]={2,3,4,6,7,9};
    int element=4;
    int size=sizeof(arr)/sizeof(int);
    
    // int search=linear(arr,size,element);

    // cout<<"Element found at: "<<search;

    int search=binary(arr,size,element);

    cout<<"Element found at: "<<search;
}
