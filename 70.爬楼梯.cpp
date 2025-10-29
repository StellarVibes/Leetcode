// 思路
// 1.vector<int> v; v={0,1,2,3,5}; //减少重复计算
// 2. if(v.size()>n) return v[n];//返回已经计算过的值
// 3.v.push_back(function(n-1)+function(n-2));
// 4.return v[n];
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/climbing-stairs/solutions/3818318/70pa-lou-ti-by-stellarvibes-4da2/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    vector<int> v;//减少重复计算
    int function(int n)
    {
        if(v.size()>n)
        {
            return v[n];//返回已经计算过的值
        }
        v.push_back(function(n-1)+function(n-2));
        return v[n];
    }
    int climbStairs(int n) {
        if(n<=3) return n;
        v={0,1,2,3,5};
        return function(n-1)+function(n-2);
    }
};