class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp1,mp2;
        if(s.size()!=t.size()) return false;
        for(int i=0;i<s.size();i++){
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        // for(auto &it:mp1){
        //     if(mp2.find(it.first)!=mp2.end()){
        //         if(it.first)
        //     }
        // }
        if(mp1==mp2) return true;
        return false;
    }
};