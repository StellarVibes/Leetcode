// 思路
// 1.int left =0,right = price.size()-1;
// 2.while(left<right)
// 3.if(price[left]+price[right]>target)  right--; //right左移减小sum
// 4.else if(price[left]+price[right]<target) left++; //left右移增加sum
// 5.else return {price[left],price[right]}; //等于返回
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/he-wei-sde-liang-ge-shu-zi-lcof/solutions/3860509/lcr-179-cha-zhao-zong-jie-ge-wei-mu-biao-hyei/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    vector<int> twoSum(vector<int>& price, int target) {
        int left =0,right = price.size()-1;
        while(left<right)
        {
            if(price[left]+price[right]>target) //right左移减小sum
            {
                right--;
            }
            else if(price[left]+price[right]<target) //left右移增加sum
            {
                left++;
            }
            else //等于返回
            {
                return {price[left],price[right]};
            }
        }
        return {0,0};
    }
};