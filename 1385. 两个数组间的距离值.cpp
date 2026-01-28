// 思路
// 1.int ret = 0;
// 2.for(int i = 0;i<arr1.size();i++)
// 3.int count= 0 ;
// 4.for(int j = 0;j<arr2.size();j++)
// 5.if(abs(arr1[i]-arr2[j])>d) count++; else break; // |arr1[i]-arr2[j]| <= d
// 6.if(count==arr2.size()) ret++;

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/find-the-distance-value-between-two-arrays/solutions/3891132/1385-liang-ge-shu-zu-jian-de-ju-chi-zhi-zcc1f/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ret = 0;
        for(int i = 0;i<arr1.size();i++)
        {
            int count= 0 ;
            for(int j = 0;j<arr2.size();j++)
            {
                if(abs(arr1[i]-arr2[j])>d) count++; // |arr1[i]-arr2[j]| <= d
                else break;
            }
            if(count==arr2.size()) ret++;
        }
        return ret;
    }
};