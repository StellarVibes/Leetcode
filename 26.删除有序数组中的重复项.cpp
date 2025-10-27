// 思路
// 1.int arr[201]={0};//[-100,100] 映射
// 2.for(int right =nums.size()-1;right>=left;)//从右往左
//            arr[nums[left]+100]++;
//            if(arr[nums[left]+100]>1)//重复
//                    arr[nums[left]+100]--; swap(nums[left],nums[right]);//交换 right--;  
//            else left++;
// 3.sort(nums.begin(),nums.begin()+left);//相对顺序一致
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/remove-duplicates-from-sorted-array/solutions/3817018/26shan-chu-you-xu-shu-zu-zhong-de-zhong-8te86/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int arr[201]={0};//[-100,100] 映射
        int left = 0;
        for(int right =nums.size()-1;right>=left;)//从右往左
        {
            arr[nums[left]+100]++;
            if(arr[nums[left]+100]>1)//重复
            {
                arr[nums[left]+100]--;
                swap(nums[left],nums[right]);//交换
                right--;
            }
            else{
                left++;
            }
        }
        sort(nums.begin(),nums.begin()+left);//相对顺序一致
        return left;
    }
};