class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>v1,v2,ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0) v1.push_back(nums[i]);
            else v2.push_back(nums[i]);
        }
        for(auto &it:v1) ans.push_back(it);
        for(auto &it:v2) ans.push_back(it);
        return ans;
    }
};