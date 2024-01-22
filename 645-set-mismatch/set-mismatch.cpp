class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_set<int>s;
        vector<int>ans;
        int n=nums.size();
        for(auto &it:nums){
            if(s.find(it)!=s.end()) ans.push_back(it);
            else s.insert(it);
        }
        for(int i=1;i<=n;i++){
            if(s.find(i)==s.end()){
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};