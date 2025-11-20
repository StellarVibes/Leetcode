// 思路
// 1.int ret = 0,count = 0;
// 2.for(auto&e:nums)
// 3.if(e==1) count++;//计算1的个数
// 3.else
//          if(count>ret) ret = count;
//          count = 0;
// 4.if(count>ret) ret = count;
// 5.return ret;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/max-consecutive-ones/solutions/3837134/485-zui-da-lian-xu-1-de-ge-shu-by-stella-swco/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ret = 0,count = 0;
        for(auto&e:nums)
        {
            if(e==1)
            {
                count++;//计算1的个数
            }
            else
            {
                if(count>ret) ret = count;
                count = 0;
            }
        }
        if(count>ret) ret = count;
        return ret;
    }
};