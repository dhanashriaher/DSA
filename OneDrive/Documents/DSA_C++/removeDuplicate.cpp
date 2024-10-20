#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) {
        return 0;  
    }
    
    int k = 0;  
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[k]) {
            k++;  
            nums[k] = nums[i];  
        }
    }
    
    return k + 1;  
}

int main() {
    vector<int> nums1 = {1, 1, 2};
    vector<int> nums2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    
    int k1 = removeDuplicates(nums1);
    int k2 = removeDuplicates(nums2);
    
 
    cout << "Output for nums1: " << k1 << ", nums = [";
    for (int i = 0; i < k1; i++) {
        cout << nums1[i];
        if (i < k1 - 1) cout << ", ";
    }
    cout << "]" << endl;
    
    cout << "Output for nums2: " << k2 << ", nums = [";
    for (int i = 0; i < k2; i++) {
        cout << nums2[i];
        if (i < k2 - 1) cout << ", ";
    }
    cout << "]" << endl;
    
    return 0;
}
