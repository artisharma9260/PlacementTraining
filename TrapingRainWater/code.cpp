#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int trap(vector<int>& heights){
        int n = heights.size();
        int left = 0;
        int right = n-1;
        int maxleft = 0;
        int maxright = 0;

        int totalwater = 0;
        while(left <= right){
            if(heights[left] <= heights[right]){
                if(heights[left] >= maxleft){
                    maxleft = heights[left];
                }else{
                    totalwater += maxleft - heights[left];
                }
                left++;
            }else{
                if(heights[right] >= maxright){
                    maxright = heights[right];
                }else{
                    totalwater += maxright - heights[right];
                }
                right--;
            }
            return totalwater;
        }
    };
}