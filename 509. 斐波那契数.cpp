// 思路
// 1.vector<long long> v;
// 2.v.push_back(0); //F(0) = 0
// 3.v.push_back(1); //F(1) = 1
// 4.for(int i = 2;i<=n;i++) v.push_back(v[i-1]+v[i-2]); //F(n) = F(n - 1) + F(n - 2)
// 5.return v[n];
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/fibonacci-number/solutions/3836794/509-fei-bo-na-qi-shu-by-stellarvibes-kbky/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int fib(int n) {
        vector<long long> v;
        v.push_back(0);//F(0) = 0
        v.push_back(1);//F(1) = 1
        for(int i = 2;i<=n;i++)
        {
            v.push_back(v[i-1]+v[i-2]);//F(n) = F(n - 1) + F(n - 2)
        }
        return v[n];
    }
};