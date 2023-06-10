#include<iostream>
#include<list>
using namespace std;
int main(){
    //CREATION OF LIST
    list<int>l;
    //COPYING OF LIST
    list<int>lc(l);
    //INITIALIZATION OF LIST
    list<int>li(5,100)// A LIST HAS BEEN CREATED WITH 5 ELEMENTS EQUAL TO 100
    l.push_back(1);//PUSH 1 AT LIST BACK
    l.push_front(2);//PUSH 1 AT LIST FRONT
    l.erase(l.begin());//REMOVES 1ST ELEMENT FROM LIST
    l.size();//PRINTS THE SIE OF LIST
    list<int> l2(l);// COPY LIST

}