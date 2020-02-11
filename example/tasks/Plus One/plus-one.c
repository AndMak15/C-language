
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    *returnSize = digitsSize;
    for ( int i = digitsSize - 1; i >= 0; i-- ) {
        int temp = digits[i] + 1;

        if ( temp != 10 ) {
            digits[i] = temp;
            break;
        }
        digits[i] = 0;
    }

    if ( digits[0] == 0 ) {
        *returnSize += 1;
        int * newDigits = (int*)malloc(*returnSize * sizeof(int));

        newDigits[0] = 1;
        for ( int i = 0; i < digitsSize; i++ ) {
            newDigits[i+1] = digits[i];
        }

        free(digits);

        return newDigits;
    }

    return digits;
}
