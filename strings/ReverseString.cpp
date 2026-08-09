#include<bits/stdc++.h>
using namespace std;
string reversestring(string &s){
    int l = 0;
    int r = s.length()-1;
    while(l <= r){
        swap(s[l],s[r]);
        l++;
        r--;
    }
    return s;
}
string reversebyfunction(string &s){
    reverse(s.begin(),s.end());
    return s;
}
int main(){
    string s = "Hello";
    reversestring(s);
    cout<<s<<endl;
    string a = "arti";
    cout<<reversebyfunction(a);
    return 0;
}