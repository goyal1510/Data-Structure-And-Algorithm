#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n>>m;

    vector<int> arr(n);
    vector<int> brr(m);
    for(int i = 0 ; i < arr.size(); i++){
        cin>>arr[i];
        
    }
    for(int i = 0 ; i < brr.size(); i++){
        cin>>brr[i];
        
    }


    vector<int> res(n+m);
    for(int i=0;i<arr.size();i++){
        res[i]=arr[i];
    }
    int k = 0;
    for(int i=n;i<n+brr.size();i++){
        res[i]=brr[k++];
    }
    for(int i = 0 ; i < res.size(); i++){
        cout<<res[i]<<" ";
        
    }
    

}