#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int countWords(string &s){
        int cnt = 0;
        
        for(int i = 0; i < s.length(); i++){
            while(i < s.length() && s[i] == ' ')i++;
            if(i >= s.length())
                break;
            while(i < s.length() && s[i] != ' '){
                i++;
            }
            cnt++;
        }
        return cnt++;
    }
};
int main(){
    string s = " hello i am arti sharma";
    Solution sol;
    cout<<sol.countWords(s);
    return 0;
}