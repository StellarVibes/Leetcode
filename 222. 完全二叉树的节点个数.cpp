// 思路
// 1.if(root==nullptr) return 0;
// 2.stack<TreeNode*> st;//用stack模拟 int ret = 0;
// 3.st.push(root);
// 4.while(st.size())
// 5.int size = st.size();//每层的个数
// 6.ret+=size;//每层的个数和即树的节点个数
// 7.for(int i = 0;i<size;i++)
//            TreeNode* node = st.top(); st.pop();
//             if(node->left) st.push(node->left); if(node->right) st.push(node->right);
// 8.return ret;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/count-complete-tree-nodes/solutions/3833263/222-wan-quan-er-cha-shu-de-jie-dian-ge-s-3d7h/
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
    int countNodes(TreeNode* root) {
        if(root==nullptr) return 0;
        stack<TreeNode*> st;//用stack模拟
        int ret = 0;
        st.push(root);
        while(st.size())
        {
            int size = st.size();//每层的个数
            ret+=size;//每层的个数和即树的节点个数
            for(int i = 0;i<size;i++)
            {
                TreeNode* node = st.top();
                st.pop();
                if(node->left) st.push(node->left);
                if(node->right) st.push(node->right);
            }
        }
        return ret;
    }
};