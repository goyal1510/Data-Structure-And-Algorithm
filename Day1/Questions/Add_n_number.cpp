#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the numbers you want to add :";
    cin>>n;
    int count = 1;
    int num1;
    int sum=0;
    while(count<=n){
        cout<<"Enter the number you want to add :";
        cin>>num1;
        sum = sum + num1;
        count++;
    }
    cout<<"The sum of the numbers are :"<<sum;

}