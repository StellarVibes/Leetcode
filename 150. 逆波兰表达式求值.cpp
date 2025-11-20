// 思路
// 1.bool is_num(string& s)
//          if(s.size()==1&&(s[0]=='+'||s[0]=='-'||s[0]=='*'||s[0]=='/')) return false;
//          return true;
// 2.stack<int> st;
// 3.for(auto&e:tokens)
// 4.if(is_num(e))//是否为数字
//           int num = 0,i = 0,flage = 1;
//           if(e[0]=='-') i = 1; flage = -1;//判断正负数
//           for(;i<e.size();i++) num*=10; num+=e[i]-'0';
//           st.push(flage*num);//入栈
// 5.else
//           int right = st.top(); st.pop();
//           int left = st.top(); st.pop();
// 6.switch(e[0]) //通过不同的算符进行运算后入栈
//           case '+':st.push(left+right);break;
//           case '-':st.push(left-right);break;
//           case '*':st.push(left*right);break;
//           case '/':st.push(left/right);break;
// 7.return st.top();
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/evaluate-reverse-polish-notation/solutions/3837684/150-ni-bo-lan-biao-da-shi-qiu-zhi-by-ste-bdik/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    bool is_num(string& s)
    {
        if(s.size()==1&&(s[0]=='+'||s[0]=='-'||s[0]=='*'||s[0]=='/')) return false;
        return true;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto&e:tokens)
        {
            if(is_num(e))//是否为数字
            {
                int num = 0,i = 0,flage = 1;
                if(e[0]=='-')//判断正负数
                {
                    i = 1;
                    flage = -1;
                }
                for(;i<e.size();i++)
                {
                    num*=10;
                    num+=e[i]-'0';
                }
                st.push(flage*num);//入栈
            }
            else
            {
                int right = st.top();
                st.pop();
                int left = st.top();
                st.pop();
                switch(e[0])//通过不同的算符进行运算后入栈
                {
                    case '+':st.push(left+right);break;
                    case '-':st.push(left-right);break;
                    case '*':st.push(left*right);break;
                    case '/':st.push(left/right);break;
                }
            }
        }
        return st.top();
    }
};