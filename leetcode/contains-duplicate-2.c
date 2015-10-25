bool containsNearbyDuplicate(int* nums, int numsSize, int k) {
    int i = 0, j = 0;
    for (i = 0; i < numsSize; i++) {
        for (j = i+1; j < numsSize; j++) {
            if (nums[i] == nums[j] && (j - i <= k)) return true;
        }
    }
    return false;
}
