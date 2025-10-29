// 思路
// 1.vector<int> v;//全局
// 2.if(root==nullptr) return;
// 3.function(root->left);
// 4. v.push_back(root->val);//中序遍历
// 5.function(root->right);
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/binary-tree-inorder-traversal/solutions/3818368/94-er-cha-shu-de-zhong-xu-bian-li-by-ste-nxlx/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

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
    vector<int> v;//全局
    void function(TreeNode* root)//递归
    {
        if(root==nullptr) return;
        function(root->left);
        v.push_back(root->val);//中序遍历
        function(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
       function(root);
       return v;
    }
};