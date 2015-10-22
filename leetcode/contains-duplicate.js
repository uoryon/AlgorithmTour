/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    var obj = {};
    for(var i = 0; i < nums.length; i++) {
        var key = nums[i] + "";
        if (obj[key] == undefined) obj[key] = 1;
        else obj[key]++;
        if (obj[key]>=2) return true;
    }
    return false;
};
