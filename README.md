# c-plus-plus-notes

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

- 1-basics: boilerplate, variable types, for loops, and conditional statements
- 2-arrays: numerical and character arrays
- 3-pointers: address-of, dereferencing, connection with arrays
- 4-structures: member and array object creation

## Tips

- Change all instances of highlighted: Shift + Command + L
