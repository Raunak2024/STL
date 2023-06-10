#include<iostream>
using namespace std;
int main(){
    // SET IF OF TWO TYPES- UNORDERED SET AND ORDERED SET
    // SET ONLY CONTAINS UNIQUE ELEMENTS EVEN THOUGH YOU TRY TO ENTER A SINGLE ELEMENT MUTIPLE TIMES
    // SET ONLY ALLOWS INSERTION AND DELETION OPERATIONS NO MODIFICATIONS.
    // SET STORES ELEMENTS IN SORTED ORDER
    // UNORDERED SET STORES ELEMENTS IN UNSORTED ORDER
    set<int>s;
    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.begin();
    s.end();
    s.count(1);//Checks whether the element 1 is present in the set or not
    //We use for-each loop (auto) in stl to traverse and print all the elements

}