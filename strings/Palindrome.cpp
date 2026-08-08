#include<bits/stdc++.h>
using namespace std;
bool palindrome(string &s){
    int l = 0;
    int r = s.length()-1;
    while(l <= r){
        if(s[l] != s[r]) return false;
        else{
            l++;
            r--;
        }
    }
    return true;
}
int main(){
    string s = "ABBA";
    bool result = palindrome(s);
    if(result){
        cout<<"Palindrome";
    }
    else cout<<"Not Palindrome";
    return 0;
}