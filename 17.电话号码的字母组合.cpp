// 思路
// 1.unordered_map<char, string> mp = {
//             {'2', "abc"}, {'3', "def"}, {'4', "ghi"},
//             {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"},
//             {'8', "tuv"}, {'9', "wxyz"} };
// 2.backtrack(0, digits, current, result, mp);
// 3.void backtrack(int i, const string& digits, string& current, vector<string>& result, const unordered_map<char, string>& mp
// 4.if (i == digits.size()) result.push_back(current); return; //到达叶子节点
// 5.char digit = digits[i]; const string& letters = mp.at(digit);
// 6.for (char letter : letters) 
//            current.push_back(letter);
//            backtrack(i + 1, digits, current, result, mp); //递归 
//            current.pop_back();  // 回溯
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/letter-combinations-of-a-phone-number/solutions/3817207/17dian-hua-hao-ma-de-zi-mu-zu-he-by-stel-farl/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if (digits.empty()) return result;
        unordered_map<char, string> mp = {
            {'2', "abc"}, {'3', "def"}, {'4', "ghi"},
            {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"},
            {'8', "tuv"}, {'9', "wxyz"}
        };
        string current;
        backtrack(0, digits, current, result, mp);
        return result;
    }
private:
    void backtrack(int i, const string& digits, string& current, vector<string>& result, const unordered_map<char, string>& mp) {
        if (i == digits.size())//到达叶子节点
        {
            result.push_back(current);
            return;
        }
        char digit = digits[i];
        const string& letters = mp.at(digit);
        for (char letter : letters) 
        {
            current.push_back(letter);
            backtrack(i + 1, digits, current, result, mp);//递归
            current.pop_back(); // 回溯
        }
    }
};