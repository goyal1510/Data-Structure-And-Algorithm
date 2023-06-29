#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    arr.push_back(5);
    arr.push_back(6);
    for(int i = 0 ; i < arr.size(); i ++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    arr.pop_back();
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
     for(int i = 0 ; i < arr.size(); i ++){
        cout<<arr[i]<<" ";
    }
    int i ;
    cin>>i;
    vector<int> brr(i);
cout<<endl;
    vector<int> crr(i,-1);
    for(int i = 0 ; i < crr.size(); i ++){
        cout<<crr[i]<<" ";
    }
    vector<int> drr{1,2,3,4,5};
    cout<<endl;
    for(int i = 0 ; i < drr.size(); i ++){
        cout<<drr[i]<<" ";
    }
    return 0;
}