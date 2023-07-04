#include<iostream>
#include<vector>
using namespace std;

void swap(){
    
}
int main()
{
    vector<int> arr{1,2,3,-4,-5,3,-2};
    int i = 0 ; 
    int h = arr.size()-1;
    while(i<h){
        if(arr[i]<0){
            i++;
        }
        else if(arr[h]>0){
            h--;
        }
        else swap(arr[i],arr[h]);
    }
    for(int i = 0 ; i < arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
