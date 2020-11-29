/*
 * @lc app=leetcode.cn id=647 lang=cpp
 *
 * [647] 回文子串
 */

// @lc code=start
class Solution {
public:
  int countSubstrings(string s) {
    int n = s.size();
    int ans = 0;
    vector<vector<bool>> dp(n, vector<bool>(n, false));
    for (int j = 0; j < n; j++) {
      for (int i = 0; i <= j; i++) {
        if (s[i] == s[j] && (j - i < 2 || dp[i + 1][j - 1])) {
          dp[i][j] = true;
          ans++;
        }
      }
    }
    return ans;
  }
};

// @lc code=end
