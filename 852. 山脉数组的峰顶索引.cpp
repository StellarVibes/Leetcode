// 思路
// 1.int left = 0,right = arr.size()-1;
// 2.while(left+1<right) //避免无限循环♾️
// 3.int mid = left+(right-left)/2;
// 4.if(arr[mid] > arr[mid + 1]) right = mid;//山顶或下坡
// 5.else left = mid;//上坡
// 6.return right;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/peak-index-in-a-mountain-array/solutions/3826876/852-shan-mai-shu-zu-de-feng-ding-suo-yin-ha2t/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left = 0,right = arr.size()-1;
        while(left+1<right)//避免无限循环♾️
        {
            int mid = left+(right-left)/2;
            if(arr[mid] > arr[mid + 1])//山顶或下坡
                right = mid;
            else 
                left = mid;//上坡
        }
        return right;
    }
};