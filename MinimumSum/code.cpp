#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int minsum(vector<int>& arr,int n){
        sort(arr.begin(),arr.end());
        int num1 = 0;
        int num2 = 0;
        for(int i = 0; i < n; i++){
            if(i % 2 == 0) num1 = num1 * 10 + arr[i];
            else num2 = num2 * 10 + arr[i];
        }
        return num1 + num2;
    }
};
int main(){
    vector<int>arr = {5,3,0,7,4};
    int n = arr.size();
    Solution obj;
    cout<<obj.minsum(arr,n);
    return 0;
}