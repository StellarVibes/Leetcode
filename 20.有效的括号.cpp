// 思路
// 1.stack<char> st;
// 2.for(auto &e:s)
// 3.if(e=='('||e=='['||e=='{') st.push(e);//入栈
// 4.else if(st.size())
//                     char top = st.top();
//                     st.pop();
//                     if(!((top=='('&&e==')')||(top=='['&&e==']')||(top=='{'&&e=='}'))) return false;//括号匹配
//              else return false;// ]
// 5.if(st.size()) return false;// [
// 6.return true;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/valid-parentheses/solutions/3816463/20you-xiao-de-gua-hao-by-stellarvibes-ljcn/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto &e:s)
        {
            if(e=='('||e=='['||e=='{')//入栈
                st.push(e);
            else
            {
                if(st.size())
                {
                    char top = st.top();
                    st.pop();
                    if(!((top=='('&&e==')')||(top=='['&&e==']')||(top=='{'&&e=='}'))) return false;//括号匹配
                }
                else return false;// ]
            }
        } 
        if(st.size()) return false;// [
        return true;
    }
};