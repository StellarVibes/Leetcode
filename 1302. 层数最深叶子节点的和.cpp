// 思路
// 1.vector<int> v;//通过层序遍历保存每层之和
// 2.queue<TreeNode*> st;//先进先出 队列
// 3.st.push(root);
// 4.while(st.size()) int sum = 0; int size = st.size();//保存每层节点个数
// 5.while(size--) TreeNode* node = st.front();//取队头
//                 st.pop(); sum+=node->val;
//                 if(node->left) st.push(node->left);
//                 if(node->right) st.push(node->right);
// 6.v.push_back(sum);
// 7.return v[v.size()-1];//返回最后一层之和
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/deepest-leaves-sum/solutions/3821612/1302-ceng-shu-zui-shen-xie-zi-jie-dian-d-git2/
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
    int deepestLeavesSum(TreeNode* root) {
        vector<int> v;//通过层序遍历保存每层之和
        queue<TreeNode*> st;//先进先出 队列
        st.push(root);
        while(st.size())
        {
            int sum = 0;
            int size = st.size();//保存每层节点个数
            while(size--)
            {
                TreeNode* node = st.front();//取队头
                st.pop();
                sum+=node->val;
                if(node->left) st.push(node->left);
                if(node->right) st.push(node->right);
            }
            v.push_back(sum);
        }
        return v[v.size()-1];//返回最后一层之和
    }
};