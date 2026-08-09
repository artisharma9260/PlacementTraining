#include<bits/stdc++.h>
using namespace std;
int sumofstring(string &s){
    int sum = 0;
    for(int i = 0; i < s.length(); i++){
        int val = 0;
        if(isalpha(s[i])) continue;
        while(i < s.length() && isdigit(s[i])){
            val = val *10 + (s[i] - '0');
            i++;
        }
        sum = sum + val;
    }
    return sum;
}
int main(){
    string s = "123bcd23";
    cout<<sumofstring(s);
    return 0;
}