#include<iostream>
#include <limits.h>
using namespace std;
int max(int arr[],int size){
    int maxie = INT_MIN ;
    for(int i = 0 ;i < size ; i++){
        if(arr[i]>maxie) maxie= arr[i];
    }
    return maxie;
}
int min(int arr[],int size){
    int minie = INT_MAX ;
    for(int i = 0 ;i < size ; i++){
        if(arr[i]<minie) minie= arr[i];
    }
    return minie;

}
int main(){
    int arr[]={3,5,7,9,2,4,6};
    int size = sizeof(arr)/sizeof(int);
    int maxvalue = max(arr,size);
    int minvalue = min(arr,size);
    cout<<maxvalue<<" "<<minvalue;
    
}