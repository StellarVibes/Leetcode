// 思路
// 1.int ret = 0;
// 2.for(int i = 0;i<n;i++) //n == nums.length
//             ret^=start+2*i; //nums[i] = start + 2*i
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/xor-operation-in-an-array/solutions/3825412/1486-shu-zu-yi-huo-cao-zuo-by-stellarvib-ykzv/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int xorOperation(int n, int start) {
        int ret = 0;
        for(int i = 0;i<n;i++)//n == nums.length
        {
            ret^=start+2*i;//nums[i] = start + 2*i
        }
        return ret;
    }
};