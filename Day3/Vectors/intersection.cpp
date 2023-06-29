#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> arr1{1,2,3,4,5};
    vector<int> arr2{2,3,4,6,7};
    vector<int> res;
    for(int i = 0 ; i<arr1.size();i++){
        int key=arr1[i];
        for(int j =0; j < arr2.size();j++){
            if(arr2[j]==key) {
                arr2[j]=-1;
                res.push_back(key);}
        }
    }
    for(int i = 0 ; i < res.size();i++) {
        cout<<res[i]<<" ";
    }
}