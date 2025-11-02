// 思路
// 1.vector<int> v;
// 2.int num = arr[arr.size()-1];
// 3.v.insert(v.begin(),-1); //头插
// 4.for(int i = arr.size()-1;i>0;i--) //从右往左
//             if(num<arr[i]) num = arr[i]; v.insert(v.begin(),num); //最大值插入
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/replace-elements-with-greatest-element-on-right-side/solutions/3821586/1299-jiang-mei-ge-yuan-su-ti-huan-wei-yo-2nnc/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> v;
        int num = arr[arr.size()-1];
        v.insert(v.begin(),-1);//头插
        for(int i = arr.size()-1;i>0;i--)//从右往左
        {
            if(num<arr[i]) num = arr[i];//最大值插入
            v.insert(v.begin(),num);
        }
        return v;
    }
};