#include<iostream>
using namespace std;
int main (){
    int num = 5;
    for(int i = 0 ; i < num ; i ++){
        //spaces 
        for(int j = 0 ; j< num - i ; j ++){
            cout<<"  ";
        }
        // stars
        int c = i+1;
        int initial = c;
        for(int j = 0 ; j < i+1 ; j ++){
            cout<<c<<" ";
            c++;
        }
        c=c-2;
        for(int k = c ; k>=initial;k--){
            cout<<k<<" ";
        }
        
        cout<<endl;
    }
}