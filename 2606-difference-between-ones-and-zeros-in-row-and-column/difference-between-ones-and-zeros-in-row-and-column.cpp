class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& nums) {
        int n=nums.size(), m=nums[0].size();
        vector<vector<int>>ans(n,vector<int>(m));
        vector<int>rowones(n,0);
        vector<int>colones(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                rowones[i]+=nums[i][j];
                colones[j]+=nums[i][j];
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans[i][j] = 2* (rowones[i] + colones[j]) - n - m;
            }
        }
        return ans;
    }
};