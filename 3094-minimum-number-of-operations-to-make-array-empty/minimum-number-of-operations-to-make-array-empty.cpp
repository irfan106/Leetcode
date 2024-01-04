class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto &it:nums)mp[it]++;
        int ct=0;
        // for(auto &it:mp) cout<<it.first<<" "<<it.second<<endl;
        for(auto &it:mp){
            int t=it.second;
            if(t==1) return -1;
            ct+=t/3;
            if(t%3)ct++;
        }
        return ct;
    }
};