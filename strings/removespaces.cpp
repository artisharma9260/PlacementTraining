#include<bits/stdc++.h>
using namespace std;
string removespaces(string &s){
    int j = 0;
    for(int i = 0; i < s.length(); i++){
        if(!isspace(s[i])){
            s[j] = s[i];
            j++;
        }
    }
    return s.substr(0,j);
}
int main(){
    string s = "I am Arti Sharma";
    s = removespaces(s);
    cout<<s;
    return 0;
}