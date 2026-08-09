#include<bits/stdc++.h>
using namespace std;
void printduplicates(string &s){
    map<char,int>mp;
    for(char ch : s){
        mp[ch]++;
    }
    for(auto it : mp){
        cout<<it.first<<" : "<<it.second<<endl;
    }
}
int main(){
    string s = "abbidnkm";
    printduplicates(s);
    return 0;
}
