#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int smallestElement(vector<int>& arr){
        int mini = arr[0];
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] < mini){
                mini = arr[i];
            }
        }
        return mini;
    }
};
int main(){
    vector<int>arr = {1,4,2,7,0};
    Solution sol;
    cout<<sol.smallestElement(arr);
    return 0;
}