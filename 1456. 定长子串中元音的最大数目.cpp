// 思路
// 1.int left = 0,right = 0,len = k,tmp = 0,ret = 0; int arr[]={'a', 'e', 'i', 'o', 'u'};//元音字母 为（a, e, i, o, u）
// 2.unordered_set<char> set;//方便找
// 3.for(auto&e:arr) set.insert(e);
// 4.while(right<s.size())
//  5.if(len)//[left,right]
//                 if(set.count(s[right])) tmp++;//是元音 加加
//                 if(ret<tmp) ret = tmp;
//                 right++;len--;
// 6.else len++; if(set.count(s[left])) tmp--;//是元音 减减 left++;
// 7.return ret;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/maximum-number-of-vowels-in-a-substring-of-given-length/solutions/3826890/1456-ding-chang-zi-chuan-zhong-yuan-yin-zi6iy/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int maxVowels(string s, int k) {
        int left = 0,right = 0,len = k,tmp = 0,ret = 0;
        int arr[]={'a', 'e', 'i', 'o', 'u'};//元音字母 为（a, e, i, o, u）
        unordered_set<char> set;//方便找
        for(auto&e:arr) set.insert(e);
        while(right<s.size())
        {
            if(len)//[left,right]
            {
                if(set.count(s[right])) tmp++;//是元音 加加
                if(ret<tmp) ret = tmp;
                right++;
                len--;
            }
            else{
                len++;
                if(set.count(s[left])) tmp--;//是元音 减减
                left++;
            }
        }
        return ret;
    }
};