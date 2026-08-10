#include<bits/stdc++.h>
using namespace std;
string removesamechar(string &s1,string &s2){
    map<char,int>mp;
    for(char ch : s2){
        mp[ch]++;
    }
    int j = 0;
    for(int i = 0; i < s1.length(); i++){
        if(!mp[s1[i]]){
            s1[j] = s1[i];
            j++;
        }
    }
    return s1.substr(0,j);
}
int main(){
    string str1 = "computer";
    string str2 = "cat";

    string result = removesamechar(str1, str2);

    cout << "Result: " << result << endl;

    return 0;
}