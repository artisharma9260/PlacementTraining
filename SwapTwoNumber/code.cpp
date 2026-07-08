#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    pair<int,int> swapUsingXor(int a,int b){
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
        return {a,b};
    }
};
int main(){
    Solution obj;
    int a = 5;
    int b=4;
    pair<int,int> ans = obj.swapUsingXor(a,b);
    cout<<ans.first;
    cout<<ans.second;
    return 0;
}