#include<iostream>
using namespace std;
int main(){
    int num = 5;
    for(int i = 0 ; i < num ; i ++){
        int start = i+1;
        for(int j = 0 ; j < num - i ; j++){
            if(i==0 || i == num-1){
                cout<<start<<" ";
                start++;
            }
            else if(j==0){
                cout<<start<<" ";
                

            }
            else if(j==num-i-1){
                cout<<num<<" ";
            }
            else cout<<"  ";
        }

        cout<<endl;
    }
}