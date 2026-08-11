#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> reverseAnArray(vector<int>&arr){
        int left = 0;
        int right = arr.size() - 1;
        while(left < right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        return arr;
    }
};
int main(){
    vector<int>arr = {1,2,3,4,5};
    Solution sol;
    sol.reverseAnArray(arr);
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}