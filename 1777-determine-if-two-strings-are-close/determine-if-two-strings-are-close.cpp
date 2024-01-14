class Solution {
public:
    bool closeStrings(string s1, string s2) {
        unordered_map<char,int>mp1,mp2;
        for(auto &it:s1) mp1[it]++;
        for(auto &it:s2) mp2[it]++;
        vector<int>v1,v2;
        for(auto &it:mp1) v1.push_back(it.second);
        for(auto &it:mp2) v2.push_back(it.second);
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        for(int i=0;i<s1.size();i++){
            if(mp2.find(s1[i])==mp2.end()) return false;
        }
        return v1==v2;
    }
};