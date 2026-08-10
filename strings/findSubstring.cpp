#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int findSubstring(string &s1,string &s2){
        return s1.find(s2);
    }
};
int main(){
  string text = "takeuforward";
  // define the pattern
  string pattern = "forward";
  // use std::string::find to get first occurrence (or npos)
  size_t foundIdx = text.find(pattern);
  // print the result index
  cout << "The substring starts from the index: " << foundIdx << endl;
  // exit
  return 0;
}