class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>mp;
        for(auto &it:s) mp[it]++;
        for(auto &it:t){
            if(mp.find(it)==mp.end()) return it;
            else{
                mp[it]--;
                if(mp[it]==0){
                    mp.erase(it);
                }
            }
        }
        return '-1';
    }
};