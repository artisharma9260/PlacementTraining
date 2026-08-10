#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    string sortstring(string &s){
        map<char,int>mp;
        for(char ch : s){
            mp[ch]++;
        }
        string ans = "";
        for(auto it : mp){
            while(it.second != 0){
                ans = ans + it.first;
                it.second = it.second - 1;
            }
        }
        return ans;
    }

};
int main(){
    Solution sol;
    string s = "bhdhu";
    cout<<sol.sortstring(s);
    return 0;
}