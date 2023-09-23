class Solution {
public:
    string mergeAlternately(string s1, string s2) {
        int i=0,j=0;
        int n=s1.size(),m=s2.size();
        string ans="";
        while(i<n && j<m){
            ans+=s1[i];
            ans+=s2[j];
            i++;
            j++;
        }
        while(i<n){
            ans+=s1[i];
            i++;
        }
        while(j<m){
            ans+=s2[j];
            j++;
        }
        return ans;
    }
};