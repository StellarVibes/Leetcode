// 思路
// 1.nt arr[256]={0};//存在" "
// 2.arr[s[right]]++;
// 3.while(arr[s[right]]>1)// [left,right]区间
// 4.ret = max(ret,right-left+1);//更新ret
// Code
// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/longest-substring-without-repeating-characters/solutions/3814825/3wu-zhong-fu-zi-fu-de-zui-chang-zi-chuan-rce9/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int arr[256]={0};//存在" "
        int ret = 0;
        for(int left = 0,right = 0;right<s.size();right++)
        {
            arr[s[right]]++;
            while(arr[s[right]]>1)// [left,right]区间
            {
                arr[s[left]]--;
                left++;
            }
            ret = max(ret,right-left+1);//更新ret
        }
        return ret;
    }
};

