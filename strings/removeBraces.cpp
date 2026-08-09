#include<bits/stdc++.h>
using namespace std;
string expression(string &s){
    int i = 0;
    int j = 0;
    for(int i = 0 ; i < s.length(); i++){
        if(s[i] == '(' || s[i] == ')') continue;
        else{
            s[j] = s[i];
            j++;
        }
    }
    return s.substr(0,j);
}
int main(){
    string s = "a+((b-c)+d)";
    cout<<expression(s);
    return 0;
}