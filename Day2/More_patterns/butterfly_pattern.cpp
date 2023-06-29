#include<iostream>
using namespace std;
int main(){
    int num = 5 ; 
    for(int i = 0 ; i < num ;i++){
        //starts
        for(int j  = 0 ; j < i+1;j++){
            cout<<"*";
        }
        for(int j = 0 ; j < num - i-1 ; j ++){

            cout<<" ";
        }
        for(int j = 0 ; j < num - i-1 ; j ++){

            cout<<" ";
        }
        for(int j  = 0 ; j < i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 0 ; i < num;i++){
        //stars
        for(int j = 0 ; j< num-i;j++){
            cout<<"*";
        }
        for(int j  = 0 ; j < i;j++){
            cout<<" ";
        }
        for(int j  = 0 ; j < i;j++){
            cout<<" ";
        }
        for(int j = 0 ; j< num-i;j++){
            cout<<"*";
        }

        cout<<endl;
    }
}