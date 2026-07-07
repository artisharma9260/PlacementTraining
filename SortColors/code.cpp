#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> sortColor(vector<int>& arr){
        int count0 = 0,count1 = 0,count2 = 0;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == 0) count0++;
            else if(arr[i] == 1) count1++;
            else count2++;
        }
        for(int i = 0; i < count0; i++){
            arr[i] = 0;
        }
        for(int i = count0; i< count0+count1; i++){
            arr[i] = 1;
        }
        for(int i = count0+count1; i < count2; i++){
            arr[i] = 2;
        }
        return arr;
    }
};
int main(){
    vector<int>arr = {0,2,1,0,1,0,0,1,2};
    Solution obj;
    arr = obj.sortColor(arr);
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i];
    }
    return 0;
}