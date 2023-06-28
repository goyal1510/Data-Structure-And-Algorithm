#include<iostream>
using namespace std;
int main(){
    int num = 4;
    for(int i = 0 ; i < num ; i ++){
        for(int j= 0 ; j < i +1 ; j ++){
            if(j==i)
            cout<<i+1;
            else 
            cout<<i+1<<"*";
        }
        cout<<endl;
    }
    for(int i = 0 ; i < num ; i ++){
        for(int j = 0 ; j < num - i ; j ++){
            if(j==num-i-1) cout<<num-i;
            else cout<<num-i<<"*";
        }
        cout<<endl;
    }
}