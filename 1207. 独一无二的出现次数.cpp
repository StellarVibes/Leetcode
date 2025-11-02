// 思路
// 1.int tmp[2001]={0};//-1000 <= arr[i] <= 1000->[0,2000]
// 2.int ret[1001]={0};//1 <= arr.length <= 1000 ->[0,1000]
// 3.for(auto&e:arr) tmp[e+1000]++;//计算arr中下标对应出现的次数
// 4.for(int i = 0;i<2001;i++)
//             if(tmp[i]>0) ret[tmp[i]]++; //根据tmp记录的次数分布是否独一无二
//             if(ret[tmp[i]]>1) return false;//出现多次
// 5.return true;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/unique-number-of-occurrences/solutions/3821522/1207-du-yi-wu-er-de-chu-xian-ci-shu-by-s-j465/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int tmp[2001]={0};//-1000 <= arr[i] <= 1000->[0,2000]
        int ret[1001]={0};//1 <= arr.length <= 1000 ->[0,1000]
        for(auto&e:arr) tmp[e+1000]++;//计算arr中下标对应出现的次数
        for(int i = 0;i<2001;i++)
        {
            if(tmp[i]>0)//根据tmp记录的次数分布是否独一无二
                ret[tmp[i]]++;
            if(ret[tmp[i]]>1) return false;//出现多次
        }
        return true;
    }
};