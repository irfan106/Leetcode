class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>mp;
        int ct=0;
        for(auto &it:chars) mp[it]++;
        for(auto &it:words){
            unordered_map<char,int>mp1;
            for(auto &c:it)mp1[c]++;
            int flag=0;
            for(auto &m:mp1){
                if(mp.find(m.first)!=mp.end()){
                    if(m.second>mp[m.first]){
                        flag=1;
                        break;
                    }
                }else{
                    flag=1;
                    break;
                }
            }
            // cout<<flag<<" ";
            if(flag==0) ct+=it.size();
        }
        return ct;
    }
};