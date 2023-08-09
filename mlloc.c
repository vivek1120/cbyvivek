//Code with Dynamic Memory Allocation (DMA):
//Memory Allocation:
/*DMA: In the first code using Dynamic Memory Allocation (DMA),
 memory is allocated at runtime using malloc(). 
 The size of the array is determined during runtime,
  and memory is allocated on the heap.

Static Array: In the second code using Automatic Memory Allocation,
 the array is declared with a fixed size a determined during runtime. 
 Memory for the array is allocated on the stack.
#include <stdio.h>
#include <stdlib.h>*/

int main() {
    int *arr;
    int n;
    printf("enter the array size: ");
    scanf("%d",&n);
    

    arr = (int*)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Now, 'arr' points to the first element of the dynamically allocated integer array.

    // Assign values to the array elements.
    for (int i = 0; i < n; i++) {
        arr[i] = i * 10; // Fill the array with values 0, 10, 20, 30, 40.
    }

    // Access and print the array elements.
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Output: 0 10 20 30 40
    }
    printf("\n");

    // Don't forget to free the allocated memory when it's no longer needed.
    free(arr);

    return 0;
}
