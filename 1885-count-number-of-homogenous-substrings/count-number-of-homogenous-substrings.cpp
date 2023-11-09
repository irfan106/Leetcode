class Solution {
public:
    int m=1e9+7;
    int countHomogenous(string s) {
        int sum=1;
        int n=s.size();
        int prev=1;
        for(int i=1;i<n;i++){
            int cur=1;
            if(s[i-1]==s[i]){
                cur+=prev;
            }
            sum=(sum%m)+ (cur%m);
            prev=cur;
        }
        return (sum%m);
    }
};