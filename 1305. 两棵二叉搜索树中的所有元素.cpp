// 思路
// 1.vector<int> v;
// 2.void function(TreeNode* root)//中序遍历 升序数组
//         if(root==nullptr) return;
//         function(root->left); v.push_back(root->val); function(root->right);
// 3.function(root1); function(root2);
// 4.sort(v.begin(),v.end());
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/all-elements-in-two-binary-search-trees/solutions/3821629/1305-liang-ke-er-cha-sou-suo-shu-zhong-d-rfvv/
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
    vector<int> v;
    void function(TreeNode* root)//中序遍历 升序数组
    {
        if(root==nullptr) return;
        function(root->left);
        v.push_back(root->val);
        function(root->right);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        function(root1);
        function(root2);
        sort(v.begin(),v.end());
        return v;
    }
};