#include <iostream>
#include <classa.h>

using namespace std;

int main()
{
    ClassA a;

    a.setIntValue(1);
    a.setDblValue(1.1);
    a.setStrValue("str");

    cout << a << endl;
    cout << "Hello World!" << endl;

    return 0;
}
