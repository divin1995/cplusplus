#include <iostream>

using namespace std;

int main()
{
    try{
        int momAge = 55;
        int sonAge = 57;
        if(sonAge>momAge)
        {
            throw 99;
        }
    }catch(int x)
    {
        cout << "Son cannot be older than mom, Error Number: "<< x << endl;
    }
    return 0;
}
