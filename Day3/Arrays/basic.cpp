#include<iostream>
#include <cstring>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    for(int i = 0 ; i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int brr[10];
    for(int i=0;i<10;i++){
        cin>>brr[i];
    }
    for(int i=0;i<10;i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;

    int a[5];
     for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    memset(a,0,sizeof(a));
     for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    memset(a,-1,sizeof(a));
     for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

}