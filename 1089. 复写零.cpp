// 思路
// 1.int count = 0,tmp = 0,end = arr.size()-1;
// 2.for(int i = 0;i<arr.size();i++)
//           if(arr[i]==0) count++;
//           count++;
// 3.if(count>=arr.size()) tmp = i;break; //count记录最后一个元素
// 4.if(count > arr.size())  arr[end--]=0;  tmp--; //最后一个元素为零时 cout>arr.size()
// 5.while(end>=0)
//            if(arr[tmp]==0) arr[end--]=0; arr[end--]=0; tmp--; //复写零
//            else arr[end--] = arr[tmp--];
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/duplicate-zeros/solutions/3843588/1089-fu-xie-ling-by-stellarvibes-6xso/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int count = 0,tmp = 0,end = arr.size()-1;;
        for(int i = 0;i<arr.size();i++)
        {
            if(arr[i]==0) count++;
            count++;
            if(count>=arr.size())//count记录最后一个元素
            {
                tmp = i;
                break;
            }
        }
        if(count > arr.size())//最后一个元素为零时 cout>arr.size()
        {
            arr[end--]=0;
            tmp--;
        }
        while(end>=0)
        {
            if(arr[tmp]==0)//复写零
            {
                arr[end--]=0;
                arr[end--]=0;
                tmp--;
            }
            else
            {
                arr[end--] = arr[tmp--];
            }
        }
    }
};