#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter the marks of student :";
    cin>>marks;
    if(marks>=90) cout<<"Grade A";
    else if(marks>=80) cout<<"Grade B";
    else if(marks>=70) cout<<"Grade C";
    else cout<<"Fail";
    return 0;

}