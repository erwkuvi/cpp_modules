# cpp_modules
Namespaces, classes, member functions, stdio streams, initialization lists, static, const, and some other basic stuff.

The goal of these modules is an introduction to Object-Oriented Programming.
This will be the starting point of learning C++. Many languages are recommended
to learn OOP, but since C++ is derived from C, it seems like a more proper choice.
Because this is a complex language, and in order to keep things simple, code will
comply with the C++98 standard.
Modern C++ is way different in a lot of aspects.
The exercises will progressively increase in complexity.

Conclusions:
Initialization Lists.
const function and its usage.

General rules:

- Compiling with c++ and the flag -Wall -Werror -Wextra
- Code should still compile with the flag -std=c++98

Formatting and naming conventions:

- Class names in UpperCamelCase format. ex: ClassName.hpp/ClassName.h, ClassName.cpp Then, if a header file contains the definition of a class "BrickWall" standing for a brick wall, its name will be BrickWall.hpp
- Output messages must be ended by a new-line character and displayed to the standard output.
- Allowed use only of the standard library, any other external library is forbidden.
- Following functions are forbidden as well: *printf(), *alloc() and free().
- Note that unless explicitly stated otherwise, the using namespace <ns_name> and
friend keywords are forbidden.
- You are allowed to use the STL in the Module 08 and 09 only.
- No Containers (vector/list/map/and so forth) and no Algorithms (anything that
requires to include the <algorithm> header) until then.

Design Requirements:
- When allocating mem (with the "new" keyword), avoid memory leaks.
- Module  02 to 09, classes should be designed in Orthodox Canonical Form
- No function implementations in header file
- Headers should be able to be used independently ---- NOTE: you must avoid the
problem of double inclusion by adding include guards
