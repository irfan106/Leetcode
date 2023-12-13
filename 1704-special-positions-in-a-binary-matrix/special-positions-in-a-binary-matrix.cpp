class Solution {
public:
    int numSpecial(vector<vector<int>>& nums) {
        int m=nums[0].size(),n=nums.size();
        int ct=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int flag=0;
                if(nums[i][j]==1){
                    for(int k=0;k<n;k++){
                        if(k!=i && nums[k][j]==1){
                            flag=1;
                            break;
                        }
                    }
                    for(int k=0;k<m;k++){
                        if(k!=j && nums[i][k]==1){
                            flag=1;
                            break;
                        }
                    }
                    if(flag==0) ct++;
                }
            }
        }
        return ct;
    }
};