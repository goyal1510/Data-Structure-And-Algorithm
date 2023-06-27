// * * * * * *
// *       * 
// *     *
// *   *
// * *
// *

#include<iostream>
using namespace std;
int main(){
    int row = 6 ;
    for(int i = 0 ;i<row;i++){
        if(i==0 || ((i+1) == row )){
                for(int j = 0 ;j <row-i;j++){
                    cout<<"* ";
                }
        }
        else{
            for(int j = 0 ;j <row-i;j++){
                if(j==0 || (j+1)==row-i){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }

        
        cout<<endl;
    }
}