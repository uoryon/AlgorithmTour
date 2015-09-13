class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for (int i = 1; i < nums.size();) {
            if (nums.at(i) == nums.at(i-1)) {
                nums.erase(nums.begin()+i);
            } else {
                i++;
            }
        }
        return nums.size();
    }
};