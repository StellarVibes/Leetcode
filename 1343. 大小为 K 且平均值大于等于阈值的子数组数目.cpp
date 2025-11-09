// 思路
// 1.int len = k,sum = 0,count=0;
// 2.for(int left=0 ,i = 0;i<arr.size();)//[left,right]
// 3.if(len) len--; sum+=arr[i++];//right
// 4.if(len==0&&sum>=threshold*k) count++;//长度为k且平均值大于等于threshold的子数组数目
// 5.else len++; sum-=arr[left++];//left
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold/solutions/3827008/1343-da-xiao-wei-k-qie-ping-jun-zhi-da-y-0nbt/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int len = k,sum = 0,count=0;
        for(int left=0 ,i = 0;i<arr.size();)//[left,right]
        {
            if(len)
            {
                len--;
                sum+=arr[i++];//right
                if(len==0&&sum>=threshold*k) count++;//长度为k且平均值大于等于threshold的子数组数目
            }
            else
            {
                len++;
                sum-=arr[left++];//left
            }
            
        }
        return count;
    }
};