/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int ans=0;
    int trav(TreeNode *r, int start){
        if(!r) return 0;
        int x= trav(r->left, start);
        int y= trav(r->right, start);
        if(r->val == start){
            ans=max(ans, max(x,y));
            return -1;
        }
        if(x>=0 and y>=0) return max(x,y)+1;
        ans=max(ans,abs(x)+abs(y));
        return min(x,y)-1;
    }
    int amountOfTime(TreeNode* root, int start) {
        ans=0;
        int k= trav(root, start);
        return ans;
    }
};