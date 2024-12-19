class Solution {
public:
    bool check(vector<int>& nums) {
        // if(nums.size()<=1) return true;
        // int minindex=-1, mini=INT_MAX;
        // for(int i=0;i<nums.size();i++){
        //     if(mini>nums[i]){
        //         minindex=i;
        //         mini=nums[i];
        //     }
        // }
        // for(int j=minindex+1;j<nums.size();j++){
        //     if(nums[j]<nums[j-1]) return false;
        // }
        // cout<<"here"<<endl;
        // for(int j=minindex-1; j>0; j--){
        //     if(nums[j]<nums[j-1]) return false;
        // }
        // cout<<"here"<<endl;
        // return true;
        int peak=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>nums[(i+1)%n]) peak++;
            if(peak>1) return false;
        }
        return true;
    }
};