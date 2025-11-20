// 思路
// 1.vector<string> ret; int left = 0;
// 2.for(int i = 1;i<=n;i++)
// 3.ret.push_back("Push");
// 4.if(i==target[left]) left++; //符合target的入栈
// 5.else ret.push_back("Pop"); //不符合target的出栈
// 6.if(left>=target.size()) break; //遍历完target break
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/build-an-array-with-stack-operations/solutions/3837645/1441-yong-zhan-cao-zuo-gou-jian-shu-zu-b-yw28/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ret;
        int left = 0;
        for(int i = 1;i<=n;i++)
        {   
            ret.push_back("Push");
            if(i==target[left]) left++;//符合target的入栈
            else ret.push_back("Pop");//不符合target的出栈
            if(left>=target.size()) break;//遍历完target break
        }
        return ret;
    }
};