class Solution {
public:
    // int dp[2501][2502];
    // int solve(int ind,int prev,vector<int>&nums){
    //     if(ind==nums.size()) return 0;
    //     if(dp[ind][prev+1]!=-1) return dp[ind][prev+1];
    //     int notpick=solve(ind+1,prev,nums);
    //     int pick=-1000000;
    //     if(prev==-1 || nums[prev]<nums[ind]) pick=1+solve(ind+1,ind,nums);
    //     return dp[ind][prev+1]= max(pick,notpick);
    // }
    int lengthOfLIS(vector<int>& nums) {
        // memset(dp,-1,sizeof(dp));
        // return solve(0,-1,nums);
        int n=nums.size();
        vector<int>dp(n,1);
        int maxi=1;
        for(int i=0;i<nums.size();i++){
            for(int prev=0;prev<i;prev++){
                if(nums[i]>nums[prev] && 1+dp[prev]>dp[i]){
                    dp[i]=1+dp[prev];
                }
            }
            if(dp[i]>maxi){
                maxi=dp[i];
            }
        }
        return maxi; 
    }
};