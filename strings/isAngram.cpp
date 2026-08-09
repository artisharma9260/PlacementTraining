#include<bits/stdc++.h>
using namespace std;
// bool isAnagram(string &s1, string &s2){
//     sort(s1.begin(),s1.end());
//     sort(s2.begin(),s2.end());
//     return s1 == s2;
// }
bool isAnagram(string &s1,string &s2){
    map<char,int>mp;
    for(char ch : s1){
        mp[ch]++;
    }
    for(char ch : s2){
        if(!mp[ch]) return false;
        mp[ch]--;
    }
    for(auto it : mp){
        if(it.second !=0) return false;
    }
    return true;
}
int main(){
    string s1 = "abc";
    string s2 = "bac";
    bool result = isAnagram(s1,s2);
    if(result){
        cout<<"Is valid anagram";
    }
    return 0;
}