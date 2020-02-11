#include <stdio.h>
#include "lib/array.h"

#define SIZE_ARRAY

int main() {
    int size SIZE_ARRAY;
    int source[SIZE_ARRAY] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int destination[SIZE_ARRAY];

    arrayPrint(source, size);

    return 0;
}