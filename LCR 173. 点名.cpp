// 思路
// 一、求和∑
// 1.int n = records.size()+1; int sum = n*(n-1)/2;
// 2.for(auto&e:records) sum-=e;
// 3.return sum;

// 二、遍历
// 1.for(int i = 0;i<records.size();i++) if(records[i]!=i) return i;
// 2.return records.size();

// 三、异或
// 1.int n = 0;
// 2.for(auto&e:records) n^=e;
// 3.for(int i = 0;i<records.size()+1;i++) n^=i;
// 4.return n;

// 四、二分查找
// 1.int left= 0,right = records.size()-1;
// 2.while(left<right)
//             int mid = left +(right - left)/2;
//             if(records[mid]==mid) left = mid+1; // mid及左侧都无缺席，缺席在右侧
//             else right = mid; // 缺席在mid或左侧
// 3. return records[left] == left ? records.size() : left; // 判断是否是最后一个学号缺席
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/que-shi-de-shu-zi-lcof/solutions/3864869/lcr-173-dian-ming-by-stellarvibes-71kk/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int takeAttendance(vector<int>& records) {
        //求和∑
        int n = records.size()+1;
        int sum = n*(n-1)/2;
        for(auto&e:records) sum-=e;
        return sum;

        //遍历
        for(int i = 0;i<records.size();i++)
        {
            if(records[i]!=i) return i;
        }
        return records.size();

        //异或
        int n = 0;
        for(auto&e:records) n^=e;
        for(int i = 0;i<records.size()+1;i++) n^=i;
        return n;

        // 二分查找
        int left= 0,right = records.size()-1;
        while(left<right)
        {
            int mid = left +(right - left)/2;
            if(records[mid]==mid) left = mid+1;//mid及左侧都无缺席，缺席在右侧
            else right = mid;//缺席在mid或左侧
        }
        return records[left] == left ? records.size() : left;//判断是否是最后一个学号缺席
    }
};