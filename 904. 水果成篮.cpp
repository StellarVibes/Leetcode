// 思路
// 1.long long arr[100010]={0}; // 0 <= fruits[i] < fruits.length
// 2.int nums = 0,sum = 0,ret = 0,left = 0;
// 3.for(auto&e:fruits) arr[e]++;sum++; //水果数目
// 4.if(arr[e]==1) nums++; //水果种类
// 5.if(nums==3) ret = max(ret,sum-1);
// 6.while(sum>=0&&nums==3) //两种水果
//               arr[fruits[left]]--;
//               if(arr[fruits[left]]==0) nums--;
//               sum--;left++;
// 7.return max(ret,sum); //数组内小于等于两种水果
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/fruit-into-baskets/solutions/3862566/904-shui-guo-cheng-lan-by-stellarvibes-h16a/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        long long arr[100010]={0}; // 0 <= fruits[i] < fruits.length
        int nums = 0,sum = 0,ret = 0,left = 0;
        for(auto&e:fruits)
        {
            arr[e]++;
            sum++; //水果数目
            if(arr[e]==1) nums++;//水果种类
            if(nums==3)
            {
                ret = max(ret,sum-1);
                while(sum>=0&&nums==3)//两种水果
                {
                    arr[fruits[left]]--;
                    if(arr[fruits[left]]==0) nums--;
                    sum--;
                    left++;
                }
            }
        }
        return max(ret,sum);//数组内小于等于两种水果
    }
};