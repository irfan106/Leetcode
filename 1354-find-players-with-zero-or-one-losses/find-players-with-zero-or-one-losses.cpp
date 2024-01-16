class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>>ans;
        unordered_map<int,int>win,loss;
        for(auto &it:matches){
            win[it[0]]++;
            loss[it[1]]++;
        }
        vector<int>ans1;
        for(auto it:win){
            if(loss.find(it.first)==loss.end()) ans1.push_back(it.first);
        }
        vector<int>ans2;
        for(auto it:loss){
            if(it.second==1) ans2.push_back(it.first);
        }
        sort(ans1.begin(),ans1.end());
        sort(ans2.begin(),ans2.end());
        ans.push_back(ans1);
        ans.push_back(ans2);
        // sort(ans.begin(),ans.end());
        return ans;
    }
};