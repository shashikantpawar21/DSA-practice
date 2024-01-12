#include<iostream>
using namespace std;

// INLINE FUNCTION 
inline int getMax(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int a = 1, b = 2;
    int ans = 0;

    ans = getMax(a, b);
    cout << ans << endl;

    a = a + 3;
    b = b + 1;

    ans = getMax(a, b);

    cout << ans << endl; 
}

// Normal Function 
// There are 2 thing that happens with normal function 
//  They get placed on stack when they are called 
//  memory is created for variable used 
//  function calls happen in memory while execution 

// ******** INLINE FUNCTIONS *****************
// Here inline function can help for simpler smaller function 
// Let say we have simpler logic function with 1 line 
// We can mark them as inline function 
// During compilation process, C++ will replace the function calls 
//  with the actual function code 

// This way we get maintainable, readable code 
// Avoiding function calls overhead and not using memory for variables 

//  These functions are defined using keyword inline 

// Considerations for Inlining:

// The decision to inline a function is ultimately made by the compiler. It considers factors like the size of the function, the complexity of the code, and the overall impact on performance.
// Inlining very large functions or functions with complex control flow may not provide the expected performance benefits and could increase code size.

// It's important to note that while inline functions can improve performance in certain cases, modern compilers are quite sophisticated and can make intelligent decisions about inlining based on optimization settings and the overall code structure. In many cases, relying on compiler optimizations without explicitly using the inline keyword may be sufficient.