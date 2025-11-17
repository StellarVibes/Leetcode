// 思路
// 1.if(bits.size()==1) return true;
// 2.for(int i = 0;i<bits.size();)
// 3.if(bits[i]==0) i++; //为零 跳过一个 else i+=2; //为一 跳过两个
// 4.if(i==bits.size()-1) return true; //如果为最后一个,则最后一个字符是一比特字符
// 5.if(i==bits.size()) return false; //最后一个字符是两比特字符
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/1-bit-and-2-bit-characters/solutions/3834736/717-1-bi-te-yu-2-bi-te-zi-fu-by-stellarv-vng0/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        if(bits.size()==1) return true;
        for(int i = 0;i<bits.size();)
        {
            if(bits[i]==0) i++;//为零 跳过一个
            else i+=2;//为一 跳过两个
            if(i==bits.size()-1) return true;//如果为最后一个,则最后一个字符是一比特字符
            if(i==bits.size()) return false;//最后一个字符是两比特字符
        }
        return true;
    }
};