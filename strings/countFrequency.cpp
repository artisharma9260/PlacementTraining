#include<bits/stdc++.h>
using namespace std;
void countfrequency(string &s){
    map<char,int>mp;
    for(char ch : s){
        if(ch != ' ') mp[ch]++;
    }
    for(auto it : mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    
    
    
}
int main(){
    string s = "hello i am arti sharma";
    countfrequency(s);
    return 0;
}