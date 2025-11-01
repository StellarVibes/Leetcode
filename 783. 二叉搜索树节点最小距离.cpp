// 思路
// 1.vector<int> v;//用中序遍历构建升序数组
// 2.void function(TreeNode* root)
//         if(root==nullptr) return;
//         function(root->left); v.push_back(root->val);//中序遍历 function(root->right);
// 3.int ret = INT_MAX;
// 4.for(int i = 0;i<v.size()-1;i++) int num = v[i+1]-v[i]; if(ret>num) ret = num;//计算最小差值
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/minimum-distance-between-bst-nodes/solutions/3820801/783-er-cha-sou-suo-shu-jie-dian-zui-xiao-6x5s/
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
    vector<int> v;//用中序遍历构建升序数组
    void function(TreeNode* root)
    {
        if(root==nullptr) return;
        function(root->left);
        v.push_back(root->val);//中序遍历
        function(root->right);
    }
    int minDiffInBST(TreeNode* root) {
        function(root);
        int ret = INT_MAX;
        for(int i = 0;i<v.size()-1;i++)
        {
            int num = v[i+1]-v[i];
            if(ret>num) ret = num;//计算最小差值
        }
        return ret;
    }
};