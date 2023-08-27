#include<iostream>
using namespace std;

// int reverseArray(int arr, int size)
// {
//     for (int i = size-1; i >= 0 ; i--)
//     {
//         for (int i = 0; i < size; i++)
//         {
            
//         }
        
//     }
    
// }

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size = 9;
    int temp=0,i=0;

    while (i<size/2)
    {
       arr[i] = arr[i]^arr[size-1-i];
       arr[size-i-1] = arr[i]^arr[size-1-i];
       arr[i] = arr[i]^arr[size-1-i];

       i++;
    }

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i];
    }
    
    return 0;
    
}