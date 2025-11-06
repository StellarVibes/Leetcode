// 思路
// 1.int ret = 0;
// 2.for(int i = 0;i<arr.size()-2;i++)
// 3.for(int j = i+1;j<arr.size()-1;j++)
// 4.for(int k = j+1;k<arr.size();k++)
//              if(abs(arr[i] - arr[j])<=a && abs(arr[j] - arr[k])<=b && abs(arr[i] - arr[k])<=c) ret++;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/count-good-triplets/solutions/3825428/1534-tong-ji-hao-san-yuan-zu-by-stellarv-w28l/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int ret = 0;
        for(int i = 0;i<arr.size()-2;i++)
        {
            for(int j = i+1;j<arr.size()-1;j++)
            {
                for(int k = j+1;k<arr.size();k++)
                {
                   if(abs(arr[i] - arr[j])<=a && abs(arr[j] - arr[k])<=b && abs(arr[i] - arr[k])<=c) ret++;
                }
            }
        }
        return ret;
    }
};