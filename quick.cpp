#include<bits/stdc++.h>
using namespace std;
class Solution {

    private:
        void quickSortHelper(vector<int>& arr, int low, int high) {
            if (low < high) {
                int pIndex = partition(arr, low, high);
                quickSortHelper(arr, low, pIndex - 1);
                quickSortHelper(arr, pIndex + 1, high);
            }
        }
    
        int partition(vector<int>& arr, int low, int high) {
            int pivot = arr[low];
            int i = low + 1;
            int j = high;
    
            while (i <= j) {
                while (i <= high && arr[i] <= pivot) {
                    i++;
                }
                while (arr[j] > pivot) {
                    j--;
                }
                if (i < j) {
                    swap(arr[i], arr[j]);
                }
            }
            swap(arr[low], arr[j]);
            return j;
        }
    
    public:
        vector<int> quickSort(vector<int>& arr) {
            quickSortHelper(arr, 0, arr.size() - 1);
            return arr;
        }
    };
    