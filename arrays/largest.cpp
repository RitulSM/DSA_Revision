#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int largestElement(vector<int>& nums) {
            int largest=nums[0];
            int n=nums.size();
            for(int i=1;i<n;i++){
                if(nums[i]>largest)
                largest=nums[i];
            }
            return largest;
    
        }
    };