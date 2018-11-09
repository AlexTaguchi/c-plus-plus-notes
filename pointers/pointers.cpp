#include <iostream>
#include <array>
using namespace std;

int main(int argc, char const *argv[])
{
    // Define variable
    int var = 1;

    // Print value and address with "address-of" operator &
    cout << "Value of var: " << var << '\n';
    cout << "Address of var: " << &var << '\n';

    // Copy value to another variable
    int var_v = var;

    // Copy memory address to pointer
    int * var_p = &var;

    // Print pointer and value it points to with "dereference" operator *
    cout << "Pointer to var: " << var_p << '\n';
    cout << "Dereferenced pointer to var: " << *var_p << '\n';

    // Change value of a with pointer
    *var_p = 2;
    
    // Print new value of a
    cout << "New value of var: " << var << '\n';

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
