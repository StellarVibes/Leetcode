// 思路
// 1.int left = 0,right = n;
// 2.while(left<right)
// 3.unsigned long long mid = left/2+right/2; unsigned long long pick = guess(mid);
// 4.if(pick==-1)   right = mid-1; //-1：你猜的数字比我选出的数字大
// 5.else if(pick==1) left = mid+1;//1：你猜的数字比我选出的数字小
// 6.else return mid; //0：你猜的数字与我选出的数字相等
// 7.if(guess(right)==0) return right;//n = 1, pick = 1
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/guess-number-higher-or-lower/solutions/3836193/374-cai-shu-zi-da-xiao-by-stellarvibes-az6c/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int left = 0,right = n;
        while(left<right)
        {
            unsigned long long mid = left/2+right/2;
            unsigned long long pick = guess(mid);
            if(pick==-1)//-1：你猜的数字比我选出的数字大
            {
                right = mid-1;
            }
            else if(pick==1)//1：你猜的数字比我选出的数字小
            {
                left = mid+1;
            }
            else//0：你猜的数字与我选出的数字相等
            {
                return mid;
            }
        }
        if(guess(right)==0) return right;//n = 1, pick = 1
        return 0;
    }
};