#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
     void reverseArray(vector<int>& nums, int start, int end) {
    
            while (start < end) {
                swap(nums[start],nums[end]);
                start++;
                end--;
            }
        }
    
        void rotateArray(vector<int>& nums, int k) {
            int n=nums.size();
            k=k%n;
             reverseArray(nums, 0, k - 1);
    
            // Reverse the last n-k elements
            reverseArray(nums, k, n - 1);
    
            // Reverse the entire vector
            reverseArray(nums, 0, n - 1);
        }
        };
    