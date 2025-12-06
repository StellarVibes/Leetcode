// 思路
// 1.int count = 0;
// 2.for(int i = low;i<=high;i++) if(i%2==1) count++;
// 3.return count;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/count-odd-numbers-in-an-interval-range/solutions/3850710/1523-zai-qu-jian-fan-wei-nei-tong-ji-qi-7qiw3/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int countOdds(int low, int high) {
        int count = 0;
        for(int i = low;i<=high;i++)
        {
            if(i%2==1) count++;
        }
        return count;
    }
};