
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        
        int N = nums.size();
        vector<int> dp;
        for (int i = 0; i < N; i++) {
            auto iter = lower_bound(dp.begin(), dp.end(), nums[i]);
            if (iter == dp.end()) {
                dp.push_back(nums[i]);
            } else {
                *iter = nums[i];
            }
        }

        return dp.size();
    }
};

