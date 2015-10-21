class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1, mid = 0;
        while (l <= r) {
            mid = (l+r)/2;
            if (nums[mid] > target) {
                r = mid-1;
            } else if (nums[mid] < target) {
                l = mid+1;
            } else {
                break;
            }
        }
        vector<int> n;
        n.push_back(-1);
        n.push_back(-1);
        if (nums[mid] != target) return n;
        int s = 0, e = 0;
        for(int i = mid; i >= 0; i--) {
            if (nums[i]!=target) {
                break;
            }
            s = i;
        }
        for(int i = mid; i < nums.size(); i++) {
            if (nums[i] != target) {
                break;
            }
            e = i;
        }
        n[0] = s, n[1] = e;
        return n;
    }
};
