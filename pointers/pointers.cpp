#include <iostream>
#include <array>
using namespace std;

int main(int argc, char const *argv[])
{
    // Define variable
    int a = 1;

    // Print value and address with "address-of" operator &
    cout << "Value of a: " << a << '\n';
    cout << "Address of a: " << &a << '\n';

    // Copy value to another variable
    int b = a;

    // Copy memory address to pointer
    int * c = &a;

    // Print pointer and value it points to with "dereference" operator *
    cout << "Pointer c: " << c << '\n';
    cout << "Dereferenced pointer c: " << *c << '\n';

    // Change value of a with pointer
    *c = 2;
    
    // Print new value of a
    cout << "New value of a: " << a << '\n';

    // Arrays are like pointers to the first element, thus the following is valid
    int arr [10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int * arr_p = arr;
    cout << "Array: " << arr << '\n';
    cout << "Pointer to array: " << arr_p << '\n';

    // Array indexing is therefore an abstraction for dereferencing!
    cout << "Indexed array: " << arr[5] << '\n';
    cout << "Dereferenced array: " << *(arr+5) << '\n';

    // Explicitly pointing a pointer to nowhere
    int * null1 = 0, * null2 = nullptr;
    cout << "Null pointer: " << (null1 == null2);

    return 0;
}
