// Write a program to evaluate a postfix expression using stack.
#include <iostream>
#include <stack>
#include <cctype>
using namespace std;
int evaluatePostfix(string expr){
    stack<int> s;
    for(int i=0;i<expr.length();i++){
        char current=expr[i];
        if(isdigit(current)){
            s.push(current-'0');
        }
        else{
            int b=s.top();
            s.pop();
            int a=s.top();
            s.pop();
            if(current=='+')s.push(a+b);
            else if(current=='-')s.push(a-b);
            else if(current=='*')s.push(a*b);
            else if(current=='/')s.push(a/b);
        }
    }
    return s.top();
}
int main(){
    string expr;
    cout<<"Enter postfix expression: ";
    cin>>expr;
    cout<<"Result: "<<evaluatePostfix(expr)<<"\n";
    return 0;
}
