#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> arr(n, vector<int>(n));

        int top = 0, bottom = n - 1;
        int left = 0, right = n - 1;

        int num = 1;
        while(top <= bottom && left <= right){
            for(int i = left; i <= right; i++){
                arr[top][i] = num++;
            }
            top++;
            for(int i = top; i <= bottom; i++){
                arr[i][right] = num++;
                
            }
            right--;
            if(top <= bottom){
                for(int i = right; i >= left; i--){
                  arr[bottom][i] = num++;
            }
            }
            bottom--;
            if(left <= right){
                for(int i = bottom; i >= top; i--){
                    arr[i][left] = num++;
                }
            }
            left++;
        }
        return arr;
    }
};
int main() {
    int n;
    cin >> n;

    Solution obj;
    vector<vector<int>> ans = obj.generateMatrix(n);

    for (auto &row : ans) {
        for (auto &x : row) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}