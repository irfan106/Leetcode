class Solution {
public:
    int calclen(int len){
        if(len==0) return 0;
        else if(len==1) return 1;
        else if(len<10) return 2;
        else if(len<100) return 3;
        else return 4;
    }
    int getLengthOfOptimalCompression(string s, int k) {
        int n=s.length();
        vector<vector<long>>dp(n+1,vector<long>(k+1,INT_MAX));
        dp[0][0]=0;
        for(int i=1;i<=n;i++){
            for(int j=0;j<=k;j++){
                if(j>0)dp[i][j]=dp[i-1][j-1];
                int removed=0,ct=0;
                for(int p=i;p>0;p--){
                    if(s[p-1]==s[i-1])ct++;
                    else if(++removed>j) break;
                    dp[i][j] = min(dp[i][j],dp[p-1][j-removed]+calclen(ct));
                }
            }
        }
        return dp[n][k];
    }
};