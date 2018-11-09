// Include header(s)
#include <iostream>

// Declare namespace to avoid having to write out std prefix
using namespace std;

// Main function called when the program is run
int main(int argc, char const *argv[])
{
    // Assign integer variable
    int a = 1;

    // Assign floating point constant (can't be modified)
    const float b = 0.1;

    // Assign character variable (note single quotes)
    char c = 'a';

    // Assign string variable (note double quotes)
    string d = "bcde";

    // Add numbers (casting int to float) and concatenate characters
    cout << (float) a + b << endl;
    cout << c + d << endl;

    // For loop by index
    for (int i=0; i<10; i++) {
        cout << '[' << b * i << ']';
    }
    cout << '\n';

    // Range-based for loop
    for (char letter : c + d) {
        cout << '[' << letter << ']';
    }
    cout << '\n';

    // While loop
    int n = 10;
    while (n > 0) {
        cout << n << ", ";
        --n;
    }
    cout << '\n';

    // If statment
    if (b > 1) {
        cout << "big";
    } else if (b > 0) {
        cout << "small";
    } else {
        cout << "negative";
    }

    return 0;
}
