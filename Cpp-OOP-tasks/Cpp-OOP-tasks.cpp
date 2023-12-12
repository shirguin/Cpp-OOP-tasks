#include <iostream>
//#include "Point.h"
#include "Counter.h"

using namespace std;

int main()
{
    Counter c;
    c.increaseByOneStep();
    cout << c.getCurrentValue() << endl;

    return 0;
}
