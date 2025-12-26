// 思路
// 1.stack<int> st; int ret = 0;
// 2.for(auto&e:operations)
// 3.switch(*e.c_str())
// 4.case '+':{int num = st.top();st.pop();int tmp = st.top();st.push(num);st.push(num+tmp);break;} //前两次得分总和
// 5.case 'D':st.push(st.top()*2);break; //前一次得分的两倍
// 6.case 'C':st.pop();break; //前一次得分无效
// 7.default:st.push(stoi(e)); //新获得分数 x
// 8.while(st.size()) ret+=st.top(); st.pop();
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/baseball-game/solutions/3852289/682-bang-qiu-bi-sai-by-stellarvibes-7zy2/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int ret = 0;
        for(auto&e:operations)
        {
            switch(*e.c_str())
            {
                case '+':{int num = st.top();st.pop();int tmp = st.top();st.push(num);st.push(num+tmp);break;} //前两次得分的总和
                case 'D':st.push(st.top()*2);break; //前一次得分的两倍
                case 'C':st.pop();break; //前一次得分无效
                default:st.push(stoi(e)); //新获得分数 x
            }
        }
        while(st.size())
        {
            ret+=st.top();
            st.pop();
        }
        return ret;
    }
};