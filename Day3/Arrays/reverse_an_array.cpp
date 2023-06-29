#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(int);
    int start = 0;
    int end = size-1;
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    while(start<end){
        
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

        start++;
        end--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}