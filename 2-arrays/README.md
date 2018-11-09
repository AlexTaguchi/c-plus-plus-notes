# arrays

## Numeric arrays

```c++
#include <array>

// Standard C array
int arr1 [4] = {1, 2, 4, 8};

// C++ array (has convinient methods like .size())
array<int, 4> arr2 {1, 2, 4, 8};

// Arrays can be iterated through by index or with range-based construction
for (int i=0; i<4; i++) {
    cout << arr1[i];
}
cout << '\n';
for (int i : arr1) {
    cout << i;
}
cout << '\n';
```

OUTPUT:

```bash
1248
1248
```

## String arrays

```c++
// C-string
char name1[] = "asdf";

// Library string (modern implementation)
string name2 = "asdf";

// Strings (C or library) can be iterated through by index or with range-based construction
for (int i; i<4; i++) {
    cout << name1[i];
}
cout << '\n';
for (char i : name2) {
    cout << i;
}
```

OUTPUT:

```bash
asdf
asdf
```