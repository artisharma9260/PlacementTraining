#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    string rev(string str){
        int left = 0;
        int right = str.length()-1;
        while(left < right){
            char temp = str[left];
            str[left] = str[right];
            str[right] = str[left];
            left++;
            right--;
        }
        return str;
    }
    string reverseAlternativelyWords(string s){
        stringstream ss(s);
        vector<string>words;
        string word;
        while(ss >> word){
            words.push_back(word);
        }
        for(int i = 0; i < words.size(); i += 2){
            words[i] = rev(words[i]);
        }
        string result ="";
        for(int i = 0; i < words.size(); i++){
            result += words[i];

            if(i < words.size() - 1){
                result += " ";
            }
        }
        return result;
        
    }
};
int main(){
    Solution obj;
    string s = "The quick brown fox jumps over the lazy dog";
    cout<<obj.reverseAlternativelyWords(s);
    return 0;
}
