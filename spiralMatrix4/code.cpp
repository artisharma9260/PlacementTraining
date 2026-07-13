#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> matrix(m, vector<int>(n));
        int left = 0,right = n-1,top = 0,bottom = m-1;
        while(left <= right && top <= bottom){
            for(int i = left; i <= right; i++){
                if(head){
                matrix[top][i] = head->val;
                head=head->next;
                }
                else{
                    matrix[top][i] = -1;
                }
            }
            top++;
            for(int i = top; i <= bottom; i++){
                if(head){
                    matrix[i][right] = head->val;
                    head=head->next;
                }
                else{
                    matrix[i][right] = -1;
                }
            }
            right--;
            if (top <= bottom) {
                for(int i =right; i >= left; i--){
                    if(head){
                    matrix[bottom][i] = head->val;
                    head = head->next;
                    }
                    else{
                        matrix[bottom][i] = -1;
                    }
                }
            }
            bottom--;
            if (left <= right) {
                for(int i = bottom; i >= top; i--){
                    if(head){
                        matrix[i][left] = head->val;
                        head=head->next;
                    }
                    else{
                        matrix[i][left] = -1;
                    }
                }
            }
            left++;

        }
        return matrix;
    }
};