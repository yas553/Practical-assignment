#include <iostream>
#include <stack>
using namespace std;
int prec(char c) 
{
    if(c=='*'||c=='/') return 2;
    if(c=='+'||c=='-') return 1;
    return -1;
}

string infixToPostfix(string s) 
{
    stack<char> st;
    string res = "";
    for(int i=0; i<s.length(); i++) 
    {
        char c = s[i];
        if(isalnum(c)) res += c;
        else if(c=='(') st.push(c);
        else if(c==')') 
        {
            while(!st.empty() && st.top()!='(') 
            {
                res += st.top(); st.pop();
            }
            st.pop();
        }
        else 
        {
            while(!st.empty() && prec(st.top())>=prec(c)) 
            {
                res += st.top(); st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty()) 
    {
        res += st.top(); st.pop();
    }
    return res;
}

int main() 
{
    string exp = "A*(B+C)";
    cout << "Postfix: " << infixToPostfix(exp);
    return 0;
}
