#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    string mostRepeating(string &s){
        string ans = "";
        int maxcount = 0;
        for(int i = 0; i < s.length(); i++){
            int count = 0;
            while(i < s.length() && s[i] == ' ') i++;
            int j = i;
            while(i < s.length() && s[i] != ' '){
                i++;
            }
            string word = s.substr(j,i-j);
            map<char,int>mp;
            for(char ch : word){
                mp[ch]++;
            }
            for(auto it : mp){
                if(it.second > 1){
                    count++;
                }
            }
            if(count > maxcount){
                maxcount = count;
                ans = word;
            }
        }
        return ans;
    }
};
int main(){
    string s = "google abcd aaaabcd abcdfe";
    Solution sol;
    cout<<sol.mostRepeating(s);
    return 0;
}