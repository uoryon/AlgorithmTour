int compare_ints(const void* a, const void* b)
{
    int arg1 = *(const int*)a;
    int arg2 = *(const int*)b;
    
    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
}

int firstMissingPositive(int* nums, int numsSize) {
    int i = 0, start = 1;
    qsort(nums, numsSize, sizeof(int), compare_ints);
    for (i = 0; i < numsSize; i++) {
        if (nums[i] > 0) {
            if (nums[i] == start) {
             start++;
            } else if (nums[i] > start) {
             return start;
            }
        }
    }
    return start;
}
