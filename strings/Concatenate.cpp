#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    string concatenateString(string &s1,string &s2){
    return s1 + s2;
    }
};
int main(){
    string s1 = "Hello";
    string s2 = "World";
    Solution sol;
    cout<<sol.concatenateString(s1,s2);
    return 0;
}