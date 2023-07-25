#include <stdio.h>

int foo() {
    // Declare a static variable inside the function.
    static int counter = 1;
    counter++;  // Increment the value of the static variable.
    printf("Function call count: %d\n", counter);
}

int main() {
    foo(); // Output: Function call count: 1
    foo(); // Output: Function call count: 2
    foo(); // Output: Function call count: 3

    return 0;
}
