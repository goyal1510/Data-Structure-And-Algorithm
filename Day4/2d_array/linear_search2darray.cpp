#include<iostream>
using namespace std;

bool func(int arr[][3],int row,int col,int key){
    for(int i = 0 ; i<3;i++){
        
        for (int j = 0; j < 3; j++)
        {
            if(arr[i][j] == key) return true;
           
        }
        
    
        
        
    }
    return false;
}
int main(){
    int arr[3][3];
    for(int i = 0 ; i<3;i++){
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    int key = 6;
    if(func(arr,3,3,key)) cout<<"found";
    else cout<<"not found";
    
}