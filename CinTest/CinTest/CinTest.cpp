#include <iostream>

using namespace std;

int main()
{
    int var{};

    cout << var << endl;

    while (var != -1)
    {
        cout << "Please input an integer (-1 to quit): ";

        cin >> var;

        cout << endl << "You inputed: " << var << endl;
    }

    return 0;
}