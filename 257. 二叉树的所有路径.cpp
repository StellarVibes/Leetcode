// 思路
// 1. vector<string> vs; string path;//记录路径
// 2.void treepaths(TreeNode* root)//递归
// 3.string s = to_string(root->val);
// 4.if(root->left==nullptr&&root->right==nullptr)//叶子节点返回
//             path+=s; vs.push_back(path);
//             path.erase(path.size() - s.size());//删除val return;
// 5.path+=s; path+="->";
// 6.if(root->left!=nullptr) treepaths(root->left);
// 7.if(root->right!=nullptr)//优化 treepaths(root->right);
// 8.path.erase(path.size()-2);//删除"->" path.erase(path.size() - s.size());//删除val
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/binary-tree-paths/solutions/3820058/257-er-cha-shu-de-suo-you-lu-jing-by-ste-0gdb/
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
    vector<string> vs;
    string path;//记录路径
    void treepaths(TreeNode* root)//递归
    {
        string s = to_string(root->val);
        if(root->left==nullptr&&root->right==nullptr)//叶子节点返回
        {
            path+=s;
            vs.push_back(path);
            path.erase(path.size() - s.size());//删除val
            return;
        }
        path+=s;
        path+="->";
        if(root->left!=nullptr)//优化
            treepaths(root->left);
        if(root->right!=nullptr)//优化
            treepaths(root->right);
        path.erase(path.size()-2);//删除"->"
        path.erase(path.size() - s.size());//删除val
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        treepaths(root);
        return vs;
    }
};