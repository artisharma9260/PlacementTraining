#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool LuckySeven(vector<int>& arr){
        for(int i = 0; i < arr.size()-2; i++){
            if(arr[i]+arr[i+1]+arr[i+2] == 7) return true;
        }
        return false;
    }
};
int main(){
    vector<int>arr = {1,2,4,6};
    Solution obj;
   bool isLucky = obj.LuckySeven(arr);
    if(isLucky){
        cout<<"Lucky seven";
    }
    else{
        cout<<"Not found Lucky seven";
    }
}