#include <stdio.h>

void modifyReference(int* ptr) {
    *ptr = *ptr + 2; // Changes made here will affect the original argument.
    printf("address of ptr %p\n",ptr);
}

int main() {
    int x = 5;
    printf("Before function call: %d\n", x); // Output: 5
    printf("Before function call address of x: %p\n", &x);

    modifyReference(&x); // Pass the address of x to the function

    printf("After function call: %d\n", x); // Output: 7 (changed)
    printf("After function call address of x: %p\n", &x);

    return 0;
}
