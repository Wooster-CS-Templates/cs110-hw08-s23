#include <stdio.h>

/**
 * Find the maximum value in an array of integers. The array must contain at
 * least one element.
 *
 * Parameters:
 *     array - the array to search
 *     size - the number of elements in array
 *
 * Return value:
 *     The maximum value in the array
 */
int max_value(const int array[], size_t size);

int main() {
    size_t array_size;

    printf("Enter the size of the array: ");
    scanf("%zu", &array_size);

    int array[array_size];

    printf("Enter the values of the array: ");

    for(size_t i = 0; i < array_size; i++) {
        scanf("%i", &array[i]);
    }

    printf("Max: %i\n", max_value(array, array_size));
    //printf("Min: %i\n", min_value(array, array_size));
    //printf("Sum: %i\n", sum(array, array_size));
    //printf("Average: %lf\n", average(array, array_size));

    return 0;
}

int max_value(const int array[], size_t size) {
    int max = array[0];

    for(size_t i = 1; i < size; i++) {
        if(array[i] > max) {
            max = array[i];
        }
    }

    return max;
}
