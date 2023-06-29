#include<iostream>
using namespace std;
void get_odd_even (int num){
    if(num%2==0) cout<<"Even";
    else cout<<"Odd";
}
int main(){
    int num ;
    cin>>num;
    get_odd_even(num);
}