class Solution {
public:
    #define M 1000000007
    int solve(int n, int k, int tar,vector<vector<int>>&dp){
        if(n==0 && tar==0) return 1;
        if(n<=0 || tar<=0) return 0;
        if(dp[n][tar]!=-1) return dp[n][tar];
        // int left=0, right=0;
        int sum=0;
        // if(n+k>tar)left=solve(n-1,k,tar);
        // if(n+k>tar)right=solve(n, k-1,tar);
        for(int i=1;i<=k;i++){
            sum = (sum%M + solve(n-1,k,tar-i,dp)%M)%M;
        }
        return dp[n][tar]=sum;
    }
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>>dp(32,vector<int>(1002,-1));
        return solve(n,k,target,dp);
    }
};