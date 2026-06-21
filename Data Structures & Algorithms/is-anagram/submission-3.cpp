class Solution {
   public:
    bool isAnagram(string s, string t) {
        // anagram is the value which is like which is only having the same characters in both the
        // strings

        // we can do that by hash
        unordered_map<char, int> mp;
        for (char ch : s) {
            mp[ch]++;
        }
        for (char ch : t) {
            if (mp[ch] == 0) return false;
            mp[ch]--;
        }
        for (const auto& [key, val] : mp) {
            if (val > 0) return false;
        }
        return true;
    }
};
