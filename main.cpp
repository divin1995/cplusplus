#include <iostream>
#include "shape.h"
#include "rectangle.h"

using namespace std;

int main()
{
    Rectangle rectangle;
    rectangle.setLength(1);
    rectangle.setWidth(55);
    cout << rectangle.getArea() << endl;
    return 0;
}
