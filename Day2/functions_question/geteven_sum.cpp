#include<iostream>
using namespace std;
int geteven_sum(int num){
    int sum = 0 ;
    for(int i = 0 ; i <num ; i++){
        if(i%2 == 0 ){
            sum += i;
        }
    }
    return sum;

}
int main(){
    int n ;
    cin>>n;
    int addeven = geteven_sum(n);
    cout<<addeven;
}