// Write a program to check for balanced parentheses using stack.
#include <iostream>
#include <stack>
using namespace std;
bool isBalanced(string expr){
    stack<char> s;
    for(int i=0;i<expr.length();i++){
        char current=expr[i];
        if(current=='('||current=='{'||current=='['){
            s.push(current);
        }
        else if(current==')'){
            if(s.empty()||s.top()!='(')return false;
            s.pop();
        }
        else if(current=='}'){
            if(s.empty()||s.top()!='{')return false;
            s.pop();
        }
        else if(current==']'){
            if(s.empty()||s.top()!='[')return false;
            s.pop();
        }
    }
    return s.empty();
}
int main(){
    string expr;
    cout<<"Enter expression: ";
    cin>>expr;
    if(isBalanced(expr))cout<<"Balanced\n";
    else cout<<"Not Balanced\n";
    return 0;
}
