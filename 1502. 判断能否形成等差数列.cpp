// 思路
// 1.sort(arr.begin(),arr.end());//排序
// 2.int d = arr[1]-arr[0];//计算差值
// 3.for(int i = 2;i<arr.size();i++)
//             if(arr[i]-arr[i-1]!=d) return false;//判断相邻两项的差是否相等
// 4.return true;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/can-make-arithmetic-progression-from-sequence/solutions/3843570/1502-pan-duan-neng-fou-xing-cheng-deng-c-rnhl/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());//排序
        int d = arr[1]-arr[0];//计算差值
        for(int i = 2;i<arr.size();i++)
        {
            if(arr[i]-arr[i-1]!=d) return false;//判断相邻两项的差是否相等
        }
        return true;
    }
};