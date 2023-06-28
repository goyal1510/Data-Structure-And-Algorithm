#include<iostream>
using namespace std;
int getsum(int m , int n ){
    return m+n;
}
int main(){
    int a,b;
    cin>>a>>b;
    int ans = getsum(a,b);
    cout<<ans;
}