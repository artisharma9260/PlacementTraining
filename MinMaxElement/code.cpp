#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    pair<int,int> minmax(vector<int>& arr){
        int n = arr.size();
        int mn,mx;
        int i;
        if(n % 2 == 0){
            if(arr[0] < arr[1]){
                mn = arr[0];
                mx = arr[1];
            }
            else{
                mn = arr[1];
                mx = arr[0];
            }
            i = 2;
        }
        else{
            mn = mx = arr[0];
            i = 1;
        }
        while(i < n - 1){
            int small,large;
            if(arr[i] < arr[i+1]){
                small = arr[i];
                large = arr[i+1];
            }else{
                small = arr[i+1];
                large = arr[i];
            }
            if(small < mn) mn = small;
            if(large > mx) mx = large;
            i += 2;
        }
        return {mn,mx};
    }
};
int main(){
    vector<int>arr = {7,2,9,4,1,8};
    return 0;
}
