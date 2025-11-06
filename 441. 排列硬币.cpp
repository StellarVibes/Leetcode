// 思路
// 1.int count = 0;
// 2.for(int i = 1;;i++) n-=i; //第i行必有i枚硬币
// 3.if(n>=0) count++; else break;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/arranging-coins/solutions/3825117/441-pai-lie-ying-bi-by-stellarvibes-6bd1/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int arrangeCoins(int n) {
        int count = 0;
        for(int i = 1;;i++)
        {
            n-=i;//第i行必有i枚硬币
            if(n>=0) count++;
            else break;
        }
        return count;
    }
};