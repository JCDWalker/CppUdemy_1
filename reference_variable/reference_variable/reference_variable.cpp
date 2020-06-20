#include <iostream>

using namespace std;

int main()
{
    int x{ 10 };
    int &v = x;

    cout << "v = " << v << endl;

    v = v++;
    
    cout << "v = " << v << endl;
    cout << "x = " << x << endl;

    return 0;
}