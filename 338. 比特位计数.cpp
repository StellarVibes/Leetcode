// 思路
// 1.vector<int> ret;
// 2.for(int i = 0;i<=n;i++)
// 3.int tmp = i,count = 0;
// 4.while(tmp)
//               if(tmp&0x01) count++;//位与
//               tmp = tmp>>1;//右移
// 5.ret.push_back(count);
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/counting-bits/solutions/3836184/338-bi-te-wei-ji-shu-by-stellarvibes-xizh/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ret;
        for(int i = 0;i<=n;i++)
        {
            int tmp = i,count = 0;
            while(tmp)
            {
                if(tmp&0x01) count++;//位与
                tmp = tmp>>1;//右移
            }
            ret.push_back(count);
        }
        return ret;
    }
};