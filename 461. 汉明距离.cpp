// 思路
// 1.int count = 0;
// 2.while(x||y)
// 3.count+=(x&0x01)^(y&0x01);//通过异或来判断是否需要修改 相同为零 相异为一
// 4.if(x) x=x>>1;//除2
// 5.if(y) y=y>>1;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/hamming-distance/solutions/3825175/461-yi-ming-ju-chi-by-stellarvibes-m09z/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int hammingDistance(int x, int y) {
        int count = 0;
        while(x||y)
        {
            count+=(x&0x01)^(y&0x01);//通过异或来判断是否需要修改 相同为零 相异为一
            if(x) x=x>>1;//除2
            if(y) y=y>>1;
        }
        return count;
    }
};