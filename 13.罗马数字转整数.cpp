// 思路
// 1.unordered_map<char,int> mp={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
// 2.for(int i = s.size()-1;i>0;i--)//从右往左
// 3.if(mp[s[i]]<=mp[s[i-1]]) ret+=mp[s[i]]; //VI 6
// 4.else ret+=mp[s[i]]-mp[s[i-1]]; i--; // IV 4
// 5.if(mp[s[1]]<=mp[s[0]]) ret+=mp[s[0]]; //当mp[s[1]]<=mp[s[0]时要补上mp[s[0] IV类型不用
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/roman-to-integer/solutions/3815480/13luo-ma-shu-zi-zhuan-zheng-shu-by-stell-hmdg/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int romanToInt(string s) {
        // int chars[7]={'I','V','X','L','C','D','M'};
        // int nums[7]={1,5,10,50,100,500,1000};
        int ret = 0;
        unordered_map<char,int> mp={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        for(int i = s.size()-1;i>0;i--)//从右往左
        {
            if(mp[s[i]]<=mp[s[i-1]])//VI 6
            {
                ret+=mp[s[i]];
            }
            else// IV 4
            {
                ret+=mp[s[i]]-mp[s[i-1]];
                i--;
            }
        }
        if(mp[s[1]]<=mp[s[0]])//当mp[s[1]]<=mp[s[0]时要补上mp[s[0] IV类型不用
            ret+=mp[s[0]];
        return ret;
    }
};