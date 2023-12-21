class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        set<int>s;
        for(auto &it:points){
            s.insert(it[0]);
        }
        vector<int>nums;
        for(auto &it:s) nums.push_back(it);
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=1;i<nums.size();i++){
            ans=max(ans,abs(nums[i]-nums[i-1]));
        }
        return ans;
    }
};