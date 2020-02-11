
#define RETURN_SIZE 2

typedef struct item {
    int value;
    int index;
} Item;

void insertSort(Item * array, int size) {
    for ( int i = 1; i < size; i++ ) {
        int j = i;
        Item temp = array[i];

        for ( int prev = j - 1; j > 0 && temp.value < array[prev].value; j--, prev-- ) {
            array[j] = array[prev];
        }
        array[j] = temp;
    }
}

void arrayCopy(Item destination[], int source[], int size) {
    for ( int i = 0; i < size; i++ ) {
        destination[i].value = source[i];
        destination[i].index = i;
    }
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int * result = (int*) malloc(RETURN_SIZE * sizeof(int));
    Item * sorted = (Item*) malloc(numsSize * sizeof(Item));

    arrayCopy(sorted, nums, numsSize);
    insertSort(sorted, numsSize);

    for ( int sum, i = 0, j = numsSize - 1; i != j; ) {
        sum = sorted[i].value + sorted[j].value;
        if ( sum == target ) {
            *returnSize = RETURN_SIZE;
            result[0] = sorted[i].index;
            result[1] = sorted[j].index;
            free(sorted);

            return result;
        }
        if( sum > target ) {
            j -= 1;
        } else {
            i += 1;
        }
    }

    *returnSize = 0;
    free(sorted);

    return result;
}
