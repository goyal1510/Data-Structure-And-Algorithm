#include<iostream>
using namespace std;
int main(){
    int num = 5 ;
    for(int i = 0 ; i < num;i++){
        int start = 1;
        for(int j = 0 ; j < i+1 ; j++){
            if(j==0){
                cout<<start<<" ";
                start++;

            }
            else if(j==i){
                cout<<start<<" ";
                start++;
            }
            else if(i==num-1){
                cout<<start<<" ";
                start++;
            }
            else {cout<<"  ";
            start++;}
        }
        cout<<endl;
    }
}