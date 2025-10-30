// 思路
// 1.funciton(n,n);
// 2.int left=0,right = 0; vector<string> ret; string s;
// 3.void funciton(int left ,int right)
// 4.if(left==0&&right==0)//空节点返回 ret.push_back(s); return;
// 5.if(left) s.push_back('('); funciton(left-1 ,right);//递归 s.pop_back();
// 6.if(left==0||(right&&left<right)) //left==0时只能加')' {'('}left小于right{')'}时才可以加')'
//            s.push_back(')');
//            funciton(left,right-1);//递归
//            s.pop_back();
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/generate-parentheses/solutions/3819714/22-gua-hao-sheng-cheng-by-stellarvibes-xoni/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int left=0,right = 0;
    vector<string> ret;
    string s;
    void funciton(int left ,int right)
    {
        if(left==0&&right==0)//空节点返回
        {
            ret.push_back(s);
            return;
        }
        if(left)
        {
            s.push_back('(');
            funciton(left-1 ,right);//递归
            s.pop_back();
        }
        if(left==0||(right&&left<right))//left==0时只能加')' {'('}left小于right{')'}时才可以加')'
        {
            s.push_back(')');
            funciton(left,right-1);//递归
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        left = n,right = n;
        funciton(n,n);
        return ret;
    }
};