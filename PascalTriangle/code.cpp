#include<bits/stdc++.h>
using namespace std;
vector<int> generateRow(int row){
    vector<int>ansRow;
    long long ans = 1;
    for(int col = 1; col < row; col++){
        ans = ans * (row - col);
        ans = ans / (col);
        ansRow.push_back(ans);
    }
    return ansRow;
}
vector<vector<int>>pascalTriangle(int n){
    vector<vector<int>>ans;
    for(int i = 1; i <= n; i++){
        ans.push_back(generateRow(i));
    }
    return ans;
}