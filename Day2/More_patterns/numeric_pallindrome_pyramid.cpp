#include<iostream>
using namespace std;
int main(){
    int num = 5 ; 
    for(int i = 0 ; i < num ;  i ++){
        //spaces 
        for(int j = 0 ; j < num - i ; j++){
            cout<<"  ";

        }
        //numbers
        int start = 1;
        int ini = start;
        for(int j = 0 ; j<i+1;j++){
            cout<<start<<" ";
            start++;
        }
        start=start-2;
        for(int k = start;k>=ini;k--){
            cout<<k<<" ";
        }
        cout<<endl;
    }
}