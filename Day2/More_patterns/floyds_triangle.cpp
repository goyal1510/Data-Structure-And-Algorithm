#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int count = 1 ;
    for(int i = 0 ;i < num ; i++){
        for(int j = 0 ; j < i+1;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;

    }
}