#include<bits/stdc++.h>
using namespace std;
class Solution{
public: 
    string compress(string &s){
        int n = s.length();
        string res = "";
        for(int i = 0; i < n;){
            int count = 0;
            char ch = s[i];
            while(i < n && s[i] == ch){
                count++;
                i++;
            } 
            res = res+ch;
            if(count > 1) res = res+to_string(count); 
        }
        return res;
    }
};
int main(){
    string s = "abbccccc";
    Solution obj;
    cout<<obj.compress(s);
}