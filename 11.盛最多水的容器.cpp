// 思路
// 1.int left = 0,right = height.size()-1,ret = 0;
// 2.int wide = min(height[left],height[right]);//求高度
// 3.ret = max(ret,(right-left)*wide);
// 4.if(height[left]<height[right]) left++;else right--;
// //long一定减小 所以移动小的指针来尽可能找到更大的wide long小*wide小->ret小 long小*wide大->ret可能为大
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/container-with-most-water/solutions/3815257/11sheng-zui-duo-shui-de-rong-qi-by-stell-wsua/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0,right = height.size()-1,ret = 0;
        while(left<right)
        {
            int wide = min(height[left],height[right]);//求高度
            ret = max(ret,(right-left)*wide);
            if(height[left]<height[right])//long一定减小 所以移动小的指针来尽可能找到更大的wide long小*wide小->ret小 long小*wide大->ret可能为大
                left++;
            else
                right--;
        }
        return ret;
    }
};