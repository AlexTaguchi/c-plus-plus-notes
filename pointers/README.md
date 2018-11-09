# pointers

## Accessing the value and address of a variable

```c++
// Define variable
int var = 1;

// Print value and address with "address-of" operator &
cout << "Value of var: " << var << '\n';
cout << "Address of var: " << &var << '\n';
```

OUTPUT:

```bash
Value of var: 1
Address of var: 0x7ffeeed2d16c
```

---

## Creating a pointer to the variable address
```c++
// Example of copying value to another variable
int var_v = var;

// Create pointer by copying memory address
int * var_p = &var;

// Print pointer and value it points to with "dereference" operator *
cout << "Pointer to var: " << var_p << '\n';
cout << "Dereferenced pointer to var: " << *var_p << '\n';
```

OUTPUT:

```bash
Pointer to var: 0x7ffeeed2d16c
Dereferenced pointer to var: 1
```

---

## Changing the value of the variable with the pointer
```c++
// Change value of var with pointer
*var_p = 2;

// Print new value of var
cout << "New value of var: " << var << '\n';
```

OUTPUT:

```bash
New value of var: 2
```

---

## Relationship between array types and pointers

```c++
// Arrays are like pointers to the first element, thus the following is valid
int arr [10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int * arr_p = arr;
cout << "Array: " << arr << '\n';
cout << "Pointer to array: " << arr_p << '\n';

// Array indexing is therefore an abstraction for dereferencing! (Mind blown?)
cout << "Indexed array: " << arr[5] << '\n';
cout << "Dereferenced array: " << *(arr+5) << '\n';
```

OUTPUT:

```bash
Array: 0x7ffeeed2d180
Pointer to array: 0x7ffeeed2d180
Indexed array: 5
Dereferenced array: 5
```

---

## Null pointers
```c++
// How to explicitly pointing a pointer to nowhere
int * null1 = 0, * null2 = nullptr;
cout << "Null pointer: " << (null1 == null2);
```

OUTPUT:

```bash
Null pointer: 1
```