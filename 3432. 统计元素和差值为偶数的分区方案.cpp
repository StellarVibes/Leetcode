// 思路
// 1.vector<int> tmp; int sum = 0,count = 0;
// 2.for(auto&e:nums)//前缀和
//             sum+=e; tmp.push_back(sum);
// 3.for(int i = 0;i<nums.size()-1;i++)
// 4.int left = tmp[i]; //左子数组
// 5.int right = tmp[tmp.size()-1]-tmp[i]; //右子数组
// 6.int ret = abs(left-right); //左子数组和右子数组之差
// 7.if(ret%2==0) count++;
// 8.return count;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/count-partitions-with-even-sum-difference/solutions/3849307/3432-tong-ji-yuan-su-he-chai-zhi-wei-ou-08dvm/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int countPartitions(vector<int>& nums) {
        vector<int> tmp;
        int sum = 0,count = 0;
        for(auto&e:nums)//前缀和
        {
            sum+=e;
            tmp.push_back(sum);
        }
        cout<<endl;
        for(int i = 0;i<nums.size()-1;i++)
        {
            int left = tmp[i]; //左子数组
            int right = tmp[tmp.size()-1]-tmp[i]; //右子数组
            int ret = abs(left-right); //左子数组和右子数组之差
            if(ret%2==0) count++;
        }
        return count;
    }
};