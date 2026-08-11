#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> AscendingDescending(vector<int>& arr){
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int left = n/2;
        int right = n-1;
        while(left < right){
            swap(arr[left] , arr[right]);
            left++;
            right--;
        }
        return arr;
    }
};
int main(){
    Solution sol;
    vector<int>arr = {1,2,4,3,9,0};
    sol.AscendingDescending(arr);
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}