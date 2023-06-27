/*
* * * * *
* * * * *
* * * * *
*/
#include<iostream>
using namespace std;
int main(){
    int row;
    int col;
    cout<<"Enter the number of rows and columns :";
    cin>>row>>col;
    for(int i =0 ;i < row;i++){
        for(int j = 0 ;j < 5;j++){
            cout<<"* ";
        }
        cout<<endl;
    }


}