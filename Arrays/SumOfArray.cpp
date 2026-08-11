#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int SumOfArray(vector<int>& arr){
        int sum = 0;
        for(int i = 0; i < arr.size(); i++){
            sum = sum + arr[i];
        }
        return sum;
    }
};
int main(){
    vector<int>arr = {1,2,3,4};
    Solution sol;
    cout<<sol.SumOfArray(arr);
    return 0;
}