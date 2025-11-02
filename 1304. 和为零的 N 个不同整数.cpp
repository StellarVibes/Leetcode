// 思路
// 1.vector<int> v;
// 2.int num = n/2;
// 3.if(n%2==1) v.push_back(0); //奇数多个0
// 4. for(int i = 1;i<=num;i++)//关于0对称即可和为0
//             v.insert(v.begin(),-1*i);//头插
//             v.push_back(i);//尾插
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/find-n-unique-integers-sum-up-to-zero/solutions/3821622/1304-he-wei-ling-de-n-ge-bu-tong-zheng-s-y0xn/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> v;
        int num = n/2;
        if(n%2==1)//奇数多个0
        {
            v.push_back(0);
        }
        for(int i = 1;i<=num;i++)//关于0对称即可和为0
        {
            v.insert(v.begin(),-1*i);//头插
            v.push_back(i);//尾插
        }
        return v;
    }
};