class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        unordered_map<long,long>mp[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                long diff=(long)nums[i]-nums[j];
                auto it =mp[j].find(diff);
                int count_at_j = it == mp[j].end() ? 0 : it->second;
                mp[i][diff]+=count_at_j+1;
                res+=count_at_j;
            }
        }
        return res;
    }
};