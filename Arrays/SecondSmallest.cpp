#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int SecondSmallest(vector<int>&arr){
        int smallest = arr[0];
        int secondsmallest = INT_MAX;
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] < smallest){
                secondsmallest = smallest;
                smallest = arr[i];
            }
            else if(arr[i] < secondsmallest && arr[i] > smallest){
                secondsmallest = arr[i];
            }
        }
        return secondsmallest;
    }
};
int main(){
    vector<int>arr = {1,4,2,7,0};
    Solution sol;
    cout<<sol.SecondSmallest(arr);
    return 0;
}
