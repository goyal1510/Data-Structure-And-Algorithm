// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4
// 1 2 3 4 5
#include <iostream>
using namespace std;
int main()
{

    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {   int count = 1;
        for (int j = 0; j < i + 1; j++)
        {
            cout<<count<<" ";
            count++;

        }
        cout << endl;
    }
}