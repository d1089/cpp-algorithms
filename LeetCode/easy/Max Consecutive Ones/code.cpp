class Solution {
  public:
    int findMaxConsecutiveOnes(vector < int > & nums) {

      /* for fast execution include below first 3 line of code*/

      std::ios::sync_with_stdio(false);
      cin.tie(nullptr);
      cout.tie(nullptr);

      int count = 0, ans = 0;
      for (int x: nums) {
        if (x == 0) count = 0;
        else {
          count++;
          ans = max(ans, count);
        }
      }
      return ans;
    }
};
