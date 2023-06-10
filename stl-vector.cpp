#include<iostream>
#include<vector> // V.IMP
using namespace std;
int main(){
    // Stack-Fixed Sized Memory (Static Memory)
    // Heap- Dynamic Sized Memory (Dynamic Memory)
    //NORMAL DYNAMIC ARRAY-NEW KEYWORD AND DELETE KEYWORD (Pointer is used here to store the address in heap memory)
    //int *arr=new int[5];// Dynamic Array-All elements values are stored in heap
    //delete []arr;// 
    //VECTOR INITIALIZATION
    vector<int>v;//SIZE-> 0 STL DYNAMIC ARRAY(VECTOR) vector<datatype>variable name
    vector<int>v(2);//SIZE-> 2 WITH ALL DEFAULT VALUES=0
    vector<int>v(4,5);//VECTOR WITH SIZE=4 AND ALL ELEMENTS VALUES EQUAL TO 5
    cout<<"VECTOR SIZE"<<v.size();//VECTOR SIZE=vector_name.sizeof(vector_name)
    cout<<"SIZE:"<<v.capacity()<<endl;//VECTOR CAPACITY=vector_name.capacity(vector_name)
    //STL DYNAMIC ARRAY PUSHING ELEMENT-vector_name.push_back(ELEMENT VALUE TO BE PUSHED)
    v.push_back(5);
    //STL DYNAMIC ARRAY POPPING ELEMENT-
    v.pop_back(5);
    //PRINTING THE ELEMENTS OF STL VECTOR[for(int i:vector_name){cout<<i}]
    for(int i:v){
    cout<<i<<" ";
    }
    v.front();//FIRST ELEMENT OF VECTOR
    v.back();//LAST ELEMENT OF VECTOR
    v.begin(7);//VECTOR FIRST ELEMENT->7
    v.end(6);//VECTOR LAST ELEMENT->6
    v.clear();//Clear the vector completely(SIZE)=0
    vector<int> av(v);//COPY VECTOR v ELEMENTS TO ANOTHER VECTOR av
    v.at(1);//SHOWS THE VECTOR ELEMENT PRESENT AT OTH INDEX OF THE VECTOR 
    // SIZE-How many elements are cuurently present in the vector
    // CAPACITY-How much space have been allocated to the vector
    // SIZE<=CAPACITY (IMP)
    // If the vector becomes full and we still try to add extra elements to it,then the a new vector will automtically be created where the old vector elements will be copied along with the addition of extra elements, whose size will be double of the previous one and the old vector will be deleted
    // We can also shrink the vector size by using shrinktofit() operation

}

