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
    void dfs(TreeNode* root, string &ans){
      if(!root) return;
      ans+=to_string(root->val);
      if(root->left || root->right){
        ans+="(";
        dfs(root->left,ans);
        ans+=")";
      }
      if(root->right){
        ans+="(";
        dfs(root->right,ans);
        ans+=")";
      }   
    }
    string tree2str(TreeNode* root) {
        string ans="";
        dfs(root,ans);
        return ans;
    }
};