#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool PermuteTwoArray(vector<int>& arr1,vector<int>& arr2,int k){
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end(),greater<int>());
        for(int i = 0; i < arr1.size(); i++){
            if(arr1[i] + arr2[i] < k) return false;
        }
        return true;
    }
};
int main(){
    vector<int>arr1 = {2,1,3};
    vector<int>arr2 = {7,8,9};
    Solution obj;
    bool isvalid = obj.PermuteTwoArray(arr1,arr2,10);
    if(isvalid){
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}