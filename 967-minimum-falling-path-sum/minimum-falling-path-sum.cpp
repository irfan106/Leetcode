class Solution {
public:
    // int solve(vector<vector<int>>& nums,int i,int j,int n,vector<vector<int>>&dp){
    //     if(j<0 || j>=n) return 10000000;
    //     if(i==0) return nums[0][j];
    //     if(dp[i][j]!=-1) return dp[i][j];
    //     int s=nums[i][j]+solve(nums,i-1,j,n,dp);
    //     int ld=nums[i][j]+solve(nums,i-1,j-1,n,dp);
    //     int rd=nums[i][j]+solve(nums,i-1,j+1,n,dp);
    //     return dp[i][j]= min(s,min(ld,rd));
    // }
    int minFallingPathSum(vector<vector<int>>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        // int minans=solve(mat,n-1,0,n,dp);
        // for(int j=1;j<n;j++){
        //     minans=min(minans,solve(mat,n-1,j,n,dp));
        // }
        // return minans;
        for(int j=0;j<n;j++){
            dp[0][j]=nums[0][j];
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                int u=nums[i][j]+dp[i-1][j];
                int ld=nums[i][j],rd=nums[i][j];
                if(j-1>=0) ld+=dp[i-1][j-1];
                else ld+=10000000;
                if(j+1<n) rd+=dp[i-1][j+1];
                else rd+=10000000;
                dp[i][j]=min(u,min(ld,rd));
            }
        }
        int minans=INT_MAX;
        for(int j=0;j<n;j++){
            minans=min(minans,dp[n-1][j]);
        }
        return minans;
    }
};