#include <stdio.h>

void arrayCopy(int destination[], int source[], int size) {
    for ( int i = 0; i < size; i++ ) {
        destination[i] = source[i];
    }
}

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

int arraySum(int array[], int size) {
    int sum = array[0];

    for ( int i = 1; i < size; i++ ) {
        sum += array[i];
    }
    return sum;
}
