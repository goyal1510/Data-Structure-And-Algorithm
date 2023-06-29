#include<iostream>
using namespace std;
bool func(int arr[],int size,int key){
    for(int i=0 ; i <size ; i++){
        if(arr[i]==key) return true;
    }
    return false;
}
int main(){
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    if(func(arr , size , key)) cout<<"Present";
    else cout<<"Not present";
    
}