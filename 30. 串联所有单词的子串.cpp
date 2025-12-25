// 思路
// 1.vector<int> ret; unordered_map<string, int> target;// 统计目标词频
// 2.if (words.empty() || s.empty()) return ret;
// 3.int word_len = words[0].size(); // 单个单词长度
//     int word_total = words.size(); // 单词总个数（含重复）
//     int total_len = word_len * word_total,s_len = s.size();; // 子串总长度
// 4.if (total_len > s_len) return ret;
// 5.for (const string& e : words) target[e]++;
// 6.for (int i = 0; i < word_len; ++i) // 遍历所有起始偏移（0 ~ word_len-1）
//             unordered_map<string, int> mp;    // 当前窗口词频
//             int count = 0;                    // 当前窗口的单词数
//             int left = i;                     // 窗口左边界，初始化为当前偏移i
// 7.for (int j = i; j <= s_len - word_len; j += word_len)  // 右边界按单词长度滑动
//             string str = s.substr(j, word_len);
// 8.if (target.find(str) == target.end()) // 情况1：当前单词不在目标中，重置窗口
//             mp.clear();
//             count = 0; left = j + word_len;
//             continue;
// 9.mp[str]++; count++; // 情况2：当前单词在目标中，更新词频和计数              
// 10.while (mp[str] > target[str]) // 情况3：当前单词数量超标，收缩左边界直到数量合规
//              string left_word = s.substr(left, word_len);
//              mp[left_word]--;
//              if (mp[left_word] == 0)  mp.erase(left_word);
//              left += word_len; count--;
// 11.if (count == word_total) // 情况4：窗口单词数等于目标总个数，说明匹配成功
//              ret.push_back(left);
//              string left_word = s.substr(left, word_len); // 收缩左边界，继续寻找下一个可能的匹配
//              mp[left_word]--;
//              if (mp[left_word] == 0)  mp.erase(left_word);
//              left += word_len;count--;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/substring-with-concatenation-of-all-words/solutions/3863927/30-chuan-lian-suo-you-dan-ci-de-zi-chuan-ztvv/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> ret;
        if (words.empty() || s.empty()) return ret;

        int word_len = words[0].size();       // 单个单词长度
        int word_total = words.size();        // 单词总个数（含重复）
        int total_len = word_len * word_total;// 子串总长度
        int s_len = s.size();
        if (total_len > s_len) return ret;

        // 统计目标词频
        unordered_map<string, int> target;
        for (const string& e : words) 
        {
            target[e]++;
        }

        // 遍历所有起始偏移（0 ~ word_len-1）
        for (int i = 0; i < word_len; ++i) 
        {
            unordered_map<string, int> mp;    // 当前窗口词频
            int count = 0;                    // 当前窗口的单词数
            int left = i;                     // 窗口左边界，初始化为当前偏移i

            // 右边界按单词长度滑动
            for (int j = i; j <= s_len - word_len; j += word_len) 
            {
                string str = s.substr(j, word_len);

                // 情况1：当前单词不在目标中，重置窗口
                if (target.find(str) == target.end()) 
                {
                    mp.clear();
                    count = 0;
                    left = j + word_len;
                    continue;
                }

                // 情况2：当前单词在目标中，更新词频和计数
                mp[str]++;
                count++;

                // 情况3：当前单词数量超标，收缩左边界直到数量合规
                while (mp[str] > target[str]) 
                {
                    string left_word = s.substr(left, word_len);
                    mp[left_word]--;
                    if (mp[left_word] == 0) 
                    {
                        mp.erase(left_word);
                    }
                    left += word_len;
                    count--;
                }

                // 情况4：窗口单词数等于目标总个数，说明匹配成功
                if (count == word_total) 
                {
                    ret.push_back(left);
                    // 收缩左边界，继续寻找下一个可能的匹配
                    string left_word = s.substr(left, word_len);
                    mp[left_word]--;
                    if (mp[left_word] == 0) 
                    {
                        mp.erase(left_word);
                    }
                    left += word_len;
                    count--;
                }
            }
        }
        return ret;
    }

    void test()
    {
        // int len = words[0].size();
        // int sum_len = words.size() * words[0].size();
        // vector<int> ret;
        // if(sum_len>s.size()) return ret;
        // unordered_map<string,int> target;
        // for(auto&e:words) target[e]++;
        // for(int i = 0;i<=s.size()-sum_len;++i)
        // {
        //     unordered_map<string,int> mp;
        //     int tmp = 0;
        //     for(int j = i;j<i+sum_len;j+=len)
        //     {
        //         string str = s.substr(j,len);
        //         mp[str]++;
        //         if(target.count(str)==0||mp.at(str)>target.at(str)) 
        //         {
        //             tmp = 1;
        //             break;
        //         }
        //     }
        //     if(tmp) continue;
        //     int count = 0,flage = 0;
        //     for(auto&e:words)
        //     {
        //         count++;
        //         if(mp.count(e)==0||mp.at(e)==0){ flage = 1;break;}
        //         mp[e]--;
        //     }
        //     if(flage) continue;
        //     ret.push_back(i);
        // }
        // return ret;
    }
};