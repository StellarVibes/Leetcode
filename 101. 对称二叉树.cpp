// 思路
// 1.issymmetric(root->left,root->right);
// 2.if(left==nullptr&&right!=nullptr) return false; //不同时为空 返回false
// 3.if(left!=nullptr&&right==nullptr) return false;
// 4.if(left==nullptr&&right==nullptr) return true;
// 5.if(left->val!=right->val) return false; //val值不同
// 6.return issymmetric(left->left,right->right)&&issymmetric(left->right,right->left); //递归
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/symmetric-tree/solutions/3818426/101-dui-cheng-er-cha-shu-by-stellarvibes-75w8/
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
    bool issymmetric(TreeNode* left,TreeNode* right)
    {
        if(left==nullptr&&right!=nullptr) return false;//不同时为空 返回false
        if(left!=nullptr&&right==nullptr) return false;
        if(left==nullptr&&right==nullptr) return true;
        if(left->val!=right->val) return false;//val值不同
        return issymmetric(left->left,right->right)&&issymmetric(left->right,right->left);//递归
    }
    bool isSymmetric(TreeNode* root) {
        return issymmetric(root->left,root->right);
    }
};