class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output(nums.size(), 1);
        int i = 0;
        for (i = 1; i < nums.size(); i++) {
            output[i] = output[i-1] * nums[i-1];
        }
        int a = 1;
        for (i = nums.size()-1; i >= 0; i--) {
            output[i] *= a;
            a *= nums[i];
        }
        return output;
    }
};
