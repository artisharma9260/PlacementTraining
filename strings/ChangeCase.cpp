#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    string changecase(string &s){
        for(int i = 0 ; i < s.length(); i++){
            if(islower(s[i])){
                s[i] = toupper(s[i]);
            }
            else{
                s[i] = tolower(s[i]);
            }
        }
        return s;
    }
};
int main(){
    string s = "helLo";
    Solution sol;
    cout<<sol.changecase(s);
    return 0;
}