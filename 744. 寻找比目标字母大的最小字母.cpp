// 思路
// 1.int left = 0,right = letters.size()-1;
// 2.while(left<right)
// 3.int mid = (left+right)>>1;//偏左
// 4.if(letters[mid]>target) right = mid;
// 5.else if(letters[mid]<=target) left = mid + 1;//避免无限循环♻️
// 6.if(letters[left]<=target) return letters[0];//不存在这样的字符，则返回 letters 的第一个字符
// 7.return letters[left];
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/find-smallest-letter-greater-than-target/solutions/3820775/744-xun-zhao-bi-mu-biao-zi-mu-da-de-zui-g1hhd/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int left = 0,right = letters.size()-1;
        while(left<right)
        {
            int mid = (left+right)>>1;//偏左
            if(letters[mid]>target)
                right = mid;
            else if(letters[mid]<=target)
                left = mid + 1;//避免无限循环♻️
        }
        if(letters[left]<=target) return letters[0];//不存在这样的字符，则返回 letters 的第一个字符
        return letters[left];
    }
};