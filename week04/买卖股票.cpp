class Solution {
public:
    int maxProfit(vector<int>& prices) {   
        int ans = 0;
        int n = prices.size();
        for (int i = 1; i < n; ++i) {//以数组长度循环
            ans += max(0, prices[i] - prices[i - 1]);//ans 利润值为后价格减前价格 如果小于0则不选择  大于0则计入
        }
        return ans;
    }
};