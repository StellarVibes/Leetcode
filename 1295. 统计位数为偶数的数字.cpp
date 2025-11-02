// 思路
// 1.int compute(int num)
// 2.int count = 0;
// 3.while(num) num/=10; count++; //计算个数位
// 4.if(count%2==0) return 1; else return 0; //判断是否为偶数 个数位
// 5.for(auto&e:nums) ret+=compute(e);
// 6.return ret;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/find-numbers-with-even-number-of-digits/solutions/3821529/1295-tong-ji-wei-shu-wei-ou-shu-de-shu-z-t8kn/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int compute(int num)
    {
        int count = 0;
        while(num)//计算个数位
        {
            num/=10;
            count++;
        }
        if(count%2==0) return 1;//判断是否为偶数 个数位
        else return 0;
    }
    int findNumbers(vector<int>& nums) {
        int ret = 0;
        for(auto&e:nums)
            ret+=compute(e);
        return ret;
    }
};