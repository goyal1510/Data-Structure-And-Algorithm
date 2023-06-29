#include<iostream>
#include<vector>

using namespace std;
void func(int arr[],int size){
    int numzero = 0 ; 
    int numone = 0;
    for(int i = 0 ; i < size;i++){
        if(arr[i]==0) numzero++;
        else numone++;
    }
    cout<<"number of zeros are :"<<numzero<<endl;
    cout<<"number of ones are :"<<numone<<endl;
    vector<int> res;
    for(int i = 0 ; i < numzero ; i++){
        res.push_back(0);
    }
    for(int i = 0 ; i < numone ; i++){
        res.push_back(1);
    }
    for(int i =0 ; i < res.size();i++){
        cout<<res[i]<<" ";
    }

    
    

}
int main(){
    int arr[]={1,1,1,1,1,0,0,0,0,1,1,1,0,0};
    int size = sizeof(arr)/sizeof(int);
    func(arr,size);
}