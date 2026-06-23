class Solution {
 public:
  int longestConsecutive(vector<int>& nums) {
    size_t n = nums.size();

    unordered_set<int> s(nums.begin(), nums.end());
    int lon = 0;
    for (int i : nums) {
      if (!s.count(i - 1)) {
        int curr = i;
        int len = 1;
        while (s.count(curr + 1)) {
          curr++;
          len++;
        }
        lon = max(lon, len);
      }
    }
    return lon;
  }
};
