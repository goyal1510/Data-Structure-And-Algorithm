#include<iostream>
using namespace std;
int main(){
    int a = 8 ;
    int b = 6 ;
    cout<<(a>=8 && b<=6)<<endl;
    cout<<(a>8 && b<6)<<endl;
    cout<<(a<=8 && b>=6)<<endl;
    cout<<(a<8 && b>6)<<endl;

    cout<<(a>=8 || b<=6)<<endl;
    cout<<(a>8 || b<6)<<endl;
    cout<<(a<=8 || b>=6)<<endl;
    cout<<(a<8 || b>6)<<endl;

    cout<<!(a>=8 && b<=6)<<endl;
    cout<<!(a>8 && b<6)<<endl;
    cout<<!(a<=8 && b>=6)<<endl;
    cout<<!(a<8 && b>6)<<endl;
    
    cout<<!(a>=8 || b<=6)<<endl;
    cout<<!(a>8 || b<6)<<endl;
    cout<<!(a<=8 || b>=6)<<endl;
    cout<<!(a<8 || b>6)<<endl;
}