// 思路
// 1.if(root==nullptr) return 0;
// 2.queue<TreeNode*> pq; pq.push(root); int count = 0;
// 3.while(pq.size()) // 层序遍历
// 4.int n = pq.size(); count++;
// 5.for(int i = 0;i<n;i++)
// 6.TreeNode* node = pq.front(); pq.pop();
// 7.if(node->left==nullptr&&node->right==nullptr) return count; // 叶子节点
// 8.if(node->left!=nullptr) pq.push(node->left);
// 9.if(node->right!=nullptr) pq.push(node->right);

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/minimum-depth-of-binary-tree/solutions/3895598/111-er-cha-shu-de-zui-xiao-shen-du-by-st-89jk/
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
    int minDepth(TreeNode* root) {
        if(root==nullptr) return 0;
        queue<TreeNode*> pq;
        pq.push(root);
        int count = 0;
        while(pq.size()) // 层序遍历
        {
            int n = pq.size();
            count++;
            for(int i = 0;i<n;i++)
            {
                TreeNode* node = pq.front();
                pq.pop();
                if(node->left==nullptr&&node->right==nullptr) return count; // 叶子节点
                if(node->left!=nullptr) pq.push(node->left);
                if(node->right!=nullptr) pq.push(node->right);
            }
        }
        return 0;
    }
};