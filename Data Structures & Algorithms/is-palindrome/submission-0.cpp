class Solution {
 public:
  bool isPalindrome(string s) {
    // we dont need to care punchuvation adna alsong with the capital and small and the spaces ghen
    // we need go make a god string first that meanamespace
    string mainstring;
    for (auto& ch : s) {
      if (isalnum(ch)) {
        mainstring += tolower(ch);
      }
    }
    size_t n = mainstring.size();
    // now we got the main string then we can do the ops on this to know is that palindrome or
    // notalignas
    int beg = 0, end = n - 1;
    while (beg <= end) {
      if (mainstring[beg] != mainstring[end]) return false;
      beg++;
      end--;
    }
    return true;
  }
};
