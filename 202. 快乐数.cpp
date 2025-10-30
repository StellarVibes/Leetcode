// 思路
// 1.n = function(n); if(arr[1]==1) return true;、
// 2. int arr[900]={0}; //2^31 - 1 = 2147483647  <  99999 99999 ->10个9 max = 10 * 9^2 ->810
// 3.int sum = 0; while(n) sum+=(n%10)*(n%10); //每位平方相加 n/=10;
// 4.arr[sum]++; if(arr[sum]>1) return 0;//鸽巢原理 810个位置满了 进入下一个重复的循环
// 5.return sum;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/happy-number/solutions/3819782/202-kuai-le-shu-by-stellarvibes-80i2/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    //2^31 - 1 = 2147483647  <  99999 99999 ->10个9 max = 10 * 9^2 ->810
    int arr[900]={0};
    int function(int n)
    {
        int sum = 0;
        while(n)
        {
            sum+=(n%10)*(n%10);//每位平方相加
            n/=10;
        }
        arr[sum]++;
        if(arr[sum]>1) return 0;//鸽巢原理 810个位置满了 进入下一个重复的循环
        return sum;
    }
    bool isHappy(int n) {
        while(n)
        {
            n = function(n);
            if(arr[1]==1) return true;
        }
        return false;
    }
};