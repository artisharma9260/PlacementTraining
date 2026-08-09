#include<bits/stdc++.h>
using namespace std;
void nonduplicateElement(string &s){
    vector<string>ans;
    map<char,int>mp;
    for(char ch : s){
        mp[ch]++;
    }
    for(char ch : s){
        if(mp[ch] == 1) cout<<ch<<" ";
    }
}
int main(){
    string s = "hello";
    nonduplicateElement(s);
    
    return 0;
}