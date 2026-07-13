// This is a famous GeeksforGeeks problem: "Save Ironman".

// The idea is:

// Ignore all characters that are not alphanumeric (a-z, A-Z, 0-9).
// Ignore case differences (A and a are considered same).
// Check whether the resulting string is a palindrome.
// Example

// Input:

// I am :IronnorI Ma, i

// After removing non-alphanumeric characters and converting to lowercase:

// iamironnorimai

// This is a palindrome, so the answer is:

// true
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool saveIronMan(string s){
        int left = 0;
        int right = s.length() - 1;
        while(left <= right){
            while(left < right && !isalnum(s[left])) left++;
            while(left < right && !isalnum(s[right])) right--;
            if(tolower(s[left]) != tolower(s[right])) return false;
            left++;
            right--;
        }
        return true;
    }

};
int main(){
    string s = "I am : IronnorI ma,i";
    Solution obj;
    bool ispalindrome = obj.saveIronMan(s);
    if(ispalindrome){
        cout<<"yes";
    } 
    else{
        cout<<"No";
    }
    return 0;
}