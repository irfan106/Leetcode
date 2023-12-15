class Solution {
public:
    string destCity(vector<vector<string>>& nums) {
        unordered_map<string,string>mp;
        for(auto &it: nums) mp[it[0]]=it[1];
        string cur=(nums[0][0]);
        while(mp.count(cur)){
            cur=mp[cur];
        }
        return cur;
    }
};