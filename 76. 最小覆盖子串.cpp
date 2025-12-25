// 思路
// 1.int target = 0,count = 0,ret = INT_MAX,start = 0; int target_num[129]={0}; int tmp[129]={0};
// 2.for(auto&e:t)//计算t的字符情况
//             target_num[e]++; target++;
// 3.for(int left = 0,right = 0;right<s.size();right++) tmp[s[right]]++;
// 4.if(tmp[s[right]]<=target_num[s[right]]) count++;//计算有效字符个数
// 5.if(count==target) //满足子串
// 6.while(left<right && (target_num[s[left]]==0 || tmp[s[left]]>target_num[s[left]])) tmp[s[left]]--; left++; //去除无效元素
// 7.if(ret>right-left+1) ret = right-left+1; start = left; //保存最小字符串长度和起始位置
// 8.if(ret==INT_MAX) return ""; return s.substr(start,ret);
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/minimum-window-substring/solutions/3863997/76-zui-xiao-fu-gai-zi-chuan-by-stellarvi-ipvm/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    string minWindow(string s, string t) {
        int target = 0,count = 0,ret = INT_MAX,start = 0;
        int target_num[129]={0};
        int tmp[129]={0};
        for(auto&e:t)//计算t的字符情况
        {
            target_num[e]++;
            target++;
        }
        for(int left = 0,right = 0;right<s.size();right++)
        {
            tmp[s[right]]++;
            if(tmp[s[right]]<=target_num[s[right]]) count++;//计算有效字符个数
            if(count==target) //满足子串
            {
                while(left<right&&(target_num[s[left]]==0||tmp[s[left]]>target_num[s[left]])) //去除无效元素
                {
                    tmp[s[left]]--;
                    left++;
                }
                if(ret>right-left+1)
                {
                    ret = right-left+1;//字符串长度
                    start = left;//保存起始位置
                }
            }
        }
        if(ret==INT_MAX) return "";
        return s.substr(start,ret);
    }
};