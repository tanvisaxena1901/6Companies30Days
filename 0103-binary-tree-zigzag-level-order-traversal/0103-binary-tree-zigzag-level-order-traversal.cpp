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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>v;
        vector<int>temp;
        int cnt=1;
        if(root==NULL)return v;
        while(!q.empty())
        {
            int len=q.size();
            while(len--)
            {
                TreeNode* node=q.front();
                q.pop();
                temp.push_back(node->val);
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
            if(cnt%2==0){
                reverse(temp.begin(),temp.end());
                v.push_back(temp);
            }
            else
            {
                v.push_back(temp);
            }
            temp.clear();
            cnt++;
        }
        return v;
    }
};