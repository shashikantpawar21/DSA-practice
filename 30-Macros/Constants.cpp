// In C++, a constant variable is declared using the const keyword. Once a variable is declared as const, its value cannot be changed throughout the program. Constants provide a way to create named values that should not be modified, enhancing code readability and safety.

// Here's the basic syntax for declaring a constant variable:

const int MY_CONSTANT = 10;

// In this example, MY_CONSTANT is declared as a constant integer with a value of 10. The const keyword ensures that attempts to modify this variable result in a compilation error.

// Key points about constant variables in C++:

// Declaration and Initialization:

// Constants must be initialized when declared; they cannot be left uninitialized.

const double PI = 3.14159;

// Data Types:

// Constants can be of any data type, including fundamental types (int, float, double, etc.) and user-defined types (structures, classes, etc.).

const char MY_CHAR = 'A';

// Scope:

// The scope of a constant variable is limited to the block in which it is defined. If declared at the global scope, it can be accessible throughout the entire program.

// Modifying Constants:

// An attempt to modify the value of a constant variable results in a compilation error.

const int MY_CONSTANT = 5;
// Attempting to modify the constant will lead to a compilation error
// MY_CONSTANT = 10; // Error: assignment of read-only variable 'MY_CONSTANT'


// Constants in Functions:

// Constants are commonly used in functions to indicate that the function does not modify the parameter.

void printValue(const int value) {
    // Function promises not to modify 'value'
    // ... function body ...
}

// Constants and Pointers:

// When working with pointers, const can be used to create constant pointers or pointers to constants.

const int* ptr1;   // Pointer to a constant integer
int const* ptr2;   // Another way to declare a pointer to a constant integer

int* const ptr3 = &myVariable;  // Constant pointer to an integer


// Constants and Classes:

// In classes, const can be used with member functions to indicate that the function does not modify the object's state.

class MyClass {
public:
    void display() const {
        // This function does not modify the object's state
        // ... function body ...
    }
};


// Constants are beneficial for creating immutable values in your code, and they also help in making your code more maintainable and less error-prone.


// **************** Difference between constant and Macros ********************

// Constants and macros are both used in C++ to represent values that do not change during the execution of a program, but they have some key differences.

// Type Safety:

// Constants: Constants are type-safe. When you declare a constant using const, the compiler enforces type checking, ensuring that the constant is used correctly with respect to its data type.

const int myConstant = 10;

// Macros: Macros are not type-safe. They are essentially a textual replacement in the code, and they do not provide type information. Macro values are inserted directly into the code during preprocessing without any type checking.

#define MY_MACRO 10

// Scope:

// Constants: Constants respect the usual scoping rules in C++. They have block scope if defined within a block, and they obey namespace and class scoping rules.

void exampleFunction() {
    const int localConstant = 5;
    // ... function body ...
}

// Macros: Macros are not subject to the same scoping rules as constants. They are essentially text replacements and are not limited by block scope. Macros defined using #define are globally accessible after their definition in the code.

#define MY_MACRO 10

// Debugging:

// Constants: Constants provide better support for debugging. If you use a constant in your code, you can typically inspect its value during debugging sessions. Constants have a clear presence in the symbol table, making them more debug-friendly.

// Macros: Macros, being simple text replacements, might make debugging more challenging. During debugging, you can't directly inspect the value of a macro. The macro's value is expanded in the code, and you see the expanded value during debugging.

// Functionality:

// Constants: Constants can be used for more complex data types, including user-defined types and classes. They can also be used with functions and methods that operate on constant data.

class MyClass {
public:
    static const int classConstant = 42;
};

// Macros: Macros are simple text substitutions, and they are often used for simple values or code snippets. They lack the ability to define complex data types or encapsulate functionality.

#define PI 3.14159

// Debugging Information:

// Constants: Constants retain debugging information. When debugging, you can see the constant names and values in the source code, aiding in understanding the program's behavior.

// Macros: Macros may not retain debugging information. The debugger sees the expanded code, and macro names may not appear in debugging sessions.

// In general, constants are preferred over macros in modern C++ code due to their type safety, scoping rules, and better support for debugging. Macros are powerful but can lead to issues like name clashes and lack of type safety. In modern C++, constants and inline functions are often used as alternatives to macros.