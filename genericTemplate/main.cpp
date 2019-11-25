#include <iostream>

using namespace std;

template<class T>
class Spunky{
    public:
        Spunky(T a)
        {
            cout << a << " This is not a char" << endl;
        }
};

//This is generics with specialization as it handles char differently;
template<>
class Spunky<char>{
    public:
        Spunky(char a)
        {
            cout << a << " This is a char" << endl;
        }
};

int main()
{
    Spunky<int> obj(4);
    Spunky<double> obj1(7.24);
    Spunky<char> obj2('q');
    return 0;
}
