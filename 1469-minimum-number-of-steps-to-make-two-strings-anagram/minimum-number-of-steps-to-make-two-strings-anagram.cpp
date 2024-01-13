class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<int,int>mp1;
        for(auto &it:s) mp1[it]++;
        // for(auto &it:t) mp2[it]++;
        int ct=0;
        for(int i=0;i<s.size();i++){
            if(mp1.find(t[i])!=mp1.end()){
                mp1[t[i]]--;
                if(mp1[t[i]]==0) mp1.erase(t[i]);
            }else ct++;
        }
        return ct;
        
    }
};