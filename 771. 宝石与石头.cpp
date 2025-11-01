// 思路
// 1.unordered_map<char,int> mp;
// 2.int ret = 0;
// 3.for(auto&e:jewels) mp.insert({e,1});//记录jewels
// 4.for(auto&e:stones) if(mp[e]) ret++;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/jewels-and-stones/solutions/3820795/771-bao-shi-yu-shi-tou-by-stellarvibes-uw5a/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> mp;
        int ret = 0;
        for(auto&e:jewels) mp.insert({e,1});//记录jewels
        for(auto&e:stones) if(mp[e]) ret++;
        return ret;
    }
};