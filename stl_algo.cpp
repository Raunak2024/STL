#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(5);
    v.push_back(6);
    // BINARY SEARCH IMPLEMENTATION USING BEGIN AND END ITERATORS WITH THE ELEMENT TO BE SEARCHED
    cout<<binary_search(v.begin(),v.end(),2)<<endl;
    int a=4;
    int b=6;
    cout<<min(a,b)<<" "<<max(a,b)<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    string s="abcd";
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    rotate(v.begin(),v.begin()+1,v.end());
    for(int i:v){
        cout<<i<<" "<<endl;
    }
    sort(v.begin(),v.end());
    for(int i:v){
        cout<<i<<" "<<endl;
    }
    // LOWER BOUND && UPPER BOUND
}
