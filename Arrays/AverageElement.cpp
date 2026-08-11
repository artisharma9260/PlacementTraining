#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int AverageOfElement(vector<int>& arr){
        double sum = 0;
        double n = arr.size();
        for(int i = 0; i < n; i++){
            sum = sum + arr[i];
        }
        double avg = sum/n;
        return avg;
    }
};
int main(){
    vector<int>arr = {1,2,3,4,5};
    Solution sol;
    double ans = sol.AverageOfElement(arr);
    cout<<fixed<<setprecision(2)<<ans;
    return 0;
}