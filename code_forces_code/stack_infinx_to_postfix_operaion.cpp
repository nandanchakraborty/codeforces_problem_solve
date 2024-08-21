#include<bits/stdc++.h>
using namespace std;
stack<char>stk;
int priority(char x){
if(x== '(') return 0;
if(x== '+' || x== '-') return 1;
if(x== '*' || x== '/')return 2;

return 0;

}

int main() {
    char ex[100];
    char *e,x;
    cout<<"enter the expression :";
    cin>>ex;
    e= ex;
    while(*e!='\0'){
    if(isalnum(*e)) cout<<*e<<' ';
    else if(*e =='(') stk.push(*e);
    else if(*e == ')'){
    while((!stk.empty() )&& (x= stk.top()!= '(')){
    cout<< x <<' ';
    stk.pop();

    }
    if((!stk.empty() && stk.top() == '('))
    stk.pop();
    else{
    while(!stk.empty() && priority(stk.top()) >= priority(*e)){
    cout<<stk.top()<<' ';
    stk.pop();

    }
    }
stk.push(*e);

    }
e++;
    }
    while(!stk.empty()){
    cout<<stk.top()<<' ';
    stk.pop();
    }


    }










