#include <iostream>
#include <vector>

using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int total_sum = n * (n + 1) / 2;  
    int current_sum = 0;
    
    
    for (int num : nums) {
        current_sum += num;
    }
    

    return total_sum - current_sum;
}

int main() {
    vector<int> nums1 = {3, 0, 1};
    vector<int> nums2 = {0, 1};
    vector<int> nums3 = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    
    cout << "Missing number in nums1: " << missingNumber(nums1) << endl; 
    cout << "Missing number in nums2: " << missingNumber(nums2) << endl;  
    cout << "Missing number in nums3: " << missingNumber(nums3) << endl; 
    
    return 0;
}
