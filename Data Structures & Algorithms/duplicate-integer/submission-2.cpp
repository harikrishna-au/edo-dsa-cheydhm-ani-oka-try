class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        // if the array contains a duplicate we need to return as false

        // if we sort the array we can find that in easy like if the adjenct are same then we can
        // return false

        // int n = nums.size();
        // sort(nums.begin(), nums.end());
        // for (int i = 1; i < n; i++) {
        //     if (nums[i] == nums[i - 1]) {
        //         return true;
        //     }
        // }
        // return false;
        // if i created a hash it would take more storage but in considering to future it might help
        // a lot

        int n = nums.size();
        unordered_map<int, int> mp;
        for (int i : nums) {
            mp[i]++;
        }
        for (auto const& [key, val] : mp) {
            if (val > 1) {
                return true;
            }
        }
        return false;
    }
};