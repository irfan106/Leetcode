class Solution {
public:
    vector<int> getNSL(vector<int>& nums,int n){
        stack<int>st;
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            if(st.empty()){
                ans[i]=-1;
            }else{
                while(!st.empty() && nums[st.top()]>nums[i]){
                    st.pop();
                }
                ans[i]=st.empty() ? -1 :st.top();
            }
            st.push(i);
        }
        return ans;
    }
    vector<int> getNSR(vector<int>& nums,int n){
        stack<int>st;
        vector<int>ans(n);
        for(int i=n-1;i>=0;i--){
            if(st.empty()){
                ans[i]=n;
            }else{
                while(!st.empty() && nums[st.top()]>=nums[i]){
                    st.pop();
                }
                ans[i]=st.empty() ? n :st.top();
            }
            st.push(i);
        }
        return ans;
    }
    int sumSubarrayMins(vector<int>& nums) {
        int n=nums.size();
        vector<int>NSL = getNSL(nums,n);
        vector<int>NSR = getNSR(nums,n);

        long long sum =0;
        int M =1e9+7;
        for(int i=0;i<n;i++){
            long long ls=i-NSL[i];
            long long rs= NSR[i]-i;
            long long total = ls*rs;
            long long totalsum = nums[i]*total;
            sum=(sum+totalsum)%M;
        }
        return sum;
    }
};