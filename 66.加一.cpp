// 思路
// 1.digits[digits.size()-1]++;
// 2.if(digits[digits.size()-1]==10)
// 3.int i = digits.size()-1;
// 4.while(i>=0) int sum = digits[i] + carry;//用sum保存 避免carry或者digits[i]修改相互影响
//                 carry=sum/10;
//                 digits[i]=sum%10; 
//                 i--;
// 5..if(carry) digits.insert(digits.begin(),1);}//digits[0]==10 
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/plus-one/solutions/3817395/66jia-yi-by-stellarvibes-ss9s/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits[digits.size()-1]++;
        int carry = 0;
        if(digits[digits.size()-1]==10)
        {
            int i = digits.size()-1;
            while(i>=0)
            {
                int sum = digits[i] + carry;//用sum保存 避免carry或者digits[i]修改相互影响
                carry=sum/10;
                digits[i]=sum%10; 
                i--;
            }
            if(carry) digits.insert(digits.begin(),1);}//digits[0]==10 
        return digits;
    }
};