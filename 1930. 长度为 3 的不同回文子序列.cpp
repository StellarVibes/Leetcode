// 思路
// 1.int count = 0; int arr[26]={0};
// 2.for(int i = 0;i<s.size()-2;)
// 3.arr[s[i]-'a']=1; //记录已经计算过的元素
// 4.for(int j = s.size()-1;j-1>i;j--) //从右往左
// 5.if(s[j]==s[i]) //找到相同值
//           unordered_set<int> set;
//            for(int index = i+1;index<j;index++) set.insert(s[index]); //通过set去重
//            count+=set.size(); break; //加上不同子序列的个数
// 6.i++;
// 7.while(i+1<s.size()-2&&s[i]==s[i+1]) i++;//跳过相同元素
// 8.while(i<s.size()&&arr[s[i]-'a']==1) i++;//跳过已经在大区间计算过的组合个数
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/unique-length-3-palindromic-subsequences/solutions/3837834/1930-chang-du-wei-3-de-bu-tong-hui-wen-z-vubh/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int count = 0;
        int arr[26]={0};
        for(int i = 0;i<s.size()-2;)
        {
            arr[s[i]-'a']=1;//记录已经计算过的元素
            for(int j = s.size()-1;j-1>i;j--)//从右往左
            {
                if(s[j]==s[i])//找到相同值
                {
                    unordered_set<int> set;
                    for(int index = i+1;index<j;index++) set.insert(s[index]);//通过set去重
                    count+=set.size();//加上不同子序列的个数
                    break;
                }
            }
            i++;
            while(i+1<s.size()-2&&s[i]==s[i+1]) i++;//跳过相同元素
            while(i<s.size()&&arr[s[i]-'a']==1) i++;//跳过已经在大区间计算过的组合个数
        }
        return count;
    }
};