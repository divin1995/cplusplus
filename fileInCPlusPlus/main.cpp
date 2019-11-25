#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    ofstream file;
    file.open("test.txt");

    file << "This is a test to output to a file using c++\n";

    file.close();

    return 0;
}
