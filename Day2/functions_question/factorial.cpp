#include<iostream>
using namespace std;
int getfactorial(int num){
    int mul=1;
    for(int i = 1 ; i <= num ;i++){
        mul = mul*i;
    }
    return mul;
}
int main (){
    int num ;
    cin>>num;
    int fact = getfactorial(num);
    cout<<fact;
}