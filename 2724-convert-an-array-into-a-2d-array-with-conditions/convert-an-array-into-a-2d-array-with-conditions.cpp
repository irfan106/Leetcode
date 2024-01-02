class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto &it:nums) mp[it]++;
        vector<vector<int>> ans;
        // while(mp.size()!=0){
        //     vector<int>temp;
        //     for(auto &it:mp){
        //     temp.push_back(it.first);
        //     it.second--;
        //     if(it.second==0){
        //         mp.erase(it.first);
        //     }
        //     }
        //     ans.push_back(temp);
        // }
        int mx=0;
        for(auto &it:mp) mx=max(mx,it.second);
        for(int i=0;i<mx;i++){
            vector<int>temp;
            for(auto &it:mp){
                if(it.second>0)temp.push_back(it.first);
                it.second--;
            }
            // for(int i=mp.begin();i<mp.end();i++){
            //     if(mp[i])
            //     temp.push_back(i);
            //     mp[i]--;
            // }
            ans.push_back(temp);
        }
        
        return ans;
    }
};