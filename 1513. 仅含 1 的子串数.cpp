// 思路
// 1.int arr[100010]={0}; unsigned long long count = 0,ret = 0;
// 2.for(auto&e:s)
//             if(e=='1')   count++; arr[1]++; //计算'1'的个数
// 3.else for(int i = 2;i<=count;i++) //加上2个'1'到等于count个'1'的个数
//                     arr[i]+=count-i+1; count = 0;
// 4.if(count>1)//如果s.[s.size()-]为'1'则最后一次count未计算count个'1'
//             for(int i = 2;i<count;i++) arr[i]+=count-i+1; arr[count]++;
// 5. for(int i = 0;i<100010;i++)
//             //if(arr[i]) cout<<i<<":"<<arr[i]<<" "<<endl;
//             if(arr[i]) ret+=arr[i]; ret%=1000000000+7;
// 6.return ret;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/number-of-substrings-with-only-1s/solutions/3832711/1513-jin-han-1-de-zi-chuan-shu-by-stella-gaf8/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int numSub(string s) {
        int arr[100010]={0};
        unsigned long long count = 0,ret = 0;
        for(auto&e:s)
        {
            if(e=='1')//计算'1'的个数
            {
                count++;
                arr[1]++;
            }
            else{
                for(int i = 2;i<=count;i++)//加上2个'1'到等于count个'1'的个数
                    arr[i]+=count-i+1;
                count = 0;
            }
        }
        if(count>1)//如果s.[s.size()-]为'1'则最后一次count未计算count个'1'
        {
            for(int i = 2;i<count;i++)
                arr[i]+=count-i+1;
            arr[count]++;
        }
        
        for(int i = 0;i<100010;i++)
        {
            //if(arr[i]) cout<<i<<":"<<arr[i]<<" "<<endl;
            if(arr[i])
            {
                ret+=arr[i];
                ret%=1000000000+7;
            } 
        }
        return ret;
    }
};