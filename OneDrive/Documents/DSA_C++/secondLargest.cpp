#include <iostream>
#include <vector>
#include <climits>  

using namespace std;

int findSecondLargest(const vector<int>& arr) {
    if (arr.size() < 2) {
        return -1;  
    }

    int firstLargest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int num : arr) {
        if (num > firstLargest) {
            secondLargest = firstLargest;  
            firstLargest = num;  
        } else if (num < firstLargest && num > secondLargest) {
            secondLargest = num;  
        }
    }

    if (secondLargest == INT_MIN) {
        return -1;
    }

    return secondLargest;
}

int main() {
    vector<int> arr1 = {12, 35, 1, 10, 34, 1};
    vector<int> arr2 = {10, 10};
    
    cout << "Second largest in arr1: " << findSecondLargest(arr1) << endl;  
    cout << "Second largest in arr2: " << findSecondLargest(arr2) << endl;  

    return 0;
}
