#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
            vector<int> ans;
            int i=0,j=0;
            int n1=nums1.size();
            int n2=nums2.size();
            while(i<n1 && j<n2){
                if(nums1[i]<nums2[j]){
                    i++;
                }
                else if (nums1[i]>nums2[j]){
                    j++;
                }
                else{
                    ans.push_back(nums1[i]);
                    i++;
                    j++;
                }
            }
            return ans;
        }
    };