class Solution {
public:
    int findSpecialInteger(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto &it:nums) mp[it]++;
        int maxe=-1,maxfreq=0;
        for(auto &it:mp){
            if(it.second>maxfreq){
                maxe=it.first;
                maxfreq=it.second;
            }
        }
        return maxe;
    }
};