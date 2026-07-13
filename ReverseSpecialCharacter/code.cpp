// Reverse the string, but keep special characters at their original positions.

// Example

// Input:

// a,b$c

// Output:

// c,b$a

// Explanation:

// Reverse only the letters: a b c → c b a
// Comma , and dollar $ stay at the same indices.
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    string ReverseString(string s){
        int left = 0;
        int right = s.length() - 1;
        while(left <= right){
            if(!isalpha(s[left])) left++;
            else if(!isalpha(s[right])) right--;
            else{
                swap(s[left],s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};
int main(){
    return 0;
}