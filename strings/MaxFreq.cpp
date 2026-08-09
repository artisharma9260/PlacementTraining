#include<bits/stdc++.h>
using namespace std;
string maxfreq(string &s){
    map<char,int>freq;
    for(char ch : s){
        freq[ch]++;
    }
    int max = 0;
    string ans = '';
    for(auto it : freq){
        if(it.second > max){
            max = it.second;
            ans = it.first;
        }
    }
    return ans;
}
int main(){
    string a = "apple";
    cout<<maxfreq(a);
    return 0;
}