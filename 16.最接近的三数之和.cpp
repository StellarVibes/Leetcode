// 思路
// 1.sort(nums.begin(),nums.end());//排序 区间
// 2.for(int i = nums.size()-1;i>1;i--)//从右往左
// 3.while(left<right)
//                if(abs(nums[left]+nums[right]+nums[i]-target)<abs(num))//记录更小值
//                        num = nums[left]+nums[right]+nums[i]-target;
//                else 
//                        if(nums[left]+nums[right]+nums[i]-target>0) right--; //大于target right--
//                        else if(nums[left]+nums[right]+nums[i]-target<0) left++; //小于target left++
// 4.return num==INT_MAX?0:num+target;//三个数的和
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/3sum-closest/solutions/3816642/16zui-jie-jin-de-san-shu-zhi-he-by-stell-hqtw/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int num = INT_MAX;
        sort(nums.begin(),nums.end());//排序 区间
        for(int i = nums.size()-1;i>1;i--)//从右往左
        {
                int left = 0,right = i-1;
                while(left<right)
                {
                    if(abs(nums[left]+nums[right]+nums[i]-target)<abs(num))//记录更小值
                    {
                        num = nums[left]+nums[right]+nums[i]-target;
                    }
                    else
                    {
                        if(nums[left]+nums[right]+nums[i]-target>0)//大于target right--
                        {
                            right--;
                        }
                        else if(nums[left]+nums[right]+nums[i]-target<0)//小于target left++
                        {
                            left++;
                        }
                        else if(nums[left]+nums[right]+nums[i]-target==0) 
                            return nums[left]+nums[right]+nums[i];
                    }
                }
        }
        return num==INT_MAX?0:num+target;//三个数的和
    }
};