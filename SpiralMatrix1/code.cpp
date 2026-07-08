#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int>SpiralMatrix(vector<vector<int>>arr){
        int n = arr.size();
        int m = arr[0].size();
        int left = 0;
        int top = 0;
        vector<int>ans;
        int right = m - 1;
        int bottom = n - 1;
        while(top <= bottom && left <= right){
            for(int i = left; i <= right; i++){
                ans.push_back(arr[top][i]);
            }
            top++;
            for(int i = top; i <= bottom; i++){
                ans.push_back(arr[i][right]);
                
            }
            right--;
            if(top <= bottom){
                for(int i = right; i >= left; i--){
                ans.push_back(arr[bottom][i]);
            }
            }
            bottom--;
            if(left <= right){
                for(int i = bottom; i >= top; i--){
                    ans.push_back(arr[i][left]);
                }
            }
            left++;
        }
        return ans;
    }

};
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>arr(n, vector<int>(m));
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr[0].size(); j++){
            cin>>arr[i][j];
        }
    }
    Solution obj;
    vector<int> res = obj.SpiralMatrix(arr);
    for(int i = 0; i < res.size(); i++){
        cout<<res[i]<<" ";
    }
    return 0;
}