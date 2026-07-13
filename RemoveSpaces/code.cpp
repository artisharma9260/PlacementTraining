// remove spaces from string write a c++ program to remove spaces from a string
//  here we will store the string in a character arrays lets say
//   s and that original string will contain the spaces between 
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    string RemoveSpaces(string s){
        int j = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] != ' ') {
                s[j] = s[i];
                j++;
            }
        }
        s.resize(j);
        return s;
    }
};
int main(){
    string s = "Hello World";
    Solution obj;
    cout<<obj.RemoveSpaces(s);
    return 0;
}