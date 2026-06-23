class Solution {
 public:
  vector<int> twoSum(vector<int>& numbers, int target) {
    // in this bhai we need find the only w numbers which sum is the target like and also they
    // mentied like its a sorted onew
    size_t n = numbers.size();
    int beg = 0, end = n - 1;
    while (beg < end) {
      int val = numbers[beg] + numbers[end];
      if (target == val) return {beg+1,end+1};
      if (val < target) {
        beg++;
      } else {
        end--;
      }
    }
    return {};
  }
};
