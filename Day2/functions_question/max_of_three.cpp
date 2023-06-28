#include<iostream>
using namespace std;

void findmax(int a , int b , int c){
    if(a>b){
        if(a>c){
            cout<<"greatest is :"<<a;
        }
        else cout<<"greatest is :"<<c;
    }
    else if(a>c){
        if(a>b) cout<<"greatest is :"<<a;
        else cout<<"greatest is :"<<b;
    }
    else {
        if(b>c) cout<<"greatest is :"<<b;
        else cout<<"greatest is :"<<c;
    }
    
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    findmax(a,b,c);
}