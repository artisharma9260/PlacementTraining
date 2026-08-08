#include<bits/stdc++.h>
using namespace std;
bool isvowel(char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') return true;
    return false;
}
bool isconsonant(char c){
    if(!isvowel(c) && isalpha(c)) return true;
    return false;
}
void countval(string &s,int& vowel,int &consonant,int &whitespace){
    for(int i = 0; i < s.length(); i++){
        if(isvowel(s[i])){
            vowel++;
        }
        else if(isconsonant(s[i])){
            consonant++;
        }
        else if(s[i] == ' ') whitespace++;
    }
}
int main(){
    int vowel = 0;
    int consonant = 0;
    int whitespace  = 0;
    string s = "Take you forward";
    countval(s,vowel,consonant,whitespace);
    cout<<vowel<<endl;
    cout<<consonant<<endl;
    cout<<whitespace<<endl;
    return 0;
}