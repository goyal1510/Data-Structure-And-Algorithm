#include<iostream>
using namespace std;
void func1(int arr[][3],int row , int col){
     for(int i = 0 ; i<3;i++){
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
}
void func(int arr[][3],int row , int col){
    int arr1[3][3];
    for(int i = 0 ; i<3;i++){
        int mark = 0 ; 
        for (int j = 0; j < 3; j++)
        {   
            // int temp = arr[i][j];
            arr1[i][j] = arr[j][i];
            // arr[j][i] = temp;
        }
        
    }
    func1(arr1,3,3);
}   
int main(int argc, char const *argv[])
{
    
    int arr[3][3];
    for(int i = 0 ; i<3;i++){
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    func1(arr,3,3);
    func(arr,3,3);
    
    return 0;
}
