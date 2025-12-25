// 思路
// 1.int sum = 0,ret = 0;
// 2.for(auto&e:apple) sum+=e;
// 3.sort(capacity.begin(),capacity.end(),greater<int>()); // 降序
// 4.for(int i = 0;i<capacity.size();i++)
//         ret+=capacity[i];
//         if(ret>=sum) return i+1;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/apple-redistribution-into-boxes/solutions/3864270/3074-zhong-xin-fen-zhuang-ping-guo-by-st-hg38/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum = 0,ret = 0;
        for(auto&e:apple) sum+=e;
        sort(capacity.begin(),capacity.end(),greater<int>());// 降序
        for(int i = 0;i<capacity.size();i++)
        {
            ret+=capacity[i];
            if(ret>=sum) return i+1;
        }
        return 0;
    }
};