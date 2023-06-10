#include<iostream>
#include<array> //HEADER LIBRARY FOR STL ARRAY
using namespace std;
int main(){
int array[5]={2,3,4,5,8};//NORMAL ARRAY
array<int,4>a={2,3,4,5};//STL ARRAY-SAME AS NORMAL STATIC ARRAY
//PRINTING ALL THE ELEMENTS OF STL ARRAY USING FOR LOOP
for(int i=0;i<a.size;i++){
cout<<a[i]<<" "<<endl;
}
int i=0;
//PRINTING USING WHILE LOOP
while(i<a.size){
cout<<a[i]<<" "<<endl;
i++;
}
int a[4]={2,3,4,5};
//STL WAY OF ACCESSING THE ARRAY ELEMENTS BY INDEX-array_name.at(index value)
cout<<"3rd Element Present at 2nd Index:"<<a.at(2);//a[2] Value-> 4
//STL WAY OF CHECKING WHETHER THE ARRAY IS EMPTY-array_name.empty(BOOLEAN VALUE-True/False)
cout<<"CHECK IF ARRAY IS EMPTY:"<<a.empty(); // Returns Boolean result-> True(1/non-zero no) or False(0)
//STL WAY OF ACCESSING THE FIRST ELEMENT IN ARRAY
cout<<"FRONT ELEMENT PRESENT AT Oth INDEX"<<a.front();//a.[0]
//STL WAY OF ACCESSING THE LAST ELEMENT IN ARRAY
cout<<"BACK ELEMENT PRESENT AT N-1 th index"<<a.back();//a[n-1]
}