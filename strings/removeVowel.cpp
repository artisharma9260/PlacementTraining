#include<bits/stdc++.h>
using namespace std;
bool isvowel(char c){
    c = tolower(c);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
    return false;
}
string removeVowel(string &s){
    string ans = "";
    for(char ch : s){
        if(!isvowel(ch)){
            ans = ans+ch;
        }
    }
    return ans;
}
int main(){
    string s = "I am Arti Sharma";
    string ans = removeVowel(s);
    cout<<ans;
    return 0;
}