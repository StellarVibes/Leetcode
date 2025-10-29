// 思路
// 1.if(p==nullptr&&q==nullptr) return true;//同时为空返回true
// 2. if(p==nullptr&&q!=nullptr) return false;//没有同时存在或者val值不同返回flase
// 3.if(p!=nullptr&&q==nullptr) return false;
// 4.if(p->val!=q->val) return false;
// 5.return issame(p->left,q->left)&&issame(p->right,q->right);//递归
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/same-tree/solutions/3818381/100-xiang-tong-de-shu-by-stellarvibes-bppt/
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
    bool issame(TreeNode* p, TreeNode* q)
    {
        if(p==nullptr&&q==nullptr) return true;//同时为空返回true
        if(p==nullptr&&q!=nullptr) return false;//没有同时存在或者val值不同返回flase
        if(p!=nullptr&&q==nullptr) return false;
        if(p->val!=q->val) return false;
        return issame(p->left,q->left)&&issame(p->right,q->right);//递归
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return issame(p,q);
    }
};