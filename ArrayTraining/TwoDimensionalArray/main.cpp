#include <iostream>

using namespace std;

int main()
{
    int twoDimArray[2][3] = {{1,2,3},{12,3,4}};

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << twoDimArray[i][j] << ",";
        }
        cout << endl;
    }
}
