// Instruction 1: First include the header that you need to do for input output (I/O) operations.
#include <iostream>
// Instruction 2: Now provide the using namespace declaration so that you can use the objects of std namespace
using namespace std;

int main() {

    // Instruction 3: declare a variable of type int with name as first
    int first;


    // Instruction 4: declare another variable of type int name as second
    int second;


    cout << "Input first number: ";

    // Instruction 5: write a cin statement to input the integer given by the user into first
    cin >> first;


    // Instruction 7: Prompt the user to input second number using cout.
    cout << endl << "Input second number: ";


    // Instruction 8: write cin statement to input the second number in the variable second.
    cin >> second;


    // Instruction 9: Print both the numbers using a single cout statement, each number should be on different lines, also // there  should be a new line at the end;
    cout << "The first number is: " << first << endl;
    cout << "The second number is: " << second << endl;

    return 0;

}