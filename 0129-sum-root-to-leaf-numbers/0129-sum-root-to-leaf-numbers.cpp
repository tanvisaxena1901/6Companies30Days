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
    void sumnode(TreeNode* root,int curr,int&ans)
    {
        if(root==NULL)return;
        curr=curr*10+root->val;
        if(root->left==NULL && root->right==NULL)
        {
            ans+=curr;
        }
         sumnode(root->left,curr,ans);
       sumnode(root->right,curr,ans);
    }
    int sumNumbers(TreeNode* root) {
        //int curr=0;
        int ans=0;
        sumnode(root,0,ans);
        return ans;
    }
};