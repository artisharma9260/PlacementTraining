#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int trailingZeros(int n){
        int count = 0;
        while(n > 0){
            n = n / 5;
            count += n;
        }
        return count;
    }
};
int main(){
    Solution obj;
    int n;
    cin>>n;
    cout<<obj.trailingZeros(n);
}