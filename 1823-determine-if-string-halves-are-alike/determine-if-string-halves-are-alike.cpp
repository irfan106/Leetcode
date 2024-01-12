class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size();
        unordered_set<int>vol={'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int ct1=0;
        int ct2=0;
        for(int i=0;i<n/2;i++){
            if(vol.find(s[i])!=vol.end())ct1++;
        }
        for(int i=n/2;i<n;i++){
            if(vol.find(s[i])!=vol.end())ct2++;
        }
        return ct1==ct2;
    }
};