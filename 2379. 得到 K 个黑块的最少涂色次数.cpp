// 思路
// 1.int ret = INT_MAX,len = k,count=0;
// 2.for(int left = 0,right =0;right<blocks.size();)
// 3.if(len) len--;
//             if(blocks[right++]=='W') count++;//计算需要修改的个数
//             if(len==0&&ret>count) ret = count;//保存k个里需要修改的最小操作数
// 4.else
//             if(blocks[left++]=='W') count--;//移动左指针
//             len++;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/minimum-recolors-to-get-k-consecutive-black-blocks/solutions/3827878/2379-de-dao-k-ge-hei-kuai-de-zui-shao-tu-mnw7/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int ret = INT_MAX,len = k,count=0;
        for(int left = 0,right =0;right<blocks.size();)
        {
            if(len)
            {
                len--;
                if(blocks[right++]=='W') count++;//计算需要修改的个数
                if(len==0&&ret>count) ret = count;//保存k个里需要修改的最小操作数
            }
            else
            {
                if(blocks[left++]=='W') count--;//移动左指针
                len++;
            }
        }
        return ret;
    }
};