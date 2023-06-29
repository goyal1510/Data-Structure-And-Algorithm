#include<iostream>
using namespace std;
int main(){
    // int arr[]={1,2,3,4,5,6,7};
    int arr[]={1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(int);
    int i = 0;
    int j = size-1;
    while(i<=j){
        if(i == j ) cout<<arr[i];
        else {
        cout<<arr[i]<<" ";
        cout<<arr[j]<<" ";
        
        }
        i++;
        j--;
    }
}