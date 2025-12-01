//Write a program to convert infix expression to postfix expression (basic).
#include <iostream>
#include <stack>
#include <cctype>
using namespace std;
int precedence(char op){
    if(op=='+'||op=='-')return 1;
    if(op=='*'||op=='/')return 2;
    return 0;
}
void infixToPostfix(string expr){
    stack<char> s;
    string postfix="";
    for(int i=0;i<expr.length();i++){
        char current=expr[i];
        if(isalnum(current)){
            postfix+=current;
        }
        else if(current=='('){
            s.push(current);
        }
        else if(current==')'){
            while(!s.empty()&&s.top()!='('){
                postfix+=s.top();
                s.pop();
            }
            s.pop();
        }
        else{
            while(!s.empty()&&precedence(s.top())>=precedence(current)){
                postfix+=s.top();
                s.pop();
            }
            s.push(current);
        }
    }
    while(!s.empty()){
        postfix+=s.top();
        s.pop();
    }
    cout<<"Postfix Expression: "<<postfix<<"\n";
}
int main(){
    string expr;
    cout<<"Enter infix expression: ";
    cin>>expr;
    infixToPostfix(expr);
    return 0;
}
