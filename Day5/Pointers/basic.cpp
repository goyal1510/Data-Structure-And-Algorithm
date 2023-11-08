#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    int a = 6 ;
    
    cout<<"Value of a : "<<a<<endl;
    cout<<"Address of a is : "<<&a<<endl;

    int *ptr = &a ;
    cout<<"Value at ptr is :"<<ptr<<endl;
    cout<<"Address of ptr is :"<<&ptr<<endl;
    cout<<"Value at ptr location is :"<<*ptr<<endl;

    return 0;
}
