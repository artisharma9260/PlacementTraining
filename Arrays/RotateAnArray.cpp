#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> RotateAnArray(vector<int>& arr,int d){
        int n = arr.size();
        d = d % n;
        vector<int>temp(d);
        for(int i = 0; i < d; i++){
            temp[i] = arr[i];
        }
        int j = d;
        for(int i = 0; i < n - d; i++){
            arr[i] = arr[j];
            j++;
        }
        j = 0;
        for(int i = n-d; i < n; i++){
            arr[i] = temp[j];
            j++;
        }
        return arr;
    }
};
int main(){
    vector<int>arr = {1,2,3,4,5};
    Solution sol;
    sol.RotateAnArray(arr,2);
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i];
    }
    return 0;
}