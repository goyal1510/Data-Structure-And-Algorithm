#include<iostream>
#include<limits.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int arr[3][3];
    for(int i = 0 ; i<3;i++){
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i = 0 ; i<3;i++){
        for (int j = 0; j < 3; j++)
        {
            if(arr[i][j]>max) max = arr[i][j];
            if(arr[i][j]<min) min=arr[i][j];
        }
        
    }
    cout<<max<<" "<<min;
    return 0;
}
