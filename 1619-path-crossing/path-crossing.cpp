class Solution {
public:
    bool isPathCrossing(string s) {
        int n=s.size();
        pair<int,int>p={0,0};
        set<pair<int,int>>mp;
        int ct=1;
        mp.insert({0,0});
        for(int i=0;i<n;i++){
            if(s[i]=='N'){
                p.second++;
            }else if(s[i]=='E'){
                p.first++;
            }else if(s[i]=='S'){
                p.second--;
            }else{
                p.first--;
            }
            mp.insert({p.first,p.second});
            ct++;
            if(ct!=mp.size()) return true;
        }
        return false;
    }
};