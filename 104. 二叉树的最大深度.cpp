// 思路
// 1.int ret = 0;
// 2.if(root==nullptr) return ret;//空节点返回ret
// 3.ret++;//进入时ret++
// 4.int left = maxdepth(root->left);//左递归
// 5.int right = maxdepth(root->right);//右递归
// 6.ret--;//退出后ret--
// 7.return max(left,right);//最长路径
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/maximum-depth-of-binary-tree/solutions/3818438/104-er-cha-shu-de-zui-da-shen-du-by-stel-jych/
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
    int ret = 0;
    int maxdepth(TreeNode* root)
    {
        if(root==nullptr) return ret;//空节点返回ret
        ret++;//进入时ret++
        int left = maxdepth(root->left);//左递归
        int right = maxdepth(root->right);//右递归
        ret--;//退出后ret--
        return max(left,right);//最长路径
    }
    int maxDepth(TreeNode* root) {
        return maxdepth(root);
    }
};