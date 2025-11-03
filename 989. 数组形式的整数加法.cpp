// 思路
// 1.if(k==0) return num;
// 2.vector<int> tmp;
// 3.while(k) tmp.push_back(k%10); k/=10;
// 4.reverse(num.begin(),num.end());//逆序 从个位开始
// 5.int i = 0,carry = 0;
// 6.while(i<tmp.size()||carry)
//             int sum = carry;
//             if(i<num.size()) sum += num[i]; if(i<tmp.size()) sum += tmp[i];
//             carry = sum/10;
//             if(i<num.size()) num[i]=sum%10; else num.push_back(sum%10);
//             i++;
// 7.reverse(num.begin(),num.end());
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/add-to-array-form-of-integer/solutions/3822770/989-shu-zu-xing-shi-de-zheng-shu-jia-fa-9xyzg/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        if(k==0) return num;
        vector<int> tmp;
        while(k)
        {
            tmp.push_back(k%10);
            k/=10;
        }
        reverse(num.begin(),num.end());//逆序 从个位开始
        int i = 0,carry = 0;
        while(i<tmp.size()||carry)
        {
            int sum = carry;
            if(i<num.size())
                sum += num[i];
            if(i<tmp.size())
                sum += tmp[i];
            carry = sum/10;
            if(i<num.size())
                num[i]=sum%10;
            else 
                num.push_back(sum%10);
            i++;
        }
        reverse(num.begin(),num.end());
        return num;
    }
};