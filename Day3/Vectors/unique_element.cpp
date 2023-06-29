#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{1,1,2,2,4,4,3,5,6,7,6,7,5};
    int ans=0; 
    for(int i = 0 ; i < arr.size();i++){
            ans = ans ^ arr[i];
    }
    cout<<ans;

}