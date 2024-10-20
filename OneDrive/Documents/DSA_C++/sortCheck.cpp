#include <iostream>
#include <vector>

using namespace std;

bool checkIfRotatedSortedArray(const vector<int>& nums) {
    int n = nums.size();
    int countDrops = 0;
    
    for (int i = 1; i < n; ++i) {
        if (nums[i] < nums[i - 1]) {
            countDrops++;
        }
    }
    
    if (nums[n - 1] > nums[0]) {
        countDrops++;
    }

    return countDrops <= 1;
}

int main() {
    vector<int> nums1 = {3, 4, 5, 1, 2};
    vector<int> nums2 = {2, 1, 3, 4};
    vector<int> nums3 = {1, 2, 3};
    
    cout << "Example 1: " << (checkIfRotatedSortedArray(nums1) ? "true" : "false") << endl;  
    cout << "Example 2: " << (checkIfRotatedSortedArray(nums2) ? "true" : "false") << endl;  
    cout << "Example 3: " << (checkIfRotatedSortedArray(nums3) ? "true" : "false") << endl;  
    
    return 0;
}
