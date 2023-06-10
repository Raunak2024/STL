#include<iostream>
#include<stack>
using namespace std;
int main(){
    //Stack follows LIFO
    //Declare a stack of string
    stack<string> s;
    s.push("HELLO");
    s.push("RAUNAK");
    s.push("NAG");
    cout<<s.top()<<"\n";//Print the top of the stack
    s.pop();//Pop the top of the stack
    cout<<s.top();
    cout<<"Stack Size: "<<s.size();//Print the size of the stack
    cout<<s.empty();//Check if the stack is empty
    



}