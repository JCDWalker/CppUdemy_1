#include <iostream>

using namespace std;

int main()
{
    int x{ 10 };
    int p;

    cout << "x = " << x << endl;
    
    // x is incremented and than assigned to p.
    // p = ++x;

    // x is assigned to p and than incremented.
    p = x++;
    
    cout << "x = " << x << " and p = " << p << endl;

    return 0;
}