#include<bits/stdc++.h>
using namespace std;
string removeduplicates(string &s){
    map<char,int>mp;
    string ans = "";
    for(char ch : s){
        if(!mp[ch]){
        ans = ans +ch;
        mp[ch]++;
        }
    }
    return ans;
}
int main(){
    string s = "abcbba";
    string ans = removeduplicates(s);
    cout<<ans;
    return 0;
}