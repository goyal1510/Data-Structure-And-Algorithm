// * * * * *
// *       *
// * * * * *

#include<iostream>
using namespace std;
int main(){
    int rows;
    int cols;
    cout<<"Enter the number of rows and columns :";
    cin>>rows>>cols;
    for(int i = 0 ; i<rows;i++){
        if(i==0 || (i+1)==rows){
            for (int j = 0; j < cols; j++)
            {
                cout<<"* ";
            }
        }
        else {
            for(int j = 0 ;j<cols;j++){
                if(j==0 || (j+1)==cols){
                    cout<<"* ";
                }
                else cout<<"  ";
            }
        }
        cout<<endl;
    }
}