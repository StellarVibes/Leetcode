// 思路
// 1.unordered_map<int,std::string> mp={{1,"I"},{4,"IV"},{5,"V"},{9,"IX"},{10,"X"},{40,"XL"},{50,"L"},{90,"XC"},{100,"C"},{400,"CD"},{500,"D"},{900,"CM"},{1000,"M"}};//关键
// 2.int arr[13]={1,4,5,9,10,40,50,90,100,400,500,900,1000};//特殊的进位方式吧
// 3. for(int i = 12;i>=0;i--) 
//             int time = num/arr[i];num-=arr[i]*time;
//             nums[i]+=time;//计算mp.second 的个数
// 4.while(nums[i]--) ret+=mp[arr[i]];
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/integer-to-roman/solutions/3816658/12zheng-shu-zhuan-luo-ma-shu-zi-by-stell-sc0r/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    string intToRoman(int num) {
        //unordered_map<char,int> mp={{1,'I'},{5,'V'},{10,'X'},{50,'L'},{100,'C'},{500,'D'},{1000,'M'}};
        unordered_map<int,std::string> mp={{1,"I"},{4,"IV"},{5,"V"},{9,"IX"},{10,"X"},{40,"XL"},{50,"L"},{90,"XC"},{100,"C"},{400,"CD"},{500,"D"},{900,"CM"},{1000,"M"}};//关键
        string ret;
        //int arr[7]={1,5,10,50,100,500,1000};
        int arr[13]={1,4,5,9,10,40,50,90,100,400,500,900,1000};//特殊的进位方式吧
        int nums[13]={0};
        for(int i = 12;i>=0;i--)
        {
            int time = num/arr[i];
            // while(time--)
            // {
            //     num-=arr[i];
            //     nums[i]++;
            // }
            num-=arr[i]*time;
            nums[i]+=time;//计算mp.second 的个数
        }
        for(int i = 12;i>=0;i--)
        {
            // if(nums[i-1]==4)
            // {
            //     ret+=mp[arr[i-1]];
            //     ret+=mp[arr[i]];
            //     nums[i-1]-=4;
            // }
            //std::cout<<nums[i]<<nums[i-1]<<std::endl;
            while(nums[i]--)
            {
                ret+=mp[arr[i]];
            }
            //std::cout<<ret<<std::endl;
        }
        return ret;
    }
};