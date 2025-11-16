// 思路
// 1.TreeNode* prev = nullptr;//prev为父节点 int sum = 0;//左叶子之和
// 2.void function(TreeNode* root)
// 3.if(root->left==nullptr&&root->right==nullptr&&prev->left==root) {sum+=root->val;return;}//判断是否为左叶子
// 4.if(root->left) TreeNode* tmp = prev; prev = root; function(root->left); prev = tmp;
// 5.if(root->right) TreeNode* tmp = prev; prev = root; function(root->right); prev = tmp;
// 6.if(root->left==nullptr&&root->right==nullptr) return 0;
// 7.prev = root; function(root);
// 8.return sum;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/sum-of-left-leaves/solutions/3832906/404-zuo-xie-zi-zhi-he-by-stellarvibes-1rb1/
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
    TreeNode* prev = nullptr;//prev为父节点
    int sum = 0;//左叶子之和
    void function(TreeNode* root)
    {
        if(root->left==nullptr&&root->right==nullptr&&prev->left==root) {sum+=root->val;return;}//判断是否为左叶子
        if(root->left)
        {
            TreeNode* tmp = prev;
            prev = root;
            function(root->left);
            prev = tmp;
        }
        if(root->right)
        {
            TreeNode* tmp = prev;
            prev = root;
            function(root->right);
            prev = tmp;
        }
        
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(root->left==nullptr&&root->right==nullptr) return 0;
        prev = root;
        function(root);
        return sum;
    }
};