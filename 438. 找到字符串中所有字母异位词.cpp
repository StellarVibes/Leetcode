// 思路
// 1.int arr[26]={0},tmp[26]={0}; int left = 0; vector<int> ret;
// 2.for(auto&e:p) arr[e-'a']++;
// 3.for(int i = 0;i<p.size()-1;i++) if(i<s.size())tmp[s[i]-'a']++; // p.size()>s.size()
// 4.for(int i = p.size()-1;i<s.size();i++)
// 5.tmp[s[i]-'a']++;   int flage = 1; //[i-p.size(),i]
// 6.for(int index = 0;index<26;index++)
//            if(tmp[index]!=arr[index]) 
//                     flage = 0; break;
// 7.if(flage) ret.push_back(i-p.size()+1);
// 8.tmp[s[left]-'a']--; left++;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/find-all-anagrams-in-a-string/solutions/3862939/438-zhao-dao-zi-fu-chuan-zhong-suo-you-z-8nth/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int arr[26]={0},tmp[26]={0};
        int left = 0;
        vector<int> ret;
        for(auto&e:p) arr[e-'a']++;
        for(int i = 0;i<p.size()-1;i++) if(i<s.size())tmp[s[i]-'a']++; // p.size()>s.size()
        for(int i = p.size()-1;i<s.size();i++)
        {
            tmp[s[i]-'a']++;//[i-p.size(),i]
            int flage = 1;
            for(int index = 0;index<26;index++)
            {
                if(tmp[index]!=arr[index]) 
                {
                    flage = 0;
                    break;
                }
            }
            if(flage) ret.push_back(i-p.size()+1);
            
            tmp[s[left]-'a']--;
            left++;
        }
        return ret;
    }
};