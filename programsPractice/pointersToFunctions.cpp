#include <iostream>

// Function declarations
int add(int a, int b);
int subtract(int a, int b);

// Function pointer type declaration
typedef int (*ArithmeticFunction)(int, int);

// Function that performs an arithmetic operation using a function pointer
int performArithmetic(int a, int b, ArithmeticFunction operation) {
    if (operation) {
        return operation(a, b);
    }
    else {
        // Handle the case where the function pointer is not valid
        // Return an appropriate value or raise an error
        return 0;
    }
}


int main() {
    // Declare function pointers and assign addresses of functions
    ArithmeticFunction operation1 = &add;
    ArithmeticFunction operation2 = &subtract;

    // Call functions indirectly using function pointers
    int result1 = operation1(5, 3);
    int result2 = operation2(10, 7);

    std::cout << "Result 1: " << result1 << std::endl;
    std::cout << "Result 2: " << result2 << std::endl;

    // Pass function pointers as arguments
    int sum = performArithmetic(4, 2, operation1);
    int difference = performArithmetic(8, 5, operation2);

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}
