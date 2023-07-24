#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> arr{1,3,4,5,3};
    // for(int i =  0 ; i<arr.size();i++)
    // {
    //     int index = abs(arr[i]);
    //     if(arr[index-1]>0){
    //         arr[index-1] *= -1;
    //     }
    // }
    // for(int i = 0 ; i < arr.size();i++)
    // {
    //     if(arr[i]>0) cout<<i+1<<" ";
    // }
    sort(arr.begin(),arr.end());
    for(int i = 0 ; i < arr.size();i++){
        if(arr[i] != i+1) cout<<i+1<<" ";
    }
    return 0;
}
