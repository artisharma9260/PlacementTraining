#include<bits/stdc++.h>
using namespace std;
double Median(vector<int>& arr){
        sort(arr.begin(),arr.end());
        int n = arr.size();
        if(n % 2 != 0){
            return arr[n/2];
        }
        else{
            return (arr[n/2] + arr[n/2-1]) / 2.0;
        }
        return -1;
}
int main() {
    vector<int>arr = {4, 7, 1, 2, 5, 6};
    int n = 6;
    cout << "The median of the array is: ";
    double ans = Median(arr);  
    cout<<ans;// Function call to calculate and print the median
    return 0;
}