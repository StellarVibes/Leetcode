// 思路
// 1.int arr[28]={0};
// 2.for(auto&e:s) arr[e-'a']++;//计算每个元素的次数
// 3.for(int i =0;i<s.size();i++)
//            if(arr[s[i]-'a']==1) return i;//寻找第一个元素次数为1
// 4.return -1;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/first-unique-character-in-a-string/solutions/3836766/387-zi-fu-chuan-zhong-de-di-yi-ge-wei-yi-g2qi/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int firstUniqChar(string s) {
        int arr[28]={0};
        for(auto&e:s) arr[e-'a']++;//计算每个元素的次数
        for(int i =0;i<s.size();i++)
        {
           if(arr[s[i]-'a']==1) return i;//寻找第一个元素次数为1
        }
        return -1;
    }
};