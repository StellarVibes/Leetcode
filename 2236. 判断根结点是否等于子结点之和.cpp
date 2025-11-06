// 思路
// 1.return root->val==root->left->val+root->right->val;//判断根结点的值是否等于两个子结点值之和
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/root-equals-sum-of-children/solutions/3825406/2236-pan-duan-gen-jie-dian-shi-fou-deng-2qajc/
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
    bool checkTree(TreeNode* root) {
        return root->val==root->left->val+root->right->val;//判断根结点的值是否等于两个子结点值之和
    }
};