#include <iostream>
using namespace std;

int main()
{
    float num_array[3][5] = {};
    float num = 0;

    for (int i = 0; i < 3; i++) 
    {
        for (int k = 0; k < 5; k++) 
        {
            cin >> num_array[i][k];
            num += num_array[i][k];
        }
    }
    cout << num / 15 << endl;
}