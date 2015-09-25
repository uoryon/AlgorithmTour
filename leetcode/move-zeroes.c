void moveZeroes(int* nums, int numsSize) {
    int i, j;
    for (i = 0; i < numsSize; i++) {
        if (nums[i] != 0) continue;
        count++;
        for (j = i+1; j < numsSize; j++) {
            if (nums[j] != 0) {
                nums[i] = nums[j];
                nums[j] = 0;
                break;
            }
        }
    }
}