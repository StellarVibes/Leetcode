// 思路
// 1.定义vector<pair<int,int>> tmp
// 2.tmp.push_back({nums[i],i});//排序后下标改变 用.second进行保存
// 3.sort(tmp.begin(),tmp.end());//默认用.first进行排序
// 4.for(int i = tmp.size()-1;i>=0;i--)//从右向左
// 5.tmp[left].first+tmp[i].first==target)//用.first进行比较
// 6.return {tmp[left].second,tmp[i].second};//默认构造 return .second(未修改过的下标)

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/two-sum/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> tmp;//定义数组
        for(int i = 0;i<nums.size();i++)//排序后下标改变 用.second进行保存
            tmp.push_back({nums[i],i});
        sort(tmp.begin(),tmp.end());//默认用.first进行排序
        for(int i = tmp.size()-1;i>=0;i--)//从右向左
        {
            int left = 0;
            while(left<i)//防止越界
            {
                if(tmp[left].first+tmp[i].first==target)//用.first进行比较 return .second
                {
                    return {tmp[left].second,tmp[i].second};//默认构造
                }
                left++;
            }
        }
        return {};
    }
};