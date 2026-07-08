#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int UpperBound(vector<int>& arr,int target){
        int ans = 0;
        int low = 0;
        int high = arr.size()- 1;
        while(low <= high){
            int mid  = low + (high - low)/2;
            if(arr[mid] <= target){
                ans= mid;
                low = mid+1;
            }
            else high = mid - 1;
        }
        return ans + 1;
    }
};
int main(){
    vector<int>arr = {4,6,8,9,10};
    Solution sol;
    int ans = sol.UpperBound(arr,10);
    cout<<ans;
    return 0;
}