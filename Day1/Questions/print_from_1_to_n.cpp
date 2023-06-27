#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number till you want to print :";
    cin>>num;
    int count =0;
    while(count<num){
        cout<<count+1<<endl;
        count += 1;
    }
    return 0;
}