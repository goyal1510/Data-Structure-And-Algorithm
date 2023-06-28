#include<iostream>
using namespace std;
int main(){
    int num = 6 ;
    for(int i = 0 ; i < num ; i ++){
        //starts
        for(int j = 0 ; j < num - i ; j++){
            cout<<"* ";
        }
        // spaces
        for(int j = 0 ; j < 2*i+1 ; j ++){  // 1 3 5 7 2*i + 1
            cout<<"  ";
        }
        //starts
        for(int j = 0 ; j < num - i ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i = 0 ; i < num ; i ++){
        //starts
        for(int j = 0 ; j < i + 1; j++){
            cout<<"* ";
        }
        // spaces
        for(int j = 0 ; j < 2*num - 2*i-1 ; j ++){  // 7 5 3 1 2*num - 2*i - 1
            cout<<"  ";
        }
        //starts
        for(int j = 0 ; j < i + 1 ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
}