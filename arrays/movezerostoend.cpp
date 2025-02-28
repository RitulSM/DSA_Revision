#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int j = 0;  // index for the next non-zero element
            int n = nums.size();
            for (int i = 0; i < n; i++) {
                if (nums[i] != 0) {
                    swap(nums[i], nums[j]);
                    j++;
                }
            }
        }
    };