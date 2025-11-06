// 思路
// 1.string ret; int size1 = num1.size()-1,size2 = num2.size()-1,carry = 0;
// 2.while(carry||size1>=0||size2>=0)//从右往左
// 3.int sum= carry;
// 4.if(size1>=0) sum+=num1[size1--]-'0';
// 5.if(size2>=0) sum+=num2[size2--]-'0';
// 6.carry=sum/10;
// 7.ret.insert(ret.begin(),sum%10+'0');//头插
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/add-strings/solutions/3824874/415-zi-fu-chuan-xiang-jia-by-stellarvibe-juq4/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    string addStrings(string num1, string num2) {
        string ret;
        int size1 = num1.size()-1,size2 = num2.size()-1,carry = 0;
        while(carry||size1>=0||size2>=0)//从右往左
        {
            int sum= carry;
            if(size1>=0) sum+=num1[size1--]-'0';
            if(size2>=0) sum+=num2[size2--]-'0';
            carry=sum/10;
            ret.insert(ret.begin(),sum%10+'0');//头插
        }
        return ret;
    }
};