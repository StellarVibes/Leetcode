// 思路
// 1.if(haystack[i]==needle[0]) //第一个相同再比较
// 2.int left = i,right = 0; //临时变量
// 3.if(haystack.size()-left<needle.size()) continue; //小于continue
// 4.while(right<needle.size()&&haystack[left]==needle[right]) //比较 left++;right++;
// 5.if(right!=needle.size()) continue; //haystack[left]!=needle[right] else return i;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/find-the-index-of-the-first-occurrence-in-a-string/solutions/3817033/28zhao-dao-zi-fu-chuan-zhong-di-yi-ge-pi-9o6c/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i = 0;i<haystack.size();i++)
        {
            if(haystack[i]==needle[0])//第一个相同再比较
            {
                int left = i,right = 0;//临时变量
                if(haystack.size()-left<needle.size()) continue;//小于continue
                while(right<needle.size()&&haystack[left]==needle[right])//比较
                {
                    left++;
                    right++;
                }
                if(right!=needle.size()) continue;//haystack[left]!=needle[right]
                else return i;
            }
        }
        return -1;
    }
};