#include<iostream>
using namespace std;
int main(){
    int num = 6 ; 
    for(int i = 0 ; i < num ; i ++){
        //spaces
        for(int j = 0 ; j < num - i ; j++){
            cout<<" ";
        }
        //stars
        for(int j = 0 ; j < 2*i +1 ; j++){
            if(j==0 || j==2*i ){
                cout<<"*";
            }
            else if( i == num - 1){
                if(j%2==0) cout<<"*";
                else cout<<" ";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}