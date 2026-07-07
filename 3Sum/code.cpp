#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<vector<int>> ThreeSum(vector<int>& arr,int target){
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        int n = arr.size();
        for(int i = 0; i < n; i++){
            if(i > 0 && arr[i] == arr[i-1]) continue;
            int left = i+1;
            int right = n-1;
            while(left < right){
                int sum = arr[i] + arr[left] + arr[right];
                if(sum == target){
                    ans.push_back({arr[i],arr[left],arr[right]});
                    left++,right--;
                    while(left < right && arr[left] == arr[left - 1]) left++;
                    while(left < right && arr[right] == arr[right + 1]) right--;
                }
                else if(sum < target) left++;
                else right--;
                
            }
        }
        return ans; 
    }
};
int main(){
    vector<int>arr = {4,5,6,7,10,3,1};
    Solution obj;
    vector<vector<int>>res = obj.ThreeSum(arr,10);
    for(int i = 0 ; i < res.size(); i++){
        for(int j = 0; j < res[i].size(); j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}