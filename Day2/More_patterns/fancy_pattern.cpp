#include<iostream>
using namespace std;
int main(){
    int num = 9 ;
    for(int i = 0 ; i < num ; i ++){
        int startindex = 8-i;
            int num2 = i+1;
            int count = num2;
        for(int j = 0 ; j < 17 ; j++){
            
            if(j==startindex && count > 0){
                cout<<num2;
                startindex += 2;
                count--;
            }  
            else cout<<"*";
        }
        cout<<endl;
    }
}