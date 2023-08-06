//Code with Automatic Memory Allocation (Static Array):
#include <stdio.h>
#include <stdlib.h>

int main() {

    int a;
    printf("enter the array size: ");
    scanf("%d",&a);
    int arr[a];

    // Assign values to the array elements.
    for (int i = 0; i < a; i++) {
        arr[i] = i * 10; // Fill the array with values 0, 10, 20, 30, 40.
    }

    // Access and print the array elements.
    for (int i = 0; i < a; i++) {
        printf("%d ", arr[i]); // Output: 0 10 20 30 40
    }
    printf("\n");

    // Don't forget to free the allocated memory when it's no longer needed.
    free(arr);

    return 0;
}
