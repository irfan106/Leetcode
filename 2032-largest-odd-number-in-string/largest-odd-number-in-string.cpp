class Solution {
public:
    string largestOddNumber(string num) {
        string ans=num;
        for(int i=num.size()-1;i>=0;i--){
            if((num[i]-'0')%2==0) ans.pop_back();
            else break;
        }
        return ans;
    }
};