#include <iostream>
using namespace std;
int main()
{
    int count = 1 ;
    int num2;
    cout<<"Enter the no. of rowsu want to print :";
    cin>>num2;

    int num = num2/2;
    for(int i = 0 ; i < num ;i++){
        
        for(int j = 0 ; j<i+1;j++){
            if(j==i){
                cout<<count;
                count++;
            }
            else {cout<<count<<"*";
                count++;
            }

        }
        cout<<endl;
    }
    // cout<<count;
    for(int i = 0 ; i < num ; i ++){
        int noofch = -num + 2*num - i  ;
        count = count-noofch;
        int value = count;
        for(int j = 0 ; j < num-i ;j++){
            if(j==num-i-1){
                cout<<value;
                value++;
            }
            else {
                cout<<value<<"*";
                value++;
            }
        }
        cout<<endl;
    }
}