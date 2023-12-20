class Solution {
public:
    int buyChoco(vector<int>&  nums, int money) {
        int ans;
        sort(nums.begin(),nums.end());
        if(nums[0]+nums[1]>money) return money;
        else return money-(nums[0]+nums[1]);
    }
};