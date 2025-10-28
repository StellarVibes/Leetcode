// 思路
// 1.string long_str = a,short_str = b;//假设长短数组
//         if(long_str.size()<short_str.size()) 
//             long_str = b; short_str = a;
// 2.int i = long_str.size()-1; for(int j = short_str.size()-1;i>=0;)//从右往左加
// 3.int sum = long_str[i]-'0'+carry;//避免long_str[i]和carry的修改 相互影响
//             if(j>=0)
//                 sum += short_str[j]-'0';
//             long_str[i]=sum%2+'0';
//             carry = sum/2;
//             i--; j--;
// 4. if(carry)//溢出值 long_str.insert(long_str.begin(),'1');
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/add-binary/solutions/3817969/67er-jin-zhi-qiu-he-by-stellarvibes-84fi/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    string addBinary(string a, string b) {
        string long_str = a,short_str = b;//假设长短数组
        if(long_str.size()<short_str.size()) 
        {
            long_str = b;
            short_str = a;
        }
        int carry = 0;
        int i = long_str.size()-1;
        for(int j = short_str.size()-1;i>=0;)//从右往左加
        {
            int sum = long_str[i]-'0'+carry;//避免long_str[i]和carry的修改 相互影响
            if(j>=0)
                sum += short_str[j]-'0';
            long_str[i]=sum%2+'0';
            carry = sum/2;
            i--;
            j--;
        }
        if(carry)//溢出值
        {
            long_str.insert(long_str.begin(),'1');
        }
        return long_str;
    }
};