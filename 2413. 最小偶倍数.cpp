// 思路
// 1.for(int i = n;;i++) if(i%2==0&&i%n==0) return i;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/smallest-even-multiple/solutions/3825404/2413-zui-xiao-ou-bei-shu-by-stellarvibes-3dt9/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int smallestEvenMultiple(int n) {
        for(int i = n;;i++)
        {
            if(i%2==0&&i%n==0) return i;
        }
        return 0;
    }
};