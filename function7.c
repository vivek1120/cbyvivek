//Example of Call by Value

#include <stdio.h>

int modifyValue(int num) {
    num = num + 2; // Changes made here won't affect the original argument.
    printf("address of num %p\n",&num);
    
    return num;
}

int main() {
    int x = 5;
    printf("Before function call: %d\n", x); // Output: 5
    printf("Before function call address of x: %p\n", &x);

    
    printf("function call value: %d\n", modifyValue(x)); 


    printf("After function call: %d\n", x); // Output: 5 (unchanged)
    printf("After function call address of x: %p\n", &x);


    return 0;
}
