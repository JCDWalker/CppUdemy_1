#include <iostream>

using namespace std;

int main()
{
    int a{ 100 };
    int b{ 20 };
    int r;

    bool p = a < b;

    cout << "p = " << p << endl;
    cout << "Type id: " << typeid(10 > 20).name() << endl;

    return 0;
}