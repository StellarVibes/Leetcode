// 思路
// 1.int left = 0,right = 0; // 前缀和
// 2.for(auto&e:nums) right+=e;
// 3.for(int i = 0;i<nums.size();i++)
// 4.if(left==right-nums[i]) return i; // 左侧元素和等于右侧元素和
// 5.left+=nums[i]; right-=nums[i];
// 6.return -1;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/find-pivot-index/solutions/3866634/724-xun-zhao-shu-zu-de-zhong-xin-xia-bia-axup/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left = 0,right = 0;//前缀和
        for(auto&e:nums) right+=e;
        for(int i = 0;i<nums.size();i++)
        {
            if(left==right-nums[i]) return i;//左侧元素和等于右侧元素和
            left+=nums[i];
            right-=nums[i];
        }
        return -1;
    }
};