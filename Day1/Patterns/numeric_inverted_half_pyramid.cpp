#include<iostream>
using namespace std;
int main(){

    int row;
    cin>>row;
    for(int i = 0 ; i < row ;i++){
        int count = 1;
        for(int j = 0 ; j<row-i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}