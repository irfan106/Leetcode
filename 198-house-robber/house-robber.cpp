class Solution {
public:
    // int solve(vector<int>&nums,int ind,vector<int>&dp){
    //     if(ind==0)return nums[ind];
    //     if(ind<0) return 0;
    //     if(dp[ind]!=-1) return dp[ind];
    //     int pick=nums[ind]+solve(nums,ind-2,dp);
    //     int notpick=solve(nums,ind-1,dp);
    //     return dp[ind]=max(pick,notpick);
    // }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        // return solve(nums,n-1,dp);
        dp[0]=nums[0];
        for(int i=1;i<n;i++){
            int take=nums[i];
            if(i>1) take+=dp[i-2];
            int nottake=dp[i-1];
            dp[i]=max(take,nottake);
        }
        return dp[n-1];
    }
};