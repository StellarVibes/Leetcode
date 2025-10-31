// 思路
// 1.while(num>9) //直到结果为一位数
// 2.num = function(num);
// 3.int sum = 0;
// 4.while(num) sum+=num%10; num/=10; //各个位上的数字相加
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/add-digits/solutions/3820060/258-ge-wei-xiang-jia-by-stellarvibes-zkrr/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int function(int num)
    {
        int sum = 0;
        while(num)
        {
            sum+=num%10;//各个位上的数字相加
            num/=10;
        }
        return sum;
    }
    int addDigits(int num) {
        while(num>9)//直到结果为一位数
        {
            num = function(num);
        }
        return num;
    }
};