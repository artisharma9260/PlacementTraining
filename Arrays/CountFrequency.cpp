#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void countFrequency(vector<int>&arr){
        unordered_map<int,int>mp;
        for(int i = 0; i < arr.size(); i++){
            mp[arr[i]]++;
        }
        for(auto it : mp){
            cout<<it.first<<" "<<it.second<<endl;
        }
    }
};
int main(){
    vector<int>arr = {2,2,3,1,6,2,3,9};
    Solution sol;
    sol.countFrequency(arr);
    return 0;
}