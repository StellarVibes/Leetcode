// 思路
// 1.int ret = 1;
// 2.for(auto&e:nums)
// 3.if(e==0) return 0; //x 是等于 0 ，返回 0
// 4.if(e>0) ret *= 1; //x 是正数，返回 1
// 5.if(e<0) ret *= -1; //x 是负数，返回 -1
// 6.return ret;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/sign-of-the-product-of-an-array/solutions/3851425/1822-shu-zu-yuan-su-ji-de-fu-hao-by-stel-gqom/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ret = 1;
        for(auto&e:nums)
        {
            if(e==0) return 0; //x 是等于 0 ，返回 0
            if(e>0) ret *= 1; //x 是正数，返回 1
            if(e<0) ret *= -1; //x 是负数，返回 -1
        }
        return ret;
    }
};