// 思路
// 1.int sum = 0,ret= 0,len = -1,left = -1;
// 2.for(auto&e:nums) sum+=e;
// 3.sum-=x;// 正难则反
// 4.for(int i = 0;i<nums.size();i++) ret+=nums[i];
// 5.if(ret==sum)//当ret==sum时，x为零
//             len = max(len,i-left);//(left,i]
// 6.else if(ret>sum)
//             while(left<i&&ret>sum) ret-=nums[++left];
//             if(ret==sum) len = max(len,i-left);//最长
// 7.if(len==-1) return len;
// 8.return nums.size()-len;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/minimum-operations-to-reduce-x-to-zero/solutions/3861296/1658-jiang-x-jian-dao-0-de-zui-xiao-cao-olo36/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum = 0,ret= 0,len = -1,left = -1;
        for(auto&e:nums) sum+=e;
        sum-=x;// 正难则反
        for(int i = 0;i<nums.size();i++)
        {
            ret+=nums[i];
            if(ret==sum)//当ret==sum时，x为零
            {
                len = max(len,i-left);//(left,i]
            }
            else if(ret>sum)
            {
                while(left<i&&ret>sum) ret-=nums[++left];
                if(ret==sum) len = max(len,i-left);//最长
            }
        }
        if(len==-1) return len;
        return nums.size()-len;
    }
};