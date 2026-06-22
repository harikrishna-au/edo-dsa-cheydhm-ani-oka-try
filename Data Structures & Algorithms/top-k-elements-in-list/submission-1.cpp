class Solution {
 public:
  vector<int> topKFrequent(vector<int>& nums, int k) {
    // we need to return the top most frequent elements in the array that mean i can add a count and
    // by this i think i can learn the sort techniwue very much
    int n = nums.size();
    unordered_map<int, int> mp;
    for (const auto& i : nums) {
      mp[i]++;
    }
    // i need to sort the arry based on the value of the map but i dont know how to write that
    vector<pair<int, int>> v(mp.begin(), mp.end());
    sort(v.begin(), v.end(), [](auto& a, auto& b) { return a.second > b.second; });
    vector<int> result;
    for (size_t i = 0; i < k; i++) {
      result.push_back(v[i].first);
    }
    return result;
  }
};
