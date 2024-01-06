class Solution {
public:
    int n;
    int nextindex(vector<vector<int>>&nums,int l, int tar){
        int r=n-1;
        int res=n+1;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(nums[mid][0] >= tar){
                res=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return res;
    }
    int solve(vector<vector<int>>&nums, int i, vector<int>&dp){
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];
        int next=nextindex(nums,i+1,nums[i][1]);
        int taken=nums[i][2] + solve(nums,next,dp);
        int nottaken=solve(nums,i+1,dp);
        return dp[i]=max(taken,nottaken);
    }
    int jobScheduling(vector<int>& s, vector<int>& e, vector<int>& p) {
        n=s.size();
        vector<vector<int>>nums(n,vector<int>(3,0));
        vector<int>dp(n+1,-1);
        for(int i=0;i<n;i++){
            nums[i][0]=s[i];
            nums[i][1]=e[i];
            nums[i][2]=p[i];
        }
        sort(nums.begin(),nums.end());
        return solve(nums, 0, dp);
    }
};