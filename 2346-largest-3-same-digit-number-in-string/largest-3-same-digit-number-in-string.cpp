class Solution {
public:
    string largestGoodInteger(string s) {
        string ans="";
        int n=s.size();
        int maxi=-1;
        for(int i=0;i<n;){
            int j=i+1;
            while(j<n && s[j]==s[i])j++;
            if(j-i>=3){
                maxi=max(maxi,s[i]-'0');
            }
            i=j;
        }
        if(maxi==-1) return "";
        for(int i=0;i<3;i++){
            ans+=to_string(maxi);
        }
        return ans;
    }
};