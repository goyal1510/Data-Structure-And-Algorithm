#include<iostream>
using namespace std;
int main(){
    int num = 6 ;
    for(int i = 0 ; i < num ; i ++){
        int l=0;
        for(int j = 0 ; j < i+1;j++){
            int ans = l+1;
            char ch =  ans + 'A' -1;
            cout<<ch;
            l++;
        }
        l=l-1;
        for(int k = l;k>=1;k--){
            int ans = k;
            char ch =  ans + 'A' -1 ;
            cout<<ch;
            
        }
        cout<<endl;
    }
}