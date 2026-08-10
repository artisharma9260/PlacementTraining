#include<bits/stdc++.h>
using namespace std;
string longestword(string &s){
    int maxcnt = 0;
    string ans = "";
    for(int i =0; i < s.length(); i++){
        int cnt = 0;
        while(s[i] == ' ') i++;
        int j = i;
        while(s[i] != ' ' && i < s.length()){
            cnt++;
            i++;
        }
        if(cnt > maxcnt){
            maxcnt = cnt;
            ans = s.substr(j,i-j);
        }
    }
    return ans;
}
int main(){
    string str = "Google Docs";

    // Variable to store the longest word
    string maxWord;

    maxWord = longestword(str);

    // Output the result
    cout << "Largest Word is: " << maxWord << endl;

    return 0;
}