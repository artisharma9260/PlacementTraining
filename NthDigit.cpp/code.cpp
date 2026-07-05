#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findNthDigit(int n){
        long long digits = 1;
        long long count = 9;
        long long start = 1;

        while(n > digits * count){
            n -= digits * count;
            digits++;
            count *= 10;
            start *= 10;
        }
        long long number = start + (n-1) / digits;
        string s = to_string(number);
        int index = (n - 1) % digits;
        return s[index] - '0';
    }
};
int main(){
    Solution obj;
    int n;
    cin>>n;
    cout<<obj.findNthDigit(n);
    return 0;
}