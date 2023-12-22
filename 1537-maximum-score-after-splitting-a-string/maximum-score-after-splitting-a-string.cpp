class Solution {
public:
    int maxScore(string s) {
        int maxscore=0;
        int ct0=0, ct1=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') ct1++;
        }
        // if(s[0]=='0') ct0++;
        for(int i=1;i<s.size();i++){
            if(s[i-1]=='0') ct0++;
            else{
                ct1--;
            }
            maxscore=max(maxscore, ct0+ct1);
        }
        return maxscore;
    }
};