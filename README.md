# c-plus-plus

C++11 syntax notes

## Installation

- Download and install Visual Studio Code (VS Code): https://code.visualstudio.com/download
- Install the following VS Code extensions:
  - C/C++
  - C++ Intellisense
  - Code Runner
- Code > Preferences > Settings > ••• > open settings.json: Setup Code Runner to compile as C+11:

```json
{
    "code-runner.executorMap": {
        "cpp": "cd $dir && g++ -std=c++11 $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt"
    }
}
```

## Contents

(Reference: http://www.cplusplus.com/doc/tutorial/)

- basics: boilerplate, variable types, for loops, and conditional statements
- arrays: numerical and character arrays
- pointers: address-of, dereferencing, connection with arrays
- structures: member and array object creation

## Tips

- Change all instances of highlighted: Shift + Command + L