// 思路
// 1.queue<TreeNode*> st;
// 2.long long ret = INT_MIN,count = 0,tmp = 0; // -105 <= Node.val <= 105
// 3.st.push(root);
// 4.while(st.size()) long long size = st.size(),sum = 0; // 记录当前层数
// 5.count++; // 层数
// 6.for(int i = 0;i<size;i++) TreeNode* top = st.front(); st.pop();
// 7.if(top->left) st.push(top->left);
// 8.if(top->right) st.push(top->right);
// 9.sum+=top->val;
// 10.if(ret < sum) ret = sum; tmp = count;//总和最大 & 层号最小
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/maximum-level-sum-of-a-binary-tree/solutions/3873700/1161-zui-da-ceng-nei-yuan-su-he-by-stell-3jj9/
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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> st;
        long long ret = INT_MIN,count = 0,tmp = 0; // -105 <= Node.val <= 105
        st.push(root);
        while(st.size())
        {
            long long size = st.size(),sum = 0; // 记录当前层数
            count++; // 层数
            for(int i = 0;i<size;i++)
            {
                TreeNode* top = st.front();
                st.pop();
                if(top->left) st.push(top->left);
                if(top->right) st.push(top->right);
                sum+=top->val;
            }
            if(ret < sum) //总和最大 & 层号最小
            {
                ret = sum;
                tmp = count;
            }
        }
        return tmp;
    }
};