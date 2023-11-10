class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& nums) {
        vector<int>ans(nums.size()+1);
        unordered_map<int,vector<int>>mp;
        for(auto &it:nums){
            mp[it[0]].push_back(it[1]);
            mp[it[1]].push_back(it[0]);
        }
        int i=0;
        for(auto &it:mp){
            if(it.second.size()==1){
                ans[i++] =it.first;
                ans[i++]= it.second[0];
                break;
            }
        }
        int prev=ans[i-1], prevadj=ans[i-2];
        while(i<ans.size()){
            int cur=mp[prev][0];
            if(cur== prevadj) cur=mp[prev][1];
            ans[i++] = cur;
            prevadj=prev;
            prev=cur;
        }
        return ans;
    }
};