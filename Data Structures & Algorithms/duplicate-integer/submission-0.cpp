class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        // if the array contains a duplicate we need to return as false

        // if we sort the array we can find that in easy like if the adjenct are same then we can
        // return false

        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                return true;
            }
        }
        return false;
    }
};