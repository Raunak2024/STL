#include<iostream>
#include<queue>
using namespace std;
int main(){
    //QUEUE FOLLOWS FIFO FASHION
    queue<string>q;//Queue of strings
    q.push("RAUNAK");
    q.push("NAG");
    q.push('R');
    q.push('N');
    cout<<q.front();
    cout<<q.front();
    cout<<q.back();
    cout<<q.back();
    q.pop();
    q.pop();
    cout<<q.size();
}