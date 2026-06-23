class Solution {
 public:
  int maxArea(vector<int>& heights) {
    size_t n = heights.size();
    // i need to find a pole in the left and right but i need to know how much will that be stored
    // if i go with that pari and i cant sort i need to check all the rods i guessalignas
    int left = 0, right = n - 1;
    int maxstorage = 0;
    while (left < right) {
      maxstorage = max(min(heights[left], heights[right]) * (right - left), maxstorage);
      if (heights[left] < heights[right]) {
        left++;
      } else {
        right--;
      }
    }    return maxstorage;
  }
};
