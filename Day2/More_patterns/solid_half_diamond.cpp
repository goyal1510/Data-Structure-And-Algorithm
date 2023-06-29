#include<iostream>
using namespace std;
int main(){
    int num = 5 ; 
    for(int i = 0 ; i < 2*num-1 ; i++){
        if(0<=i && i<=(num-1)){
        for(int j = 0 ; j < i + 1;j++){
            cout<<"* ";
        }
        }
        else {
            for(int j = 0 ; j < 2*num - 1 - i ; j++){
                cout<<"* ";
            }
        }
        cout<<endl;

    }
}