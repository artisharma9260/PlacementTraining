#include<bits/stdc++.h>
using namespace std;
string nextlexographic(string &s){
    int n = s.length();
    for(int i = 0; i < s.length(); i++){
        int ascii = (int)(s[i]);
        if(ascii == 90){
            s[i] = char(65);
        }
        else if(ascii == 122){
            s[i] = char(97);
        }
        else if((ascii < 90 && ascii > 65) || (ascii < 122 && ascii > 97)){
            s[i] = (char(ascii+1));
        }
    }
    return s;
}
int main(){
  string str = "abcdxyz";
  int length = str.length();

  cout << "Original String: " << "\n";
  cout << str << endl;

  cout << "New string: " << "\n";
  cout << nextlexographic(str) << "\n";

  return 0;
}