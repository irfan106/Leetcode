class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        if(n<=1) return min(cost[0],cost[1]);
        vector<int>dp(n+1);
        for(int i=0;i<n;i++){
            if(i<2) dp[i]=cost[i];
            else dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
        }
        return min(dp[n-1],dp[n-2]);
    }
};