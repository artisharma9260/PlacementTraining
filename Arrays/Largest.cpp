#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int LargestElement(vector<int>& arr){
        int maxi = arr[0];
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] > maxi){
                maxi = arr[i];
            }
        }
        return maxi;
    }
};
int main(){
    vector<int>arr = {1,4,2,7,0};
    Solution sol;
    cout<<sol.LargestElement(arr);
    return 0;
}