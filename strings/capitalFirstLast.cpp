#include<bits/stdc++.h>
using namespace std;
string capitalfirstlast(string &s){
    int n = s.length()-1;
    s[n] = toupper(s[n]);
    s[0] = toupper(s[0]);
    for(int i = 1; i < n; i++){
        if(s[i] == ' '){
            s[i-1] = toupper(s[i-1]);
            s[i+1] = toupper(s[i+1]);
        }
    }
    
    return s;
}
int main(){
    string s = "take u forward";
    cout<<capitalfirstlast(s);
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// string capitalizeFirstLast(string &s){
//     int start = 0;
//     int n = s.length();
//     while(start < n){
//     while(start < n &&  s[start] == ' ') start++;
//     int end = start;
//     while(end < n && s[end] != ' '){
//         end++;
//     }
//     if(islower(s[start])){
//         s[start] = toupper(s[start]);
//     }
//     if(islower(s[end - 1])){
//         s[end - 1] = toupper(s[end-1]);
//     }
//     start = end;
//     }
//     return s;
// }
// int main(){
//     string s = "  i love chatgpt  ";
//     cout<<capitalizeFirstLast(s);
//     return 0;
    
// }