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
    void solve(TreeNode* root,vector<int>&num){
        if(!root) return;
        if(root->left==NULL && root->right==NULL){
            num.push_back(root->val);
            return;
        }
        solve(root->left,num);
        solve(root->right, num);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>num1,num2;
        solve(root1, num1);
        solve(root2, num2);
        return num1==num2;
    }
};