// 思路
// 1.int left = 0,right = s.size()-1;
// 2.while(left<right)
//             swap(s[left],s[right]);
//             left++; right--;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/reverse-string/solutions/3832923/344-fan-zhuan-zi-fu-chuan-by-stellarvibe-ds0j/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0,right = s.size()-1;
        while(left<right)
        {
            swap(s[left],s[right]);
            left++;
            right--;
        }
    }
};