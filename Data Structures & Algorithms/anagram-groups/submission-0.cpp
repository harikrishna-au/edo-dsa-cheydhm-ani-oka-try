class Solution {
 public:
  vector<vector<string>> groupAnagrams(vector<string>& strs) {
    int n = strs.size();
    unordered_map<string, vector<string>> mp;
    vector<vector<string>> result;
    for (const auto& str : strs) {
      string key = str;
      sort(key.begin(), key.end());
      mp[key].push_back(str);
    }
    for (const auto& [key, value] : mp) {
      result.push_back(value);
    }
    return result;
  }
};
