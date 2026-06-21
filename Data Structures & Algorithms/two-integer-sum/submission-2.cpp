class Solution {
 public:
  vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    // how sorting helps in solving this quesion
    // i think we need to keep track of the index and sort the array then this will workalignas
    vector<pair<int, int>> A;
    for (int i = 0; i < n; i++) {
      A.push_back({nums[i], i});
    }
    sort(A.begin(), A.end());
    int i = 0, j = n - 1;
    while (i < j) {
      int curr = A[i].first + A[j].first;
      if (curr == target) {
        return {min(A[i].second, A[j].second), max(A[i].second, A[j].second)};
      } else if (curr < target) {
        i++;
      } else {
        j--;
      }
    }
    return {};
  }
};
