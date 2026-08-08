#include<bits/stdc++.h>
using namespace std;
string func(string &s){
    int j = 0;
    for(int i = 0; i < s.length(); i++){
        if(isalpha(s[i])){
            s[j] = s[i];
            j++;
        }
    }
    return s.substr(0,j);
}
int main(){
    string s = "a23fght+";
    s = func(s);
    cout<<s;
    return 0;
}