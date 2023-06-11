#include<iostream>
using namespace std;
int main(){
    // map<key datatype,value datatype>var_name
    map<int,string>m;
    // IMP- HASHING CAN BE IMPLEMENTED BY BOTH MAP(ORDERED) AND UNORDERED MAP. But, we generally use unordered map for most cases.
    // ALSO UNORDERED MAP IS IMPLEMENTED BY HASH TABLES WHEREAS MAP IS IMPLEMENTED BY BST
    // SET IS ALSO IMPLEMENTED BY RBT AND SET DOES NOT ALLOW INDEXING
    // One way of inserting values into HASHMAP/HASHTABLE
    // MAP-SORTED ORDER(DEFAULT-ASCENDING), UNORDERED MAP-RANDOM ORDER
    m[1]="RAUNAK NAG";
    m[2]="HULK";
    m[3]="FLASH";
    m[4]="SPEEDSTER";
    m.insert({5,"HULK"}); // INSERT HULK AT 5TH INDEX
    // We implement for-each loop with auto keyword
    for(auto i:m){
        cout<<i.first<<"->"<<i.second<<endl;
    }
        cout<<m.count(3)<<endl;//Returns 0 or 1 depending upon the element is found at some index or not
        m.erase{"Key-2"};// WE CAN DELETE ANY VALUE FROM THE HASHMAP THROUGH ITS INDEX 

}