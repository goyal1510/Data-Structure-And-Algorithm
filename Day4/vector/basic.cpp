#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    
    vector<vector<int>> arr;
    vector<int> a{1,2,3,4,5};
    vector<int> b{1,2,3,4,5,6};
    vector<int> c{1,2,3,4};
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    for(int i = 0 ;i<arr.size();i++){
        for(int j = 0 ; j< arr[i].size();j++){
                cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }

    int row;
    int col;
    cin>>row>>col;
    vector<vector<int>> array(row,vector<int>(col,1));
    // vector<vector<int>> array(row,vector<int>(col,0));
    for(int i = 0 ;i<array.size();i++){
        for(int j = 0 ; j< array[i].size();j++){
                cout<<array[i][j]<<" ";

        }
        cout<<endl;
    }


    return 0;
}
