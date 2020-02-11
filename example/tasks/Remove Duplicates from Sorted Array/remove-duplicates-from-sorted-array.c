
int removeDuplicates(int* nums, int numsSize){
    int newSize = 1;

    if ( numsSize == 0 ) {
        return 0;
    }

    for ( int i = 1; i < numsSize; i++ ) {
        if ( nums[i-1] != nums[i]) {
            nums[newSize] = nums[i];
            newSize += 1;
        }
    }

    return newSize;
}
