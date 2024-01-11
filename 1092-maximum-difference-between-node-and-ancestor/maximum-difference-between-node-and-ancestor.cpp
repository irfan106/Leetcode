/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode* root , int maxi,int mini,int &ans){
        if(root==NULL) return;
        int val1=mini=min(root->val,mini);
        int val2=maxi=max(root->val,maxi);
        ans=max(ans,val2-val1);
        dfs(root->left,val2,val1,ans);
        dfs(root->right,val2,val1,ans);
        
    }
    int maxAncestorDiff(TreeNode* root) {
        if(root==NULL) return -1;
        int maxi=INT_MIN;
        int mini=INT_MAX;
        int ans=0;
        dfs(root,maxi,mini,ans);
        return ans;
    }
};