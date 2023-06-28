#include<iostream>
using namespace std;
char getgrade(int mark){
    int marks = mark/10;
    switch (marks)
    {
    case 10 :
        /* code */
        return 'O';
        break;
    case 9 :
        /* code */
        return 'O';
        break;    
    case 8 :
        return 'E';
        break;
    case 7 :
        return 'A';
        break;
    default:
        return 'F';
        break;
    }
}

int main(){
    int marks ;
    cin>>marks;
    char ch = getgrade(marks);
    cout<<ch;
}