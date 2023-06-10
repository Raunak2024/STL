#include<iostream>
#include<deque>//HEADER LIBRAY FOR STL-#include<stl name>
using namespace std;
//DEQUE(double ende queue) IS AND WE CAN INSERT OR REMOVE FROM EITHER END(FRONT/REAR)
int main(){
    deque<int>d//Create a Deque of Datatype-deque<datatype>name
    d.push_back(2);//PUSH THE ELEMENT 2 INTO THE BACK OF THE QUEUE
    d.push_front(5);//PUSH THE ELEMENT 5 INTO THE FRONT OF THE QUEUE
    d.pop_front(5);//POP THE ELEMENT 5 FROM THE FRONT OF THE QUEUE
    d.pop_back(2);//POP THE ELEMENT 2 FROM THE BACK OF THE QUEUE 
    cout<<d.at(1);//PRINT THE FRONT/FIRST ELEMENT OF THE DEQUE 
    cout<<d.front();//PRINT THE FIRST ELEMENT OF THE DEQUE
    cout<<d.back();//PRINT THE LAST ELEMENT OF THE DEQUE
    cout<<d.empty();//CHECK IF DEQUE IS EMPTY
    cout<<d.size();//Check the size of the deque
    d.erase(d.begin(),d.begin()+1);//Give a fixed range from start to before end to erase the deque
    
}