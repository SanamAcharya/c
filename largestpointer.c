#include <stdio.h>

int main() {
    int arr[] = {10, 5, 20, 25, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    int *ptr = arr;  // Initialize the pointer to the first element of the array
    int largest = *ptr;  // Initialize the largest element as the first element

    // Traverse the array using the pointer
    for (int i = 1; i < size; i++) {
        // Check if the current element is greater than the largest element
        if (*(ptr + i) > largest) {
            largest = *(ptr + i);
        }
    }

    printf("The largest element in the array is: %d\n", largest);

    return 0;
}
