#include<iostream>
using namespace std;
float area_circle(int n){
    float area = 3.14 * n * n;
    return area;
}
int main(){
    float num ; 
    cin>>num;
    float result = area_circle(num);
    cout<<result;
}