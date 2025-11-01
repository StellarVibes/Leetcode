// 思路
// 1.if(s.size()!=goal.size()) return false;//当s.size()!=goal.size()时 s不可能旋转成goal
// 2.string tmp = s+s;
// 3.for(int i = 0;i<tmp.size()-goal.size();i++)//i+tmp.size()>goal.size() s不可能旋转成goal
// 4.int left = i,right = 0;
// 5.while(left<tmp.size()&&right<goal.size())
//                 if(tmp[left]!=goal[right]) break;//比较
//                 left++; right++;
// 6.if(right==goal.size()) return true;//遍历完goal
// 7.return false;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/rotate-string/solutions/3820821/796-xuan-zhuan-zi-fu-chuan-by-stellarvib-2wnk/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;//当s.size()!=goal.size()时 s不可能旋转成goal
        string tmp = s+s;
        for(int i = 0;i<tmp.size()-goal.size();i++)//i+tmp.size()>goal.size() s不可能旋转成goal
        {
            int left = i,right = 0;
            while(left<tmp.size()&&right<goal.size())
            {
                if(tmp[left]!=goal[right]) break;//比较
                left++;
                right++;
            }
            if(right==goal.size()) return true;//遍历完goal
        }
        return false;
    }
};