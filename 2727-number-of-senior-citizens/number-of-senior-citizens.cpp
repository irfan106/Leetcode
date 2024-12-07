class Solution {
public:
    int countSeniors(vector<string>& nums) {
        int ct=0;
        for(auto &it: nums){
            string s1= it.substr(11,2);
            if(stoi(s1)>60) ct++;
            // cout<<s1<<endl;
        }
        return ct;
    }
};