
#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
                // Use a set to store unique elements
            set<int> s;
            
            // Insert elements from nums[] into the set
            for (int num : nums) {
                s.insert(num);
            }
            
            // Get the number of unique elements
            int k = s.size();
            int j = 0;
            
            // Copy unique elements from set to nums
            for (int x : s) {
                nums[j++] = x;
            }
            
            // Return the number of unique elements
            return k;
        }
    };