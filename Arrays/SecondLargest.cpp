#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int secondLargest(vector<int>& arr){
        int largest = arr[0];
        int secondLargest = INT_MIN;
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] > largest){
                secondLargest = largest;
                largest = arr[i];
            }
            else if(arr[i] > secondLargest && arr[i] < largest){
                secondLargest = arr[i];
            }

        }
        return secondLargest;
    }
};
int main(){
    vector<int>arr = {1,4,2,7,0};
    Solution sol;
    cout<<sol.secondLargest(arr);
    return 0;
}
