#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    string reverseWords(string &s){
        string ans = "";
        reverse(s.begin(),s.end());
        int start = 0;
        while(start < s.length()){
        while(start < s.length() && s[start] == ' ') start++;
        int end = start;
        while(end < s.length() && s[end] != ' '){
            end++;
            
        }
        string word = s.substr(start,end-start);
        int left = 0;
        int right = word.length()-1;
        while(left <= right){
            swap(word[left],word[right]);
                left++;
                right--;
            
        }
        if(ans.empty()){
            ans = word;
        }
        else ans = ans + " "+ word;
        start = end+1;
    }
    return ans;
    }
};
int main(){
    string s = "Hello World";
    Solution sol;
    cout<<sol.reverseWords(s);
    
    return 0;
}