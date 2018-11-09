# basics

## Boilerplate

```c++
// Include header(s)
#include <iostream>

// Declare namespace to avoid having to write out std prefix
using namespace std;

// Main function called when the program is run
int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
```

OUTPUT:

```bash
```

## Variable types

```c++
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
```

OUTPUT:

```bash
1.1
abcde
```

## For loop

```c++
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
```

OUTPUT:

```bash
[0][0.1][0.2][0.3][0.4][0.5][0.6][0.7][0.8][0.9]
[a][b][c][d][e]
```

## While loop

```c++
// While loop
int n = 10;
while (n > 0) {
    cout << n << ", ";
    --n;
}
cout << '\n';
```

OUTPUT:

```bash
10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 
```

## If statement

```c++
// If statment
if (b > 1) {
    cout << "big";
} else if (b > 0) {
    cout << "small";
} else {
    cout << "negative";
}
```

OUTPUT:

```bash
small
```