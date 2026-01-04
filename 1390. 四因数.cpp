// 思路
// 1.int ret = 0;
// 2.for(auto&e:nums)
// 3.vector<int> v; int sum = 1 + e;
// 4.for(int i = 2;i<e;i++) 
// 5.if(e%i==0) sum+=i; v.push_back(i);
// 6.if(v.size()==3) break; // 提前结束
// 7.if(v.size()==2) ret+=sum; // 除去 1 和 e 
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/four-divisors/solutions/3872472/1390-si-yin-shu-by-stellarvibes-2tmg/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ret = 0;
        for(auto&e:nums)
        {
            vector<int> v;
            int sum = 1 + e;
            for(int i = 2;i<e;i++) 
            {
                if(e%i==0)
                {
                    sum+=i;
                    v.push_back(i);
                    if(v.size()==3) break; // 提前结束
                }
            }
            if(v.size()==2) ret+=sum; // 除去 1 和 e 
        }
        return ret;
    }
};