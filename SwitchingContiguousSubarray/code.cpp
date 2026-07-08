#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int switchingArray(vector<int>arr){
        int maxlen = 2;
        int curlen = 2;
        int n = arr.size();
        for(int i = 2; i < n; i++){
            if(arr[i] == arr[i-2]) curlen++;
            else{
                curlen = 2;
            }
            maxlen = max(maxlen,curlen);
        }
        return maxlen;
    }
};
int main(){
    vector<int>arr = {1,2,1,2,1,2,5,1,2};
    Solution obj;
    int res = obj.switchingArray(arr);
    cout<<res;
}