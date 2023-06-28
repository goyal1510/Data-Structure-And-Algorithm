#include <iostream>
using namespace std;
int main()
{
    int n = 6;
    for(int i = 0 ; i < n ; i ++){
        //spaces
        for(int j = 0 ; j < n - 1 - i ; j ++){
            cout<<"  ";
        }
        //start 
        for(int j = 0 ; j < 2*i+1 ; j ++){
            if(j==0 || j==2*i){
                cout<<"* ";
            }
            else cout<<"  ";
        }
        cout<<endl;
    }
    for(int i = 0 ; i < n ; i ++){
        //spaces 
        for(int j = 0 ; j < i ; j ++){
            cout<<"  ";
        }
        //starts
        for(int j = 0 ; j < 2*n - 2*i - 1 ; j ++){
            if(j==0 || j == 2*n - 2*i -2){cout<<"* ";}
            else cout<<"  ";
        }
        cout<<endl;
    }
}